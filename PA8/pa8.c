/*
Author: Nathan Brown
Created: 11/20/2019
Description: An assortment of functions answering interview questions.
*/

#include "pa8.h"

char* my_str_n_cat(char* destination, char* source, int n)
{
	//int index = 0;
	char* buff = destination;

	while (*destination != '\0') {
		++destination;
		//++index;
	}
	//printf("Index: %d\n", index);
	
	while (source != '\0' && n > 0) {
		*destination = *source;
		++destination;
		++source;
		--n;
	}
	return destination;
}
int binary_search(int arr[], int size)
{

}