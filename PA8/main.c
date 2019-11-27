/*
Author: Nathan Brown
Created: 11/20/2019
Description: An assortment of functions answering interview questions.
*/

#include "pa8.h"

int main(void)
{
	char destination[20] = "andy";
	char source[] = " o'fallon";

	printf("Original string: %s\n", destination);
	my_str_n_cat(destination, source, 15);
	printf("New string: %s\n", destination);

	return 0;
}