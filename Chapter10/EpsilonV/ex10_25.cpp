#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());

	auto end_unique = unique(words.begin(), words.end());

	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);

	stable_sort(words.begin(), words.end(), [](const string &a, const string &b){ return a.size() < b.size(); });

	auto end_it = partition(words.begin(), words.end(), bind(check_size, _1, sz));

	for (auto it = words.begin(); it != end_it; ++it)
		cout << *it << "  ";

	cout << endl;
}

int main()
{
	vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(v, 5);

	return 0;
}