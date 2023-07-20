# Sorting Algorithms in C

This project contains C implementations of various sorting algorithms. The sorting algorithms are implemented for arrays of integers and a doubly linked list of integers. The project adheres to the given requirements and constraints for implementation.

## Table of Contents

- [Description](#description)
- [Sorting Algorithms](#sorting-algorithms)
- [Usage](#usage)
- [Files](#files)
- [Requirements](#requirements)
- [Author](#author)

## Description

This project provides C implementations for the following sorting algorithms:

1. Bubble Sort: Sorts an array of integers using the Bubble sort algorithm.
2. Insertion Sort: Sorts an array of integers using the Insertion sort algorithm.
3. Selection Sort: Sorts an array of integers using the Selection sort algorithm.
4. Quick Sort: Sorts an array of integers using the Quick sort algorithm with the Lomuto partition scheme.

The algorithms are implemented in separate C files and follow the given guidelines for function prototypes, allowed editors, compilation flags, etc.

## Sorting Algorithms

- **Bubble Sort**: Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

- **Insertion Sort**: Insertion sort is a comparison-based sorting algorithm that builds a sorted array one element at a time. It iterates through the input list, comparing each element to its left, and inserts it into its correct position.

- **Selection Sort**: Selection sort is an in-place comparison-based sorting algorithm that divides the input list into two parts: the sorted part at the left end and the unsorted part at the right end. It repeatedly selects the minimum element from the unsorted part and moves it to the sorted part.

- **Quick Sort**: Quick sort is a divide-and-conquer sorting algorithm that selects a pivot element from the array and partitions the other elements into two sub-arrays according to the pivot. The sub-arrays are then sorted recursively.

## Usage

To use the sorting algorithms, you can include the `sort.h` header file in your C programs and call the respective sorting functions. The algorithms can sort both arrays and doubly linked lists of integers in ascending order.

For arrays:
```c
#include "sort.h"

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    // Example usage of bubble sort
    bubble_sort(arr, n);

    // Example usage of insertion sort
    insertion_sort(arr, n);

    // Example usage of selection sort
    selection_sort(arr, n);

    // Example usage of quick sort
    quick_sort(arr, n);

    return 0;
}
```
For doubly linked lists:
```c
#include "sort.h"

int main()
{
    // Example usage of insertion sort for doubly linked list
    listint_t *list = NULL;

    // Insert nodes into the list

    insertion_sort_list(&list);

    return 0;
}
```
## Requirements
* Allowed Editors: vi, vim, emacs
* Compilation: gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files should end with a new line.
* A README.md file at the root of the project is mandatory.
* The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
* The prototypes of all functions should be included in the sort.h header file and be include guarded.
* No global variables are allowed.
* No standard library functions (e.g., printf, puts) should be used except for malloc, free, and perror.

## Author
[Jude Alistair](https://github.com/AJ-Stiles)
