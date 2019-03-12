#include <iostream>

using namespace std;

int main()
{
    int current = 0, val = 0;
    if (cin >> current)
    {
        int count = 1;
        while (cin >> val)
        {
            if (current == val)
                count++;
            else
            {
                cout << current << "occurs" << count << "times" << endl;
                current = val;
                count = 1;
            }
        }
        cout << current << "occurs" << count << "times" << endl;
    }
    return 0;
}