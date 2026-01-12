/*
    Author: Akash Sen
    Insertion Sort
*/

// MARK: Insertion Sort algorithm
func insertionSort<T: Comparable>(arr: inout [T]) {
    for i in 1..<arr.count {
        let key = arr[i]
        var j = i-1
        while j >= 0 && key < arr[j] {
            arr[j+1] = arr[j]
            j -= 1
        }
        arr[j+1] = key
    }
}


// MARK: Usage
var items = [9, 4, 8, 2, 1, 7, 3, 2, 10, 5, 6]

print("Array before sorting: \(items)")
insertionSort(arr: &items)
print("Array after sorting: \(items)")