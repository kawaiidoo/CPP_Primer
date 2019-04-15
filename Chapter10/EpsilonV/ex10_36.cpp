#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
   list<int> lst = {0,1,2,3,4,0,5,6,7,0,9,0,19};

   auto it = find(lst.crbegin(), lst.crend(), 0);

   if (it != lst.crend())
           cout << *it << endl;

   return 0;
}