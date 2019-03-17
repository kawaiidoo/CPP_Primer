# Exercise

## ex6.1

形参: 定义在函数参数列表内的局部变量，在函数调用时，使用实参传递参数。

实参: 在函数调用时，用来初始化形参。

## ex6.2

    (a) int f(){    //应该返回string    string f(){...}
    	  string s;
    		...
        return s;  
    }
    (b) f2(int i){ /*...*/ }  //应该指定返回类型
    (c) int calc(int v1, int v1) /*...*/ //参数名不能一样
    (d) double square(double x) return x * x; //函数体需要花括号

## ex6.3

    #include <iostream>
    
    using namespace std;
    
    int fact(int val)
    {
        int ret = 1;
        while(val > 1)
          ret *= val--;
        return ret;
    }
    
    int main()
    {
        cout << boolalpha;
        cout << "120 == fact(5) is " (120 == fact(5)) << endl;
        return 0;
    }

## ex6.4

    #include <iostream>
    
    using namespace std;
    
    int fact(int val)
    {
        if (val == 1)
            return 1;
        return val * fact(val-1);
    }
    
    void interactive_fact()
    {
        int i;
    	  cout << "Please enter a number: ";
        cin >> i;
        cout << "The result is " << fact(i) << endl;
    }
    
    int main()
    {
       interactive_fact();
       return 0;
    }

## ex6.5

    #include <iostream>
    
    using namespace std;
    
    int abs(int i)
    {
       return i < 0 ? -i : i;
    }
    
    int main()
    {
    		int i;
        cout << "Please enter a number: ";
        cin >> i;
        cout << "The abs of " << i << " is " << abs(i) << endl;
    
    		return 0;
    }

## ex6.6

局部变量: 定义在块内的变量。

形参: 定义在函数参数列表内的局部变量。

局部静态变量: 局部静态变量在程序第一次经过对象定义语句时初始化，直到程序终止时才被销毁。

    int cout_add(int n)
    {
       static int ctr = 0;
       ctr += n;
       return ctr;
    }
    
    int main()
    {
        for (int i = 0; i != 10; i++)
            cout << cout_add(i) << endl;
       
        return 0;
    }

## ex6.7

    int count()
    {
       static int cnt = 0;
       return cnt++;
    }

## ex6.13

    void f(T) 是传递。
    void f(&T) 是引用传递

## ex6.14

使用引用在拷贝大的参数时，可以考虑使用引用来避免拷贝。如果不想改变实参的值，应避免使用引用。

## ex6.15

- 因为字符串可能很长，因此使用引用避免拷贝；而在函数中我们不希望改变 s 的内容，所以令 s 为常量。
- occurs 是要传到函数外部的变量，所以使用引用，occurs 的值会改变，所以是普通引用。
- 因为我们只需要 c 的值，这个实参可能是右值(右值实参无法用于引用形参)，所以 c 不能用引用类型。
- 如果 s 是普通引用，也可能会意外改变原来字符串的内容。
- occurs 如果是常量引用，那么意味着不能改变它的值，那也就失去意义了。

## ex6.16

函数并没有改变实参的值，使用普通引用会造成不能把const 对象 字面值 或者需要类型转换的对象传递给函数。

    bool is_empty(const string& s) { return s.empty() }

## ex6.17

不相同, any_capital不需要改变实参的值，to_lowercase有可能会改变实参的值，不能使用常量引用。

## ex6.18

    (a) bool compare(const matrix &a, const matrix &b);
    (b) vector<int>::iterator change_val(int, vector<int>::iterator);

## ex6.19

    (a)calc(23.4, 55.1);   //错误，函数直接受一个参数
    (b)cout("abcda", 'a');
    (c)calc(66);
    (d)sum(vec.begin(), vec.end(), 3.8); 

## ex6.20

如果能用常量引用，尽量使用常量引用。函数可能会改变引用的变量的值。

## ex6.24

形参 `const int ia[10]` 其实是 `const int *`, 数组的个数是未知的，可以传递小于10个的数组。

修改如下

    void print(const int(&ia)[10]);

## ex6.28

类型为 `const std::string&`

## ex6.29

取决于initializer_list的元素类型，如果是PODType则声明成引用没什么必要，如果是复杂的类型，应该声明成引用。

## ex6.30

    ex6_30.cpp:14:4: error: non-void function 'str_subrange' should return a value [-Wreturn-type]
                            return;
                            ^
    1 error generated.

## ex6.31

Q: 什么情况下返回的引用无效？

A: 返回函数内部临时变量的引用无效。

Q:什么情况下返回常量的引用无效？

A: 返回函数内部常量的引用无效。

## ex6.32

合法，给数组赋值。

## ex6.34

如果参数是正数，则多乘了1.

如果参数是负数，则程序会一直调用下去，最后会out of memory.

## ex6.35

程序会一直调用下去，传递的值一直是val.

## ex6.36

    string (&func(string (&arrStr)[10]))[10];

## ex6.37

    using ArrT = string[10];
    ArrT& func1(ArrT& arr);
    
    auto func2(ArrT& arr) -> string(&)[10];
    
    string arrS[10];
    decltype(arrS)& func3(ArrT& arr);

## ex6.38

    decltype(odd) &arrPtr(int i)
    {
       return (i % 2) ? odd : even;
    }

## ex6.39

    (a) int calc(int, int);
        int calc(const int, const int); //合法 顶层const无法区分新函数 重复声明
    (b) int get();
        double get();  //非法，参数数量 类型都一致
    (c) int *reset(int *);
        double *reset(double *); //合法 声明reset的double版本

## ex6.40

    (a) int ff(int a, int b = 0, int c = 0); //合法
    (b) char *init(int ht = 24, int wd, char bckgrnd); //非法 默认参数只能在参数列表后面

## ex6.41

    char *init(int ht, int wd = 80, char bckgrnd = ' ');
    (a) init();     //非法 ht没传值
    (b) init(24, 10); //合法
    (c) init(14, '*') //合法 但是将‘*’的ascii的值传给了wd 不合理

## ex6.43

都放在头文件里，a是内联函数，b是函数声明。

## ex6.46

不能，s1.size() == s2.size()不是一个常量表达式。

## ex6.48

合理。如果输入被中断退出程序。

## ex6.49

候选函数是函数匹配式选定的重载函数集里的函数。

可行函数在候选函数中选出符合实参调用的函数。

## ex6.50

    (a) f(2.56, 42)   //二义性
    (b) f(42)         //void f(int) 
    (c) f(42, 0)      //void f(int, int)
    (d) f(2.56, 3.14) //void f(double, double=3.14)

## ex6.52

(a) 类型提升

(b) 算数类型转换

## ex6.53

    (a) int calc(int&, int&);
    		int calc(const int&, const int&);
    (b) int calc(char*, char*);
        int calc(const char*, const char*);
    (c) int calc(char*, char*);
        int calc(char* const, char* const); //不合法。顶层const不影响传入函数的对象。

## ex6.54

    int func(int a, int b);
    
    using pFunc1 = decltype(func) *;
    typedef decltype(func) *pFunc2;
    using pFunc3 = int (*)(int, int);
    typedef int(*pFunc4)(int, int);
    using pFunc5 = int(int, int);
    using pFunc6 = decltype(func);
    
    vector<pFunc1> vec1;
    vector<pFunc2> vec2;
    vector<pFunc3> vec3;
    vector<pFunc4> vec4;
    vector<pFunc5 *> vec5;
    vector<pFunc6 *> vec6;

## ex6.55

    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    int divide(int a, int b) { return b != 0 ? a / b : 0; }

## ex6.56

    std::vector<decltype(func) *> vec{ add, subtract, multiply, divide };
    for (auto f : vec)
              std::cout << f(2, 2) << std::endl;