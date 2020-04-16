#include <iostream>

int main() {

	// 		* * * * *
	// 		*      *
	// 		*    *
	// 		*  *
	// 		*

	// program to print above hollow inverted pyramid

	int length = 15;

	int i = 0, spaces = 0;

	// loop through each row
	do {

		if( i == 0 ) {

			// draw each column pixel ( an entire row )
			for ( int j = 0; j < length; j++ )
				std::cout << '*' << ' ';

			i++;

			std::cout << std::endl;

			continue;
		}

		spaces = (length - i) - 2;

		std::cout << '*' << ' ';

		// draw each column pixel ( an entire row )
		for ( int j = 0; j < spaces; j++ )
			std::cout << ' ' << ' ';


		if( i < length-1 )
			std::cout << '*' << ' ';

		i++;

		std::cout << std::endl;

	} while( i < length );

	return 0;
}