#include "stdafx.h"
#include <numeric>                                       // For accumulate() - sums a range of elements
#include <iostream>                                      // For standard streams
#include <iterator>                                      // For iterators and begin() and end()
#include<windows.system.h>
using namespace std;
int mainsimpleiterm()
{
	int i;
	double data[]{ 2.5, 4.5, 6.5, 5.5, 8.5 };
	std::cout << "The array contains:\n";
	for (auto iter = begin(data); iter != end(data); ++iter)
		std::cout << *iter << " ";

	
	auto total = std::accumulate(begin(data), end(data), 0.0);
	std::cout << "\nThe sum of the array elements is " << total << std::endl;
	cin >> i;
	return 0;
}