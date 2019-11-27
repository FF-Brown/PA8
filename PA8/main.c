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
	char* list[5] = { "function", "freedom", "fun", "fur", "ferocious" };
	char word[] = "taco cat";
	int result = 0;

	printf("Original string: %s\n", destination);
	my_str_n_cat(destination, source, 15);
	printf("New string: %s\n", destination);

	target_index = binary_search(num_list, 5, 6);
	printf("Target at index: %d\n", target_index);

	result = is_palindrome(word, 8);
	if (result == 1)
		printf("The given word is a palindrome.\n");
	else
		printf("The given word is not a palindrome.\n");

	return 0;
}