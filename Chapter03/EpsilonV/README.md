



# Note

[note](./note.md)

# Exercise

## ex3.3

is >> s, 输入以空格作为分隔符。readline(is, s) 输入以 \n 作为分隔符。

## ex3.7

没有变化，注意使用引用。

## ex3.9

不合法，s 是空字符串，undefined behavior.

## ex3.11

    const string s = "Keep out!";
    for (auto &c:s) {....}
    取决于对c的操作，若不改动c的值则是合法的，c的类型是char &;

## ex3.12

    (a) vector<vector<int>> ivec; //合法 元素类型vector<int>
    (b) vector<string> svec = ivec; //非法 元素类型不同
    (c) vector<string> svec(10, "null"); //使用值初始化svec，有10个元素

## ex3.13

    (a) vector<int> v1;     //一个元素 值为0
    (b) vector<int> v2(10);  //10个元素 值为0
    (c) vector<int> v3(10, 42);  //10个元素 值为42
    (d) vector<int> v4{10};    //列表初始化  一个元素 值为10
    (e) vector<int> v5{10, 42};  //列表初始化 2个元素 值为10 42
    (f) vector<string> v6{10};   //元素值不能执行列表初始化 使用默认值初始化化  10个元素 值为空字符串
    (g) vector<string> v7{10, "hi"}; //使用默认值初始化 10个元素 值为hi

## ex3.18

    vector<int> ivec{42};
    ivec[0] = 42;

## ex3.19

    vector<int> ivec1(10, 42);
    vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3;
    for (int i = 0; i < 10; i++) ivec3.push_back(42);

## ex3.26

迭代器不支持+运算

## ex3.27

    unsigned buf_size = 1024; 
    (a) int ia[buf_size];    //非法 维度必须是常量表达式
    (b) int ia[4*7 - 14];    //合法
    (c) int ia[txt_size()];  //非法 维度必须是常量表达式
    (d) char st[11] = "fundamental"; //非法 没有空间存放空字符

## ex3.28

    string sa[10];  //10个空字符串
    int ia[10];     //10个零
    
    int main() {
        string sa2[10];  //10个空字符串
    		int ia2[10];     //未定义   局部变量不能执行默认初始化
    }

## ex3.29

数组不可变，访问元素不灵活

## ex3.30

数组下标是从0开始的，数组访问会越界。

## ex3.33

数组内的值是未定义。

## ex3.34

p1和p2将指向同一元素。

## ex3.37

输出ca中的每个字符，ca没有以'\0'结尾，导致程序会一直输出内容，直到遇到'\0'.

## ex3.38

指针相加指向了不知何处。