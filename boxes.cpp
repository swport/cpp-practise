#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> Range(int start, int max, int step);

int main() {

	int numBoxes = 5;
	int initialBoxSize = 5;

	std::vector<int> range( Range(1, 10, 1) );

	int colLength = numBoxes - 1;

	int i = 0;
	while( i < numBoxes )
		colLength += initialBoxSize + i++;

	// start decorating boxes
	//
	// each row
	int j = 0;
	while( j++ < initialBoxSize ) {
		int inb = initialBoxSize -1;
		// each column
		for ( int k = 0,m = 0,b = initialBoxSize; k < colLength; k++ ) {
			if( k == (b + m) && ++m && (b += 5 + m) ) std::cout << ' ';
			std::cout << '*';
		}
		
		std::cout << std::endl;
	}

	return 0;
}

std::vector<int> Range(int start, int max, int step) {
	std::vector<int> range;

	while( start <= max ) {
		range.push_back(start);
		start += step;
	}

	return range;
}
