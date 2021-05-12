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
 
 updated latest on 12 may 2021
 *
 */



#include <stdio.h>
#include <stdlib.h>
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

print_array(test,SIZE);

print_statistics(test, SIZE);

}

/* Function definitions imported from stats.h header file  */


void print_array(unsigned char *p, int N){

int i=0; // variable for traversing the array
for(i=0;i<N;i++){
printf("%u \t",p[i]);
}

}

void print_statistics(unsigned char *p, int N){

printf("\n Mean of array is : %u", find_mean(p, N));

printf("\n Median of array is : %u", find_median(p, N));

printf("\n Maximum element of array is : %u", find_maximum(p, N));

printf("\n Minimum element of array is : %u", find_minimum(p, N));

}

unsigned char find_median(unsigned char *p, int N){

sort_array(p,N);  // sort array in ascending order
 
return p[(N/2)-1];  // return the mid element
}


unsigned char find_maximum(unsigned char *p, int N){

sort_array(p,N);  // sort array in ascending order
 
return p[N-1];  // return the highest element
}


unsigned char find_minimum(unsigned char *p, int N){

sort_array(p, N);    // sort array in ascending order

return p[0];         // return the lowest element

}



unsigned char find_mean(unsigned char *p, int N){

int i=0, sum=0;

for(i=0;i<N;i++){

sum +=p[i];

}

return (unsigned char)(sum/N);

}



unsigned char* sort_array(unsigned char *p, int N){
/* We will use bubble sort for sorting */

int i=0,j=0;
unsigned char temp;
for(i=0;i<N-1;i++){

for(j=0;j<N-1;j++){

if(p[j]>p[j+1]){
/* SWAP */
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;

}
}


}
return p;  // return the same pointer

}



