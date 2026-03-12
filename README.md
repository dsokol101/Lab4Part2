# LAB 4 Part 2 -- C-Style Arrays Using Pointer Notation

## Overview

In this lab, you will write functions to:

- read a file and populate an array of type `double`
- sort the array
- print the array to a file
- swap values using helper functions

## Instructions

Redo Lab 2, which populated, sorted, and printed an array, but this time use pointers. Your updated program must follow these requirements:

1. Dynamically allocate the array of numbers in `main`.
2. Accept all array parameters in functions as pointers.
3. Write **two** swap functions:

   **a.** One function should accept the addresses of two individual `double` values and swap the values at those addresses.

   **b.** One function should accept:
   - a pointer to the array
   - two integer indices (`i` and `j`)

   This function should swap the elements at positions `i` and `j` in the array.

## Important Notes

- All functions must accept the number of elements in the array as a parameter.
- Do not forget to use `delete[]` on the array at the end of `main`.

---

## Compiling and Running

To run the included unit tests, type the following at the shell prompt:

```bash
make test