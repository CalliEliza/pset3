/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

void swap(int arr[], int i, int j);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    bool outcome = false;
    for (int i = 0; i< n; i++) 
    {
        //int midVal = n /2;
        if (values[i] == value) 
        {
            outcome = true;
        }
    }
    return outcome;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = n- 1; i >=0; i--) {
        for (int j = 0; j<= i - 1;j++) {
            if (values[j] > values[j+ 1]) {
                swap(values, j, j+ 1);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d",values[i]);
    }
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
