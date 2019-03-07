#include <iostream>

int main(){
    int i = 0, j = 10;
    int *p;

    p = &i;
    p = &j;
    *p = 100;

    std::cout<< i << " " << j << " " << *p << std::endl;

    return 0;
}
