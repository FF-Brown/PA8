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