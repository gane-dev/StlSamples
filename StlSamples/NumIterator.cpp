#include"stdafx.h"
#include <iostream>
#include<string>
using namespace std;
class num_iterator {
	int i;
public:
	explicit num_iterator(int position) :i{ i } {}
	int operator*() const { return i; }
	num_iterator& operator++() {
		++i;
		return *this;
	}
	bool operator!=(const num_iterator &other) const {
		return i != other.i;
	}
};
class num_range {
	int a;
	int b;
public:
	num_range(int from, int to) :a{ from }, b{ to } {}
	num_iterator begin() const { return num_iterator{ a }; }
	num_iterator end() const { return num_iterator{ b }; }
};
int main5()
{
	int i1;
	for (int i : num_range{ 100,110 }) {
		std::cout << i << ", ";
	}
	std::cin >> i1;
	return 5;
}
