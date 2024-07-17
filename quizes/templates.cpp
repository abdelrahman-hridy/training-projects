
#include <iostream>
using namespace std;

template<typename Type1,typename Type2>
Type1 sum(Type1 a, Type2 b)
{
	Type1 r = a + b;
	return r;
}

void main()
{
	cout << sum(3, 6) << endl;
	cout << sum(3.2, 5) << endl;
	cout << sum(3.2,5.3) << endl;
	cout << sum("A", 2) << endl;
	cout << sum(1, "A") << endl;
	cout << sum(string("Iam Harry "), string("Potter")) << endl;
}