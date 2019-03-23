#include <iostream>
#include <forward_list>

using namespace std;

void remove_evens_and_double_odds(forward_list<int> &flst)
{
	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while (curr != flst.end())
	{
		if (*curr % 2)
		{
			curr = flst.insert_after(prev, *curr);
			advance(prev, 2);
			advance(curr, 2);
		}else
		{
			curr = flst.erase_after(prev);
		}
	}
}

int main()
{
	forward_list<int> flst = {1,2,3,4,5,6,7,8,9};
	remove_evens_and_double_odds(flst);

	for(auto i : flst)
		cout << i << " ";
	cout << endl;

	return 0;
}