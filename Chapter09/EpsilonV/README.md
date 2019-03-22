# Exercise

## ex9.1

(a) std::list最适合，为了保持字母顺序。

(b) deque, 在头尾端插入/删除速度很快。

(c) vector

## ex9.2

    std::list<std::deque<int>>

## ex9.3

- 都指向同一个容器中的元素
- 可以通过递增begin来达到end

## ex9.4

    bool func(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
    {
      while (begin != end)
    	{
         if (*begin == value)
             return true;
         begin++;
    	}
    
    	return false;
    }

## ex9.5

    auto func(vector<int>::const_iterator begin, vector<int>::const_iterator end, value)
    {
        for(; begin != end; ++begin)
           if (*begin == value) return begin;
        return end;
    }

## ex9.6

    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(),
                        iter2 = lst1.end();
    while(iter1 < iter2) /* .... */
    
    list的迭代器不支持 <; list为双向链表，元素的地址并不是顺序的。

## ex9.7

    vector<int>::size_type 

## ex9.8

    list<string>::const_iterator //for read
    list<string>::iterator //for write

## ex9.9

begin 返回容器的iterator类型，cbegin返回容器的const_iterator类型。

## ex9.10

    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();  //vector<int>::iterator;
    auto it2 = v2.begin();  //vector<int>::const_iterator;
    auto it3 = v1.cbegin(); //vector<int>::const_iterator;
    auto it4 = v2.cbegin(); //vector<int>::const_iterator;

## ex9.11

    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3{1,2,3};
    vector<int> v4(v1.begin(), v1.end());
    vector<int> v5(10, 1);
    vector<int> v6(10);

## ex9.12

接受容器创建拷贝要求两个容器的类型及其元素类型必须匹配，并且是拷贝整个容器。迭代器拷贝只要求元素能够进行转换，并且可以拷贝容器的部分元素。

## ex9.14

    list<char *> lchar{"hello", "world"};
    vector<string> vstring;
    vstring.assign(lchar.cbegin(), lchar.cend());

## ex9.17

c1 和 c2必须是相同类型的容器，且不是无序关联容器。

## ex9.21

和插入list是一样的。iter初始化为vec.begin();每次insert后，iter变为当前插入元素的位置。

## ex9.22

    #include <iostream>
    #include <vector>
    
    void double_and_insert(std::vector<int>& v, int some_val)
    {
        auto mid = [&]{ return v.begin() + v.size() / 2; };
        for (auto curr = v.begin(); curr != mid(); ++curr)
            if (*curr == some_val)
                ++(curr = v.insert(curr, 2 * some_val));
    }
    
    int main()
    {
        std::vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
        double_and_insert(v, 1);
    
        for (auto i : v) 
            std::cout << i << std::endl;
    }