#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    list<int> lst;

    copy(vec.rbegin()+2, vec.rend()-3, back_inserter(lst));

    for (auto &i : lst)
            cout << i << " ";
    cout << endl;

    return 0;
}