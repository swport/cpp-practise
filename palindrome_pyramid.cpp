#include <iostream>
#include <cmath>

int main() {

	// ********1********

	// *******2*2*******

	// ******3*3*3******

	// *****4*4*4*4*****

	// ****5*5*5*5*5****

	// ***6*6*6*6*6*6***

	// program to print above hollow inverted pyramid

	int length = 5, columns = length + 10, init_half = floor(columns / 2), half = 0, k = 0;

	
	// loop through each row
	for ( int i = 1; i <= length; i++ ) {

		half = init_half - i;

		for ( k = 0; k < half; k++ ) {
			std::cout << '*' << ' ';
		}

		for ( k = 0; k < i + (i - 1); k++ ) {
			if( k % 2 == 0 ) std::cout << i << ' ';
			else std::cout << '*' << ' ';
		}

		for ( k = 0; k < half; k++ ) {
			std::cout << '*' << ' ';
		}

		std::cout << std::endl;
	}


	return 0;
}