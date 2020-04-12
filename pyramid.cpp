#include <iostream>

int main() {

	//     	    1
	//        2 3 2
	//      3 4 5 4 3
	//    4 5 6 7 6 5 4
	//  5 6 7 8 9 8 7 6 5

	// program to print above pyramid

	int length = 5;

	int spaces  = 0;
	int rowLen  = 1;

	for ( int i = 1; i <= length; i++ ) {
		spaces = length - i;

		for ( int j = 0; j < spaces; j++ )
			std::cout << ' ';

		for ( int k = 1, m = i; k <= rowLen; k++ ) {
			std::cout << m;

			if( k >= i ) m--;
			else m++;
		}

		rowLen += 2;
		std::cout << std::endl;
	}

	return 0;
}