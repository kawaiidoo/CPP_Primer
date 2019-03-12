#include <iostream>

using namespace std;

int prt_num (int i, int j)
{
    
    if (i > j)
    {
        prt_num(j, i);
    }
    int small = i;
    while(small <= j)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}

int main()
{
    cout << "Input 2 numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;

    prt_num(v1, v2);

    return 0;
}