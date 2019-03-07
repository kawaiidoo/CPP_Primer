#include <iostream>
using namespace std;
int main()
{
    int arr;
    int sum = 0;
    cout << "请输入一组数据(按非数字符号结束输入)：" << endl;
    while (cin >> arr)
        sum += arr;
    cout << "sum = " << sum << endl;
    return 0;
}