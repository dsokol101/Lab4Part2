#include <fstream>
#include <string>
#include <iostream>
#include <array>
#include <cstdlib>
#include "../include/lab4part2.h"

using namespace std;

void print(int nums[], size_t size)
{   
   
}


int load(int nums[], size_t size, string filename)
{

   
}

void sort(int nums[], size_t size)
{
   
}

/*************************************************************************************** 
 * You can put this in to help you test your code. */
 
int main()
{
    string filename = "my_file.txt";
    const size_t SIZE = 100;
    int measurements[SIZE];

    int sz = load(measurements, SIZE, filename);
    sort(measurements, sz);
    print(measurements, sz);
    return 0;
}
/***************************************************************************************/
