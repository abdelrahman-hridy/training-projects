
#include <iostream>
using namespace std;

template<class Type1,class Type2>
Type1 sum(Type1 a, Type2 b)
{
	Type1 r = a + b;
	return r;
}

template<class T>
T add(T a, T b) {
	return a + b;
}

template<class T>
T multiply(T a, int factor) {
	return a * factor;
}

template<>
string multiply(string str, int factor) {
	// we can't multiply strings
	string res = "";

	while (factor--)
		res += str;

	return res;
}

void main1()
{
	cout << sum(3, 6) << endl;
	cout << sum(3.2, 5) << endl;
	cout << sum(3.2, 5.3) << endl;
	cout << sum('A', 2) << endl;
	cout << sum(1, 'A') << endl;
	cout << sum(string("Iam Harry "), string("Potter")) << endl;
}

void main2() 
{
	string s = "Magic";

	cout << add(10, 4) << "\n";			// 14
	cout << add(s, s) << "\n";			// MagicMagic

	cout << multiply(10, 4) << "\n";	// 40
	cout << multiply(s, 4) << "\n";		// MagicMagicMagicMagic
}