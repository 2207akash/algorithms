/*
    Author: Akash Sen
    Bubble Sort
*/

// MARK: Bubble Sort algorithm
func bubbleSort<T: Comparable>(arr: inout [T]) {
    for i in 0..<arr.count-1 {
        var swapped = false
        var j = 0
        while j < arr.count-1-i {
            if arr[j] > arr[j+1] {
                arr.swapAt(j, j+1)
                swapped = true
            }
            j += 1
        }
        if !swapped {
            break
        }
    }
}


// MARK: Usage
var items = [9, 4, 8, 2, 1, 7, 3, 2, 10, 5, 6]

print("Array before sorting: \(items)")
bubbleSort(arr: &items)
print("Array after sorting: \(items)")