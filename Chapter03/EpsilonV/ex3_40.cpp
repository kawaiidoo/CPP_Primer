//see discuss in https://github.com/Mooophy/Cpp-Primer/pull/241
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

constexpr size_t constexpr_strlen(const char *s) {
    return sizeof(s) / sizeof(*s);
}

int main()
{
	const char s1[] = "Hello";
	const char s2[] = "World";

	constexpr size_t length = constexpr_strlen(s1) + constexpr_strlen(" ") + constexpr_strlen(s2) + 1;
	char s3[length];

	strcpy(s3, s1);
	strcat(s3, " ");
	strcat(s3, s2);

	cout << s3 << endl;

	return 0;
}