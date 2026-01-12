/*
    Author: Akash Sen
    Selection Sort
*/

// MARK: Selection Sort algorithm
func selectionSort<T: Comparable>(arr: inout [T]) {
    for i in arr.indices {
        var minIndex = i
        for j in i+1..<arr.count {
            if arr[j] < arr[minIndex] {
                minIndex = j
            }
        }
        arr.swapAt(i, minIndex)
    }
}


// MARK: Usage
var items = [9, 4, 8, 2, 1, 7, 3, 2, 10, 5, 6]

print("Array before sorting: \(items)")
selectionSort(arr: &items)
print("Array after sorting: \(items)")