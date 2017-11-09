/*
 * licz_wyrazy.c
 *
 *  Created on: 09.11.2017
 *      Author: Piotr Matysiak
 */

#include <stdio.h>

char big(char c) {
	if (c >= 'a' && c <= 'z') {
		c = c - ' ';
	}
	return (c);
}

int main() {
	enum {word, notword} status;
	char c;
	int i = 0;
	while(c = getchar()) {

		putchar(big(c));
	}
}
