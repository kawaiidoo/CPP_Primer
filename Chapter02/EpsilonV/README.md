# Note

[note](./note.md)

# Exercise

## 2.1

c++ 确保`short` `int` 至少16位，`long`至少32位，`long long` 至少64位。

无符号类型可以表示大于等于0的值，带符号的类型可以表示正数、负数和0.

`float` 为单精度浮点数，6位有效数字。`double` 为双精度浮点数，10位有效数字。

## 2.2

使用 `double` 或 `float`, 应为利率、本金和付款都是浮点数。

## 2.3

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;  //32
    std::cout << u - u2 << std::endl;  //-32 % (2**32) = 4294967264
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;  //32
    std::cout << i - i2 << std::endl;  //-32
    std::cout << i - u << std::endl;   //0
    std::cout << u - i << std::endl;   //0

## 2.5

    (a) 'a', L'a', "a", L"a"
        'a'是一个字符，L'a'是一个宽字符，"a"是字符串字面值，L"a"是宽字符串字面值
    (b) 10, 10u, 10L, 10uL, 012, 0xC
    		10 is decimal，10u is unsigned decimal, 10L is long decimal, 10uL is unsigned long decimal, 012 is octal, 0xC is hex 
    (c) 3.14, 3.14f, 3.14L
        double, float, long double
    (d) 10, 10u, 10., 10e-2
        decimal, unsigned decimal, double, double

## 2.6

    int month = 9, day = 7; //month 和 day 都是decimal
    int month = 09, day = 07; //month 无效的，octal没有9. 

## 2.7

    (a) "Who goes with F\145rgus?\012"  //字符串
    (b) 3.14e1L //long double
    (c) 1024f  //float
    (d) 3.14L //Long double

## 2.9

    (a) std::cin >> int input_value; //cin 后只能跟变量
    (b) int i = {3.14}; //列表初始化如果值有信息丢失，则报错。
    (c) double salary = wage = 9999.99; //wage 未定义
    (d) int i = 3.14; //正确

## 2.10

    std::string global_str;
    int global_int;
    int main()
    {
        int local_int;
        std::string local_str;
    }
    
    /*
    	  global_str 和 global_int 都是全局变量，所以都是他们对应的零值，global_str 为空字符串，global_in
    		为 0. local_int 为定义在函数内部的局部内置类型变量，所以它将不被初始化(uninitialized), local_str 
        也是局部变量， 但local_str是class,会执行类的默认初始化，所以它为空字符串。
    */

## 2.11

    (a) extern int x = 1024; //定义
    (b) int iy; //定义
    (c) extern int iz; //声明

## 2.12

    (a) int double = 3.14; //invalid
    (b) int _;
    (c) int catch-22; //invalid
    (d) int 1_or_2 = 1; //invalid
    (e) double Double = 3.14;

## 2.13

j的值为100。

## 2.14

合法，输出100 45

## 2.15

    (a) int ival = 1.01;
    (b) int &rval1 = 1.01; //错误 初始值需为对象
    (c) int &rval2 = ival;
    (d) int &rval3; //错误 需要初始化

## 2.16

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    (a) r2 = 3.14; //合法 
    (b) r2 = r1; //合法 相当于 d = i;
    (c) i = r2; //合法 相当于 i = d;
    (d) r1 = d; //合法 相当于 i = d;

## 2.17

输出 10 10

## 2.19

引用并非对象，一旦定义了引用，就无法令其绑定到其他对象。指针是一个对象。

## 2.20

i = i*i;

## 2.21

    int i = 0;
    (a) double* dp = &i; //不合法  类型不一致
    (b) int *ip = i;  //不合法  不能讲int类型的值赋给指针
    (c) int *p = &i;  //合法

## 2.22

    if (p) //...  判定指针是否存在
    
    if (*p) //... 判定指针指向的int值是否大于0

## 2.23

不能

## 2.24

void* 可以指向任何地址，lp 类型不一致

## 2.25

    (a) int* p, i, &r = i; //p 指向int的指针 i int r是引用
    (b) int i, *ip = 0; // i int ip空指针
    (c) int *ip, ip2; //ip 指向int的指针 ip2 int

## 2.26

    (a) const int buf; //非法 必须初始化
    (b) int cnt = 0;
    (c) const int sz = cnt;
    (d) ++cnt; ++sz; //非法 常量不能改变

## 2.27

    (a) int i = -1, &r = 0;  //常量需指向对象
    (b) int *const p2 = &i2; 
    (c) const int i = -1, &r = 0; //
    (d) const int *const p3 = &i2; 
    (e) const int *p1 = &i2;
    (f) const int &const r2; //引用不能是常量
    (g) const int i2 = i, &r = i;

## 2.28

    (a) int i, *const cp; //常量指针必须初始化
    (b) int *p1, *const p2; //常量指针必须初始化
    (c) const int ic, &r = ic; //常量ic 必须初始化
    (d) const int *const p3; //常量指针必须初始化
    (e) const int *p;

# 2.29

    (a) i = ic; //合法
    (b) p1 = p3; //p3是指向常量，p1不是 
    (c) p1 = &ic; //ic是常量
    (d) p3 = &ic; // p3是常量指针
    (e) p2 = p1; // p2是常量指针
    (f) ic = *p3; //ic 是常量

## 2.30

    const int v2 = 0; int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    
    p2为底层const, p3为顶层const, r2为顶层const.

## 2.31

    r1 = v2;  //非法
    p1 = p2;  //非法
    p2 = p1; 
    p1 = p3;  //非法
    p2 = p3; 

## 2.32

    修改为  int null = 0, *p = nullptr;

## 2.33

    a = 42;   //为a赋值
    b = 42;   //为b赋值
    c = 42;   //为c赋值
    d = 42;   //d的类型int *, 修改为 *d = 42;
    e = 42;   //e的类型const int *, 修改为e = &c; 
    g = 42;   //g的类型是整形常量引用，不能修改 

## 2.35

    const int i = 42;   //i是整形常量
    auto j = i;         //j是int
    const auto &k = i;  //k是const int&
    auto *p = &i;       //p是const int * 
    const auto j2 = i, &k2 = i;  //j2是const int  k2是const int&

## 2.36

    int a = 3, b = 4;
    decltype(a) c = a;   //c是int
    decltype((b)) d = a; //d是int&
    ++c;  //c为4
    ++d;  //a d 都为4

## 2.37

    int a = 3, b = 4;
    decltype(a) c = a;    //c是int
    decltype(a = b) d = a; //d是int&

## 2.39

    ex2_39.cpp:3:14: error: expected ';' after struct
    struct Foo {}
                 ^
                 ;
    1 error generated.

## 2.40

    struct Sales_data {
        std::string bookNo;
        std::string bookName;
        unsigned units_sold = 0;
        double price = 0.0;
        double revenue = 0.0;
    };

## 2.41

### 1.51

    #include <iostream>
    #include <string>
    
    struct Sale_data
    {
        std::string bookNo;
        std::string bookName;
        unsigned units_sold = 0;
        double price = 0.0;
        double revenue = 0.0;
    };
    
    int main()
    {
        Sale_data book;
        std::cin >> book.bookNo >> book.bookName >>book.units_sold >> book.price;
        book.revenue = book.units_sold * book.price;
        std::cout << book.bookNo << " " << book.bookName << " " << book.units_sold << " " << book.revenue << " " << book.price;
    
        return 0;
    }

### 1.52

    #include <iostream>
    #include <string>
    
    struct Sale_data
    {
        std::string bookNo;
        std::string bookName;
        unsigned units_sold = 0;
        double price = 0.0;
        double revenue = 0.0;
    };
    
    int main()
    {
        Sale_data book1, book2;
        std::cin >> book1.bookNo >> book1.units_sold >> book1.price;
        std::cin >> book2.bookNo >> book2.units_sold >> book2.price;
        book1.revenue = book1.units_sold * book1.price;
        book2.revenue = book2.units_sold * book2.price;
    
        if (book1.bookNo == book2.bookNo)
        {
            unsigned totalCnt = book1.units_sold + book2.units_sold;
            double totalRevenue = book1.revenue + book2.revenue;
            std::cout << book1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
            if (totalCnt != 0)
                std::cout << totalRevenue / totalCnt << std::endl;
            else
                std::cout << "(no sales)" << std::endl;
            return 0;
        }
        else
        {
            std::cerr << "Data must refer to same ISBN" << std::endl;
            return -1;  // indicate failure
        }
    }

### 1.6

    #include <iostream>
    #include <string>
    
    struct Sale_data
    {
        std::string bookNo;
        std::string bookName;
        unsigned units_sold = 0;
        double price = 0.0;
        double revenue = 0.0;
    };
    
    int main()
    {
        Sale_data total;
        if (std::cin >> total.bookNo >> total.bookName >> total.units_sold >> total.price)
        {
            total.revenue = total.units_sold * total.price;
    
            Sale_data trans;
            while (std::cin >> trans.bookNo >> trans.bookName >> trans.units_sold >> trans.price)
            {
                trans.revenue = trans.units_sold * trans.price;
    
                if (total.bookNo == trans.bookNo)
                {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                }
                else
                {
                    std::cout << total.bookNo << " " << total.bookName << " "<< total.units_sold << " " << total.revenue << " ";
                    if (total.units_sold != 0)
                        std::cout << total.revenue / total.units_sold << std::endl;
                    else
                        std::cout << "(no sales)" << std::endl;
    
                    total.bookNo = trans.bookNo;
    								total.bookName = trans.bookName;
                    total.units_sold = trans.units_sold;
                    total.price = trans.price;
                    total.revenue = trans.revenue;
                }
            }
    
            std::cout << total.bookNo << " " << total.bookName << " "<< total.units_sold << " " << total.revenue << " ";
            if (total.units_sold != 0)
                std::cout << total.revenue / total.units_sold << std::endl;
            else
                std::cout << "(no sales)" << std::endl;
    
            return 0;
        }
        else
        {
            std::cerr << "No data?!" << std::endl;
            return -1;  // indicate failure
        }
    }