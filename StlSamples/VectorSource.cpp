#include "stdafx.h"

#include<iostream>
#include<algorithm>
#include<vector>
#include<cassert>
#include<string>
using namespace std;
void insert_sorted(vector<string> &v, const string &word)
{
	const auto insert_pos(lower_bound(begin(v), end(v), word));
	v.insert(insert_pos, word);
}
int main2()
{
	int i;
	/*vector<int> v{ 1,2,3,4,5,6 };
	const auto new_end(remove(begin(v), end(v), 2));
	v.erase(new_end, end(v));
	cout << '\n';
	const auto odd([](int i) {return i % 2 != 0; });
	v.erase(remove_if(begin(v), end(v), odd), end(v));
	v.shrink_to_fit();
	for (auto i : v) {
		cout << i << ", ";
	}*/
	//sort
	vector<string> v{"some", "random", "a"};
	assert(false == is_sorted(begin(v), end(v)));
	sort(begin(v), end(v));
	assert(true == is_sorted(begin(v), end(v)));
	insert_sorted(v, "foobar");
	insert_sorted(v, "zzz");
	for (const auto &w : v)
	{
		cout << w << " ";
	}
	cout << '\n';
	cin >> i;
	return 0;
}