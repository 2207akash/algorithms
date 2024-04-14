// MARK: Linear search algorithm
func linearSearch<T: Equatable>(key: T, items: [T]) -> Int? {
    for (index, item) in items.enumerated() {
        if item == key {
            return index
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
