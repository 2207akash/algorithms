/*
    Author: Akash Sen
    Binary Search
*/

// MARK: Binary search algorithm
func binarySearch<T: Equatable>(key: T, items: [T]) -> Int? {
    var low = 0, high = items.count - 1
    while low <= high {
        let mid = (low + high) / 2
        if items[mid] == key {
            return mid
        } else if items[mid] < key {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }
    return nil
}


// MARK: Usage
var items = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

if let itemIndex = linearSearch(key: 7, items: items) {
    print("Item found in list at index: \(itemIndex)")
} else {
    print("Item not found in list")
}
