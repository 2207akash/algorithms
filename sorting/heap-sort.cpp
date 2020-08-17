#include <iostream>

using namespace std;

// *************************** HEAP SORT ***************************

// Parameters: (Heap, Heap size, Current element index)
void heapify(int a[], int n, int i) {
	int l = 2*i + 1;	// Index of left child of current element
	int r = 2*i + 2;	// Index of right child of current element
	int max;

	// Find max element among current node, it's left child and it's right child (if they exist)
	if(l < n && a[l] > a[i])
		max = l;
	else
		max = i;
	if(r < n && a[r] > a[max])
		max = r;

	if(i != max) {
		swap(a[i], a[max]);
		heapify(a, n, max);
	}
}

// Parameters: (Heap, Heap size)
void buildHeap(int a[], int n) {
	for(int i = (n/2)-1; i >= 0; --i)
		heapify(a, n, i);
}

// Parameters: (Array name, Array size)
void heapSort(int a[], int n) {
	buildHeap(a, n);	// Convert array to max heap
	
	while(n > 1) {
		swap(a[0], a[n-1]);
		--n;
		heapify(a, n, 0);
	}
}

// ******************************************************

int main() {
	int n = 10;
	int a[n] = {70, 50, 0, 20, 10, 90, 80, 60, 30, 40};
	
	cout << "Original array: ";
	for(auto x:a)
		cout << x << " ";
	cout << endl;

	heapSort(a, n);

	cout << "Sorted array: ";
	for(auto x:a)
		cout << x << " ";

	return 0;
}