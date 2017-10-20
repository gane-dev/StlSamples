#include "stdafx.h"

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int> v{ 1,2,3,4,5,6 };
	const auto new_end(remove(begin(v), end(v), 2));
	v.erase(new_end, end(v));
	cout << '\n';
	const auto odd([](int i) {return i % 2 != 0; });
	v.erase(remove_if(begin(v), end(v), odd), end(v));
	v.shrink_to_fit();
	for (auto i : v) {
		cout << i << ", ";
	}

	cin >> i;

}