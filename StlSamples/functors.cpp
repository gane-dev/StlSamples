#include "stdafx.h"
#include <iostream>                         // For standard streams
#include <algorithm>                        // For transform()
#include <iterator>                         // For iterators
#include <functional>                       // For function
using namespace std;
class Root
{
public:
	double operator() (double x) { return std::sqrt(x); }
};

int mainfunctors()
{
	int i1;
	double data[]{ 1.5, 2.5, 3.5, 4.5, 5.5 };
	Root root;
	std::cout << "Square roots are:" << std::endl;
	std::transform(begin(data), end(data), std::ostream_iterator<double>(std::cout, " "), root);
	

	// Using an lambda expression as an argument
	std::cout << "\n\nCubes are:" << std::endl;
	std::transform(begin(data), end(data), std::ostream_iterator<double>(std::cout, " "), [](double x) {return x*x*x; });

	std::function<double(double)> ops{ [](double x) { return x*x*x; } };
	std::cout << "\n\nSquares are:" << std::endl;
	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), ops);

	// Using a lambda expression that calls another lambda expression as argument
	std::cout << "\n\n4th powers are:" << std::endl;
	std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), [&ops](double x) {return ops(x)*ops(x); });
	std::cout << std::endl;
	std::cin >> i1;
	return 0;
}
