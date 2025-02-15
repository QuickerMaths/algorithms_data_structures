# Quick Sort Algorithm

## Overview

This project implements the **Quick Sort** algorithm, an efficient **divide-and-conquer** sorting method.

## How It Works

1. **Choose a Pivot**: Select an element as the pivot (commonly the first or last element).
2. **Partitioning**: Rearrange the array so that:
   - Elements **smaller than the pivot** go to the left.
   - Elements **greater than the pivot** go to the right.
3. **Recursively Sort**: Apply the same process to the left and right subarrays until each contains fewer than two elements.

### Optimalization 

Algorithm can be optimalized by changing a way of how the pivot is chossen. Most standard way to chosse the pivot is first or last position in the table that is being sorted (like in this implementation).
Choosing a random pivot or a median of three random elements.

**Time complexity:** best case scenario O(n log(n)), worst case scenario O(n^2)

**Space complexity:** best case scenrio O(n), worst case scenario O(log(n))

## Block diagram

![quick sort algorithm block diagram](../../images/quick_sort.png)
