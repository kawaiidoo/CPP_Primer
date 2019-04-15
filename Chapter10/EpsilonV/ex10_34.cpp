#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    reverse_iterator<vector<int>::const_iterator> it = vec.crbegin();

    for (; it != vec.crend(); ++it)
            cout << *it << " ";
    cout << endl;

    return 0;
}