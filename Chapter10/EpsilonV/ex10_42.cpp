#include <iostream>
#include <list>
#include <string>

using namespace std;

void elimDups(list<string> &lst)
{
   lst.sort();
   lst.unique();
}

int main()
{
   list<string> lst = {  "aa", "aa", "aa", "aa", "aasss", "aa" };
   elimDups(lst);

   for (const auto &s : lst)
           cout << s << " ";
   cout << endl;

   return 0;
}