/*
Author: Nathan Brown
Created: 11/20/2019
Description: An assortment of functions answering interview questions.
*/

#ifndef PA8_H
#define PA8_H
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

/*
	Function: my_str_n_cat()
	Date Created:
	Description: Mimics the functionality of strncat(), copying a given number of characters from one string onto the end of another.
	Preconditions: None
	Postconditions: Given number of characters concatenated
*/
char* my_str_n_cat(char* destination, char* source, int n);
/*
	Function: binary_search()
	Date Created:
	Description: Searches through an array of integers for a given value
	Preconditions: Array must be sorted
	Postconditions: Returns index of value if found, -1 otherwise
*/
int binary_search(int arr[], int target, int size);
/*
	Function: bubble_sort()
	Date Created:
	Description: Sorts an array of integers in ascending order.
	Preconditions: None
	Postconditions: Array is sorted
*/
void bubble_sort(char* list[], int length);
/*
	Function: is_palindrome()
	Date Created:
	Description: Checks whether a given function is a palindrome. Omits whitespace. Uses recursion.
	Preconditions: None
	Postconditions: Returns 1 if palindrome, 0 otherwise
*/
int is_palindrome(char* str, int length);
/*
	Function: sum_primes()
	Date Created:
	Description: Finds the sum of prime numbers from 2 to a given integer n using recursion
	Preconditions: None
	Postconditions: Returns sum of the values
*/
int sum_primes(int n);
/*
	Function: maximum_occurences()
	Date Created:
	Description: Finds the most common character in a phrase
	Preconditions: None
	Postconditions: Returns the most common character and its frequency via pointers. Also stores data in an array
*/
void maximum_occurences(char phrase[], Occurences record[], int* frequency, char* result);
#endif // !PA8_H
