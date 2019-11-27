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
	int num_list[] = { 0, 5, 10, 17, 300, 330 };
	int target_index = 0;

	printf("Original string: %s\n", destination);
	my_str_n_cat(destination, source, 15);
	printf("New string: %s\n", destination);

	target_index = binary_search(num_list, 18, 6);
	printf("Target at index: %d\n", target_index);



	return 0;
}