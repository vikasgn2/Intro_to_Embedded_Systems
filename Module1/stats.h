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
 * @file stats.h 
 * @brief Header File
 *
 * Header File containing the necessary function declarations and macros
 *
 * @author Vikas G N
 * @date 16/9/2023
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Function Declarations and Comments Section */ 

/**
 * @brief Function that prints the calculated statistics
 *
 * The function prints stats such as minimum, maximum, mean and median.
 *
 * @param minimum - The smallest number present in the array
 * @param maximum - The largest number present in the array
 * @param mean - The average of all the elements in the array
 * @param median - The middle number present in the array
 *
 * @return void
 */
void print_statistics(unsigned char minimum, unsigned char maximum,\
	float mean, unsigned char median);

/**
 * @brief Function that prints the array contents
 *
 * The function takes a pointer to an array along with its size and then it
 * prints the array as an output
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Function that returns the minimum value present in the array
 *
 * The function takes a pointer to an array along with its size and then it
 * returns the minimum value present in the array
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return minimum Smallest value present in the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Function that returns the maximum value present in the array
 *
 * The function takes a pointer to an array along with its size and then it
 * returns the maximum value present in the array
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return maximum Largest value present in the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Function that returns the mean value of the array
 *
 * The function takes a pointer to an array along with its size and then it
 * returns the mean value of the array by adding all the elements and then
 * dividing it by the number of elements present in the array
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return mean Mean value of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Function that returns the median value of the array
 *
 * The function takes a pointer to an array along with its size and then it
 * returns the median value of the array present in the middle of the array
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return median Median value of the array
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Sorts the given array
 *
 * The function takes a pointer to an array along with its size and then it
 * sorts the array in descending order.
 *
 * @param array - A pointer pointing to the first element of the array
 * @param size - Size/Number of elements of the array
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
