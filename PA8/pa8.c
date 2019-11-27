/*
Author: Nathan Brown
Created: 11/20/2019
Description: An assortment of functions answering interview questions.
*/

#include "pa8.h"

char* my_str_n_cat(char* destination, char* source, int n)
{
	char* buff = destination;

	while (*destination != '\0') {
		++destination;
	}
	
	while (*source != '\0' && n > 0) {
		*destination = *source;
		++destination;
		++source;
		--n;
	}
	return destination;
}
int binary_search(int arr[], int target, int size)
{
	int left_index = 0, right_index = size;
	int found = 0, target_index = -1;
	int mid_index = 0;

	while (!found && left_index <= right_index) {
		mid_index = (left_index + right_index) / 2;
		if (target == arr[mid_index]) {
			found = 1;
			target_index = mid_index;
		}
		else if (target < arr[mid_index])
			right_index = mid_index - 1;
		else
			left_index = mid_index + 1;
	}

	return target_index;
}
void bubble_sort(char* list[], int length)
{
	int u = 0, c = 0;

	u = length - 1;
	while (u > 1) {
		c = 1;
		while (c <= u) {
			if (list[c] < list[c - 1])
				//swap c and c-1
				printf("Beep");
			++c;
		}
		--u;
	}
}
int is_palindrome(char* str, int length)
{
	int result = 0;

	if (*str == ' ')
		++str;
	if (*(str + length - 1) == ' ')
		--length;

	if (length <= 1)
		result = 1;
	else if (*str == *(str + length - 1))
		result = is_palindrome(str + 1, length - 2);
	return result;
}