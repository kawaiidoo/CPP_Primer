#include <iostream>
#include <list>

using namespace std;

void remove_evens_and_double_odds(list<int> &lst)
{
	auto iter = lst.begin();
	while (iter != lst.end())
	{
		if (*iter % 2)
		{
			iter = lst.insert(iter, *iter);
			advance(iter, 2);
		}else{
			iter = lst.erase(iter);
		}
	}
}

int main()
{
    list<int> lst = {1,2,3,4,5,6,7,8,9,10};
    remove_evens_and_double_odds(lst);

    for (auto i : lst)
    	cout << i << " ";
    cout << endl;

    return 0;
}