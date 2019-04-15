#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void transOddOrEven(string &in_file, string &odd_file, string &even_file)
{
    fstream ifs(in_file), odd_ifs(odd_file), even_ifs(even_file);
    istream_iterator<int> int_it(ifs), eof;
    ostream_iterator<int> odd_it(odd_ifs, " "), even_it(even_ifs, "\n");
    vector<int> vec;

    copy(int_it, eof, back_inserter(vec));
    copy_if(vec.begin(), vec.end(), odd_it, [](int i){return i%2 != 0;});
    copy_if(vec.begin(), vec.end(), even_it, [](int i){return i%2 == 0;});
}

int main()
{
   string in_file("./intData.txt"), odd_file("./intOddData.txt"), even_file("./intEvenData.txt");
   transOddOrEven(in_file, odd_file, even_file);

   return 0;
}