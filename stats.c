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
 * @file  stats.c
 * @brief  This file is used for  analysis of data such as mean, max, min, mode, standar 
   deviation, etc.
 *
 * This file has seven functions for printing statistics, array, median, maximum, minimum and one 
   function for sorting array.
 *
 * @author Nitansh Nagpal
 * @date 20th Janauar 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Function definitions imported from stats.h header file  */


void print_array(char *p, int N){

}

void print_statistics(char *p, int N){

}

char find_median(char *p, int N){

}


char find_maximum(char *p, int N){

}


char find_minimum(char *p, int N){

}



char find_mean(char *p, int N){

}



char* sort_array(char *p, int N){

}



