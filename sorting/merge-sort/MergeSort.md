# Merge Sort ✅

**Merge Sort** is a classic divide-and-conquer sorting algorithm. This repository contains a generic Swift implementation in `MergeSort.swift` that sorts arrays of any type conforming to `Comparable`.

## How it works 🧠

1. **Divide:** `mergeSort` splits the array by computing a middle index (`mid`) and recursively sorting the left and right halves.
2. **Conquer (Merge):** `merge` takes two adjacent sorted subranges [leftIndex..midIndex] and [midIndex+1..rightIndex], merges them into a temporary array, then copies the merged result back into the original array.

## Complexity 📈

- **Time complexity:** O(n log n) (best, average, worst)
- **Space complexity:** O(n) additional memory for the temporary array used during merging
- **Stable:** Yes
- **In-place:** No (requires temporary storage)