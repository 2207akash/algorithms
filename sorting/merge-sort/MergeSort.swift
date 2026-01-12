/*
    Author: Akash Sen
    Merge Sort
*/

// MARK: Merge Sort algorithm
// Step 1: Divide
func mergeSort<T: Comparable>(arr: inout [T], leftIndex: Int, rightIndex: Int) {
    if leftIndex >= rightIndex {
        return
    }
    let mid = leftIndex + (rightIndex-leftIndex)/2
    mergeSort(arr: &arr, leftIndex: leftIndex, rightIndex: mid)
    mergeSort(arr: &arr, leftIndex: mid+1, rightIndex: rightIndex)
    merge(arr: &arr, leftIndex: leftIndex, rightIndex: rightIndex, midIndex: mid)
}

// Step 2: Merge (Conquer)
func merge<T: Comparable>(arr: inout [T], leftIndex: Int, rightIndex: Int, midIndex: Int) {
    var k1 = leftIndex, k2 = midIndex+1
    var mergedArray = [T]()
    mergedArray.reserveCapacity(rightIndex-leftIndex+1)

    while k1 <= midIndex && k2 <= rightIndex {
        if arr[k1] <= arr[k2] {
            mergedArray.append(arr[k1])
            k1 += 1
        } else {
            mergedArray.append(arr[k2])
            k2 += 1
        }
    }
    while k1 <= midIndex {
        mergedArray.append(arr[k1])
        k1 += 1
    }
    while k2 <= rightIndex {
        mergedArray.append(arr[k2])
        k2 += 1
    }
    for k in 0..<mergedArray.count {
        arr[leftIndex + k] = mergedArray[k]
    }
}


// MARK: Usage
var items = [9, 4, 8, 2, 1, 7, 3, 2, 10, 5, 6]

print("Array before sorting: \(items)")
mergeSort(arr: &items, leftIndex: 0, rightIndex: items.count-1)
print("Array after sorting: \(items)")