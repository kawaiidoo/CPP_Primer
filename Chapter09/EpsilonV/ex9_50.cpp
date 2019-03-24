#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sum_for_int(vector<string> &svec)
{
	int sum = 0;
	for (auto &s: svec)
		sum += stoi(s);
	return sum;
}

int main()
{
	std::vector<std::string> v = { "1", "2", "3", "4" };
    std::cout << sum_for_int(v) << std::endl;

    return 0;
}