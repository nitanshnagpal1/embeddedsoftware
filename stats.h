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
 * @brief This is the header file. This file contains declarations of seven functions which is 
   used in stats.c file.
 *
 * The seven functions are print_statistics(), print_array(), find_median(), find_mean(), find_max
   imum(), find_minimum(), sort_array().
 *
 * @author Nitansh Nagpal
 * @date  20th January 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief prints the given array on screen.
 *
 * This functions takes two inputs: a char pointer and integer. The char pointer points to the 
   base address of array and integer type input is the length of array. The function print out
   the array and this function does not return anything.
 *
 * @param char *p :  ponter to an array
 * @param int N   :  Length of array
 * 
 *
 * @return This function does not return anything.
 */
void print_array(char *p, int N);




/**
 * @brief prints the statistics of an array
 *
 * This function prints the statistics of an array including meadian, maximumm, minimum, mean.
   This function takes input a pointer to an array and it does not returns anything.
 *
 * @param char *p :   pointer to an array
 * @param int N   :   Lenght of array
 * @returns This function does not return anythng.
 */
void print_statistics(char *p, int N);




/**
 * @brief This function returns the median of given array
 *
 * This function returns the median of an array. This function takes two input : a pointer to 
   array and length of array.This function returns the median.
 *
 * @param char *p  :  pointer to an array
 * @param int N    :  Length of array
 * @return char a  :  median of an array
 */
char find_median(char *p, int N);



/**
 * @brief This function returns the mean of given array
 *
 * This function returns the mean of an array. This function takes two input : a pointer to 
   array and length of array.This function returns the mean.
 *
 * @param char *p  :  pointer to an array
 * @param int N    :  Length of array
 * @return char    :  mean of an array
 */
char find_mean(char *p, int N);


/**
 * @brief This function returns the maximum of given array
 *
 * This function returns the maximum of an array. This function takes two input : a pointer to 
   array and length of array.This function returns the mean.
 *
 * @param char *p  :  pointer to an array
 * @param int N    :  Length of array
 * @return char    :  maximum of an array
 */
char find_max(char *p, int N);




/**
 * @brief This function returns the minimum of given array
 *
 * This function returns the minimum of an array. This function takes two input : a pointer to 
   array and length of array.This function returns the mean.
 *
 * @param char *p  :  pointer to an array
 * @param int N    :  Length of array
 * @return char    :  minimum of an array
 */
char find_min(char *p, int N);




/**
 * @brief This function sorts the given array and returns the sorted array.
 *
 * This function returns the sorted array. This function takes two input : a pointer to 
   array and length of array.
 *
 * @param char *p  :  pointer to an array
 * @param int N    :  Length of array
 * @return char*   :  pointer of sorted array
 */
char* sort_array(char *p, int N);








#endif /* __STATS_H__ */


