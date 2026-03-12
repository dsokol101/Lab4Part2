 # LAB 4 Part 2 -- C-style arrays using pointer notation


 ## In this lab, you will write functions to:

 - read a file and populate an array of type double
 - sort the array
 - print the array to a file 
 - a swap function that will be called by the sort function

 ## Redo Lab 2 which populates, sorts, and prints an array, using pointers. Your updated program should follow these requirements:

1. dynamically allocate the array of numbers in main.
2. accept all array parameters in methods as pointers.
3. write 2 swap functions:

3a. Accepts the addresses of two individual integers, and swaps the values at those addresses

3b.  Accepts a pointer to the array and two integer indices (i and j), and swaps the elements at positions i and j in the array.

NOTE: all functions must accept the number of elements in the array as a parameter. 

NOTE: Do not forget to delete[] the array at the end of main.

-------------------------------------------------------------------

 To run my included unit tests, you can type at the shell prompt:
 make test
 
 This command will compile both the files app.cpp and test.cpp
and then run the executable a.out

If you want to delete the executable to start again, you can type:
make clean

--------------------------------------------------------------------


 