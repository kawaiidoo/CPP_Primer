## 1.1

## 1.2

./a.out
echo $?
255
Exit code 255: Exit status out of range.

## 1.3

## 1.4

## 1.5

## 1.6

不合法。修改方案如下：
    1）如果写成3条语句，则每一条语句中 << 左侧应为一个 ostream 对象 cout。
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;

    2) 如果写成一条语句，则去掉第一、二行的分号（;）即可。
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std:endl;

## 1.7

g++ 1_07.cpp
错误输出如下：
1_07.cpp: In function ‘int main(int, char**)’:
1_07.cpp:9:6: error: expected primary-expression before ‘/’ token
     */
      ^
1_07.cpp:10:5: error: expected primary-expression before ‘int’
     int i, j;
     ^~~
1_07.cpp:11:12: error: ‘i’ was not declared in this scope
     cin >> i;
            ^
1_07.cpp:12:12: error: ‘j’ was not declared in this scope
     cin >> j;

## 1.8
    std::cout << "/*";                // 输出/*
    std::cout << "*/";                // 输出*/
    //std::cout << /* "*/" */;        // 错误
    std::cout << /* "*/" /* "/*" */;  // 输出 /* 

第三条输出语句错误：
1_08.cpp:10:24: warning: missing terminating " character
     std::cout << /* "*/" */;
                        ^
1_08.cpp:10:24: error: missing terminating " character
     std::cout << /* "*/" */;
                        ^~~~~
1_08.cpp: In function ‘int main(int, char**)’:
1_08.cpp:14:5: error: expected primary-expression before ‘return’
     return 0;

## 1.9

## 1.10

## 1.11

## 1.12

函数完成-100到100的累加，最后的累加和 sum=0.

## 1.13

ex1.9
#include <iostream>

using namespace std;

int main()
{
    int i = 50;
    int sum = 0;
    for (i = 50; i <= 100; i++)
        sum += i;

    cout << sum << endl;

    return 0;
}

ex1.10
#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    for (i = 10; i >=0; i--)
        cout << i << endl;

    return 0;
}

ex1.11
#include <iostream>

using namespace std;

int main()
{
    cout << "Input 2 numbers:" << endl;
    int i = 0, j = 0;
    cin >> i >> j;
    if (i <= j)
    {
        for (k = i; k <= j; k++)
            cout << k << endl;
    }
    else
    {
        cout << "ERR." << endl;
    }
    
    return 0;
}

## 1.14

参考以下链接：
https://zhidao.baidu.com/question/35405295.html
https://blog.csdn.net/qq_39345059/article/details/78266526
https://blog.csdn.net/qq_41269379/article/details/81669927

## 1.17

如果输入的所有值都相同，则输出一行 该值出现了（输入个数）次
如果输入的值都不相同，则输出（输入个数）行 每个值出现了一次