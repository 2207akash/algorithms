#include <iostream>

using namespace std;

// *************************** TERNARY SEARCH ***************************

// Parameters: (Array name, Array start index, Array end index, Element to search)
int ternarySearch(int a[], int l, int r, int key) {
	while(l <= r) {
		int div1 = l+(r-l)/3, div2 = r-(r-l)/3;	// Divide array into 3 parts of equal size
		if(a[div1] == key)
			return div1;
		else if(a[div2] == key)
			return div2;
		else if(a[div1] > key)
			r = div1-1;
		else if(a[div2] < key)
			l = div2+1;
		else {
			l = div1+1;
			r = div2-1;
		}
	}
	return -1; // if element is not present in array
}

// ******************************************************

int main() {
	int n = 5, key = 15;
	int a[n] = {5, 15, 20, 25, 30};

	int index = ternarySearch(a, 0, n-1, key);	// Ternary search works only in sorted list
	if(index == -1)
		cout << "Element is not present in array";
	else
		cout << "Element is present at index " << index;
	
	return 0;
}