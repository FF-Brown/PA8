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
	char* list[5] = { "cat", "baseball", "apple", "egg", "dog" };
	char word[] = "taco cat";
	int result = 0;

	//Strncat
	printf("Original string: %s\n", destination);
	my_str_n_cat(destination, source, 15);
	printf("New string: %s\n", destination);

	//Binary search
	target_index = binary_search(num_list, 5, 6);
	printf("Target at index: %d\n", target_index);

	//Palindromes
	result = is_palindrome(word, 8);
	if (result == 1)
		printf("The given word is a palindrome.\n");
	else
		printf("The given word is not a palindrome.\n");

	//Bubble sort
	bubble_sort(list, 5);
	puts(list[0]);
	puts(list[1]);
	puts(list[2]);
	puts(list[3]);
	puts(list[4]);

	//Sum of primes
	result = sum_primes(10);
	printf("Sum of primes between 2 and 10: %d\n", result);

	return 0;
}