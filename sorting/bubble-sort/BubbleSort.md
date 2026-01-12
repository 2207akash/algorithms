# Bubble Sort ✅

**Bubble Sort** is a simple, comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which means the list is sorted.

## How it works 🔧

1. Start at the beginning of the array.
2. Compare adjacent elements and swap if the left element is greater than the right element.
3. Repeat this process for each pair of adjacent elements to move the largest unsorted element to its correct position at the end of the array ("bubbling" up).
4. Repeat passes over the array until a full pass produces no swaps.

> Example: Sorting [5, 1, 4, 2, 8]
>
> - Pass 1: compare/swaps → [1, 4, 2, 5, 8]
> - Pass 2: compare/swaps → [1, 2, 4, 5, 8]
> - Pass 3: no swaps → already sorted → [1, 2, 4, 5, 8]

## Complexity & properties 📊

- **Time complexity:**
  - Worst-case: **O(n²)**
  - Average-case: **O(n²)**
  - Best-case: **O(n)** (optimized version detects no swaps and exits early)
- **Space complexity:** **O(1)** (in-place)
- **Stability:** **Stable** (relative order of equal elements is preserved)
- **Adaptive:** Yes (the implementation can stop early when the array becomes sorted)

## Notes on the repository implementation 🔍

- The implementation in `BubbleSort.swift` uses an optimized version that:
  - Tracks whether any swaps occurred during a pass and exits early if none did (best-case O(n)).
  - Shrinks the inner loop by i on each pass because the last i elements are already sorted.
- Because bubble sort only swaps adjacent elements, it preserves the relative order of equal elements and is therefore **stable**.

## Pseudocode

```
repeat
    swapped = false
    for i from 0 to n-2:
        if arr[i] > arr[i+1]
            swap arr[i] and arr[i+1]
            swapped = true
until not swapped
```

## When to use 💡

- Works well on small or nearly-sorted arrays due to the early-exit optimization.