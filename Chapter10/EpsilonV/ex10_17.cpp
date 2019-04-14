#include <iostream>
#include <vector>
#include <algorithm>
#include "ex10_12.h"

using namespace std;

int main()
{
	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	std::vector<Sales_data> v{ d1, d2, d3, d4, d5 };

	sort(v.begin(), v.end(), [](const Sales_data &s1, const Sales_data &s2){return s1.isbn().size() > s2.isbn().size();});

	for (const auto &s : v)
		cout << s.isbn() << " ";
	cout << endl;

	return 0;
}