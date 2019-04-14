#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<string> &words)
{
	for (const auto &s: words)
		cout << s << " ";
	cout << endl;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	cout << "after sort" << endl;
	printVector(words);

	auto end_unique = unique(words.begin(), words.end());
	cout << "after unique" << endl;
	printVector(words);

	words.erase(end_unique, words.end());
	cout << "after erase" << endl;
	printVector(words);

}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	string word;
	vector<string> words;

	cout << "Please input some words:";
	while (cin >> word)
		words.push_back(word);

	printVector(words);

	elimDups(words);

	stable_sort(words.begin(), words.end(), isShorter); 
	cout << "sort with isShorter" << endl;
	printVector(words);

	return 0;
}