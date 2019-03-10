#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	//range for
	for(const int(&row)[4] : ia)
		for (int i : row) cout << i << " ";
	cout << endl;
	
	//for loop
    for (size_t i = 0; i != 3; i++)
    	for (size_t j = 0; j != 4; j++)
    		cout << ia[i][j] << " ";
    cout << endl;

    //using pointer
    for(int(*row)[4] =  ia; row != ia + 3; ++row)
    	for (int *p = *row; p != *row + 4; ++p)
    		cout << *p << " ";
    cout << endl;

    return 0;
}