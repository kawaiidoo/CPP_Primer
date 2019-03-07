#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    /* 这一段起提示的作用，注释掉并不影响功能。只是不能正常运行，原因是使用了嵌套注释。
    cout << "Input 2 numbers:\n"; /* 换行使用 \n 或者 endl */
    */
    int i, j;
    cin >> i;
    cin >> j;
    cout << i;
    cout << " x ";
    cout << j;
    cout << " = ";
    cout << i*j;
    cout << endl;

    return 0;
}