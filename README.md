# BubbleSort Algorithm in C++

## Description
BubbleSort is a simple, comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the array is sorted. Though BubbleSort is one of the easiest algorithms to understand, it is also one of the least efficient, and is generally used for educational purposes rather than in practice.

## Algorithm Overview
1. **Outer Loop**: Traverse the array.
2. **Inner Loop**: Compare each pair of adjacent elements. If the first element is larger than the second, swap them.
3. **Repeat**: Continue this process until no more swaps are needed.

### Early Termination Optimization:
- If no swaps occur during a pass, the algorithm terminates early, as the array is already sorted.

## Code Explanation
- **swap function**: Swaps two elements in the array.
- **bubbleSort function**: Implements the sorting algorithm by repeatedly comparing and swapping adjacent elements.
- **Driver code**: Handles input/output and initializes the sorting process.

## Time and Space Complexity
- **Time Complexity**:
  - **Best case**: `O(n)` – Occurs when the array is already sorted.
  - **Average case**: `O(n^2)`
  - **Worst case**: `O(n^2)`
  
- **Space Complexity**: `O(1)` – Sorting is done in place.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/BubbleSort.git
