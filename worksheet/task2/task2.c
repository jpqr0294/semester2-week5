/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Finley Schofield
 * ID: JPQR0294
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	int len = strlen(hex);

	// if input contains invalid hex digit
	for(int i = 0; i<len; i++) {
		char c = hex[i];
		int num;

		if (c >= '0' && c <= '9') {
			num = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			num = c - 'A' + 10;
		} else if (c >= 'a' && c <= 'f') {
			num = c - 'a' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		decimal = decimal * 16 + num;
	}
	
	
	// print the decimal result
	printf("decimal: %ld\n", decimal);
	return 0;
}