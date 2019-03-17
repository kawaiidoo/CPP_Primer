#include <iostream>

using namespace std;

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

int main()
{
   int i, j;
   i = 10;
   j = 100;

   cout << "i is " << i << " and j is " << j << endl;
   swap_int(&i, &j);
   cout << "call swap_int(&i, &j), now i is " << i << " j is " << j << endl; 

   return 0;
}