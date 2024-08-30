#include"headers.h"
#include"big data.h"
template<typename type1,typename type2>
bool SearchMachine(type1 a, vector <type2> p)
{
	int len = p.size();
	bool ismatch = false;
	for (int i = 0, i < len; i++)
	{
		if (a == p[i].<int>code)
		{
			ismatch = true;
			stu_index = i;
			break;
		}
	}
	return ismatch;
}
