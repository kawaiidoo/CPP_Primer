# Exercise

## ex8.1

    std::istream& readAndPrint(std::istream& is)
    {
        std::string s;
        while(is >> s){
    		    std::cout << s << std::endl;
    		}
        
        is.clear();
        
        return is;
    } 

## ex8.3

当`cin`流出现错误时，比如`eofbit` `badbit` `failbit`置位时。

## ex8.11

PersonInfo 为聚合类。

## ex8.14

entry 和 nums 都是类且值不会被改变，所有使用常量引用，