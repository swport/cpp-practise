#include <iostream>

int main() {

 // 	      1
 //         1   1
 //       1   2   1
 //     1   3   3   1
 //   1  4    6   4   1
 // 1  5   10   10  5   1

	// program to print above pascal pyramid

	int length = 5;

	int spaces  = 0;
	int rowLen  = 1;

	int a = 0, b = 0;

	for ( int i = 1; i <= length; i++ ) {
		spaces = length - i;

		for ( int j = 0; j < spaces; j++ )
			std::cout << ' ';

		for ( int k = 1, m = i; k <= rowLen; k++ ) {
			if ( k % 2 == 0 ) std::cout << ' ';
			else {
				a = i - 1;
				
			}
		}

		rowLen += 2;
		std::cout << std::endl;
	}

	return 0;
}