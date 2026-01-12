# Selection Sort ✅

**Selection Sort** is a simple, in-place, comparison-based sorting algorithm. It repeatedly selects the smallest (or largest) element from the unsorted portion of the array and swaps it with the first unsorted element, growing the sorted portion one element at a time.

## How it works 🔧

1. Start with the first element (index 0) as the current position.
2. Find the index of the minimum element in the subarray from the current position to the end.
3. Swap the minimum element with the element at the current position.
4. Move the current position one step right and repeat until the array is sorted.

> Example: Sorting [64, 25, 12, 22, 11]
>
> - Pass 1: min=11 → swap with 64 → [11, 25, 12, 22, 64]
> - Pass 2: min=12 → swap with 25 → [11, 12, 25, 22, 64]
> - Pass 3: min=22 → swap with 25 → [11, 12, 22, 25, 64]
> - Pass 4: min=25 → already in place → [11, 12, 22, 25, 64]

## Complexity & properties 📊

- **Time complexity:**
  - Worst-case: **O(n²)**
  - Average-case: **O(n²)**
  - Best-case: **O(n²)** (selection sort does the same comparisons regardless of initial order)
- **Space complexity:** **O(1)** additional memory (in-place)
- **Stability:** **Not stable** (equal elements may change relative order unless stabilized with extra logic)
- **Adaptive:** Not adaptive (performance does not improve for nearly-sorted input)

## When to use 💡

- Useful for small arrays or when memory is tight and simplicity is prioritized.
- Good teaching example for basic sorting and in-place algorithms.
- Generally outperformed by O(n log n) sorts (e.g., quicksort, mergesort, heapsort) for large inputs.

## Pseudocode

```
for i from 0 to n-2:
    minIndex = i
    for j from i+1 to n-1:
        if arr[j] < arr[minIndex]:
            minIndex = j
    swap arr[i] and arr[minIndex]
```

## Swift implementation 🔧

See the implementation in `SelectionSort.swift` for a concise Swift example. Typical Swift code uses an in-place swap and a nested loop following the pseudocode above.

## Notes & variations ✨

- You can make the algorithm stable by selecting the minimum and shifting elements instead of swapping, but that increases the number of assignments.
- Selection sort performs at most n−1 swaps, which can be useful when swaps are costly compared to comparisons.