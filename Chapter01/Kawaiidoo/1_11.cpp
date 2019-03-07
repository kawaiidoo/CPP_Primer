#include <iostream>

using namespace std;

int main()
{
    cout << "Input 2 numbers:" << endl;
    int i = 0, j = 0;
    cin >> i >> j;
    if (i <= j)
    {
        while(i <= j)
        {
            cout << i << endl;
            i++;
        }
    }
    else
    {
        cout << "ERR." << endl;
    }
    
    return 0;
}