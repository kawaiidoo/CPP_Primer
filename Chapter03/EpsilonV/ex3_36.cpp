#include <iostream>
#include <vector>

using namespace std;

bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
{
	if ((pb1 - pe1) != (pb2 - pe2)){
		return false;
	}else{
		for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
			if (*i != *j) return false;
	}

	return true;
}

int main()
{

	int arr1[3] = { 0, 1, 2 };
    int arr2[3] = { 0, 2, 4 };

    if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
    	cout << "The two array are same" << endl;
    else
    	cout << "The two array are not same" << endl;


	//vector
	vector<int> v1 = {0, 1, 2};
	vector<int> v2 = {0, 1, 2};

	if (v1 == v2)
		cout << "The two vector are same." << endl;
	else
		cout << "The two vector are not same" << endl;

	return 0;
}