//C program to reverse a string by words

#include <stdio.h>

//Function to reverse any sequence starting with pointer begin and ending with pointer end
void reverse(char* begin, char* end) {
	char temp;
	while (begin < end) {
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

//Function to reverse words
void reverseString(char* s) {
	char* word_begin = s;
	//Word boundary
	char* temp = s;

	//Reversing individual words as
	//explained in the first step
	while (*temp) {
		temp++;
		if (*temp == '\0') {
			reverse(word_begin, temp - 1);
		}
		else if (*temp == ' ') {
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	}
	//Reverse the entire string
	reverse(s, temp - 1);
}

//Driver Code
int main() {
	char s[] = "I will reverse in C";
	char* temp = s;
	reverseString(s);
	printf("%s", s);
	return 0;
}
// c1 dynamic scope or static scope - conceptual 
// c2 parameter passing methods - call by value, call by reference, call by address
// c3 garabage collector
// c4 interpreter vs compiler
// c5 object oriented or functional programming paradigm