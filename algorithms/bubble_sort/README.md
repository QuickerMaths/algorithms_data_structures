# Bubble Sort Algorithm

## Overview

This project implements the **Bubble Sort** algorithm, a simple sorting technique that repeatedly swaps adjacent elements if they are in the wrong order.

## How It Works

1. Iterate through the array, comparing adjacent elements.
2. If the first element is greater than the second, swap them.
3. Repeat this process for all elements, pushing the largest value to its correct position at the end of the array.
4. Continue iterating until no swaps are needed.

### Optimization:
- Introduced a **swap flag** that tracks whether any swaps occurred during the last iteration.
- If no swaps are made, the array is already sorted, and the algorithm stops early, improving efficiency.

**Time complexity:** O(n^2) 

**Space complexity:** O(1)

## Block diagram

![bubble_sort block diagram](../../images/bubble_sort.png)
