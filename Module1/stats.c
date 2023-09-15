/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief C Source code file
 *
 * C Source code file containing the logic to perform Statistical Analysis on data
 *
 * @author Vikas G N
 * @date 16/9/23
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
/* Variables section */
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char minimum;
  unsigned char maximum;
  unsigned char mean;
  unsigned char median;

/* Function calls section */
  print_array(test, SIZE);
  minimum = find_minimum(test, SIZE);
  maximum = find_maximum(test, SIZE);
  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  print_statistics(minimum, maximum, mean, median);
  sort_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_array( unsigned char *array, unsigned int size ) {
}

void sort_array( unsigned char *array, unsigned int size ) {
}

unsigned char find_minimum( unsigned char *array, unsigned int size ) {
	unsigned char min;
	return min;
}

unsigned char find_maximum( unsigned char *array, unsigned int size ) {
	unsigned char max;
	return max;
}

unsigned char find_mean( unsigned char *array, unsigned int size ) {
	unsigned char mean;
	return mean;
}

unsigned char find_median( unsigned char *array, unsigned int size ) {
	unsigned char median;
	return median;
}

void print_statistics( unsigned char minimum, unsigned char maximum,\
        float mean, unsigned char median ) {
}
