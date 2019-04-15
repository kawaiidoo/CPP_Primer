#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};

    auto it_begin = --vec.begin();
    auto it = vec.end();

    for (--it; it != it_begin; --it)
            cout << *it << " ";
    cout << endl;

    return 0;
}