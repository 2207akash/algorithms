# Insertion Sort ✅

**Insertion Sort** builds the final sorted array one item at a time. It iterates through the array and inserts each element into its correct position within the already-sorted left portion.

---

## How it works 🔧

1. Start from the second element (index 1). Consider it the "key" to insert into the sorted subarray to its left.
2. Compare the key with elements to its left and shift larger elements one position to the right until the correct spot for the key is found.
3. Place the key into its correct position and continue for each element until the array is sorted.

> Example: Sorting [5, 2, 4, 6, 1, 3]
>
> - Consider 2 → shift 5 to the right, insert 2 → [2, 5, 4, 6, 1, 3]
> - Consider 4 → shift 5 to the right, insert 4 → [2, 4, 5, 6, 1, 3]
> - Continue until sorted → [1, 2, 3, 4, 5, 6]

---

## Complexity & properties 📊

- **Time complexity:**
  - Worst-case: **O(n²)**
  - Average-case: **O(n²)**
  - Best-case: **O(n)** (already-sorted array)
- **Space complexity:** **O(1)** (in-place)
- **Stability:** **Stable** (preserves order of equal elements) ✅
- **Adaptive:** Yes — performs better on nearly-sorted data

---

## Notes on the repository implementation 🔍

- The implementation in `InsertionSort.swift` uses the **shift-and-insert** variant (fewer assignments than repeated swaps): it stores the key, shifts larger elements to the right using assignments, and writes the key once into `arr[j+1]`.
- This variant is stable and typically more efficient where swapping is expensive.

---

## Pseudocode (shift-and-insert, matches repo implementation)

```
for i from 1 to n-1:
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
        arr[j+1] = arr[j]
        j = j - 1
    arr[j+1] = key
```