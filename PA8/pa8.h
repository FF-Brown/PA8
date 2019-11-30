/*
Author: Nathan Brown
Created: 11/20/2019
Description: An assortment of functions answering interview questions.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
	int num_occurences;
	double frequency;
*/
typedef struct occurences {
	int num_occurences;
	double frequency;
}Occurences;

char* my_str_n_cat(char* destination, char* source, int n);
int binary_search(int arr[], int target, int size);
void bubble_sort(char* list[], int length);
int is_palindrome(char* str, int length);
int sum_primes(int n);
void maximum_occurences(char phrase[], Occurences record[], int* frequency, char* result);