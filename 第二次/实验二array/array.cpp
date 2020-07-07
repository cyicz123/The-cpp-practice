#include "array.h"
int main()
{
	/*
	Sqlist1 list1;
	Sqlist2 list2;
	list1.setList();
	cout << "一维线性表的最大值是：" << list1.listMax() << endl;
	
	list2.setList();
	cout << "二维线性表的最小值是：" << list2.listMin() << endl;
	*/

	const char* a = "aBcDeF";
	const char* b = "AbCdEf";
	const char* c = "aacdef";
	const char* d = "aBcDeF";
	cout << "Mystrcmp(a,b):" << Mystrcmp(a, b) << endl;
	cout << "Mystrcmp(a,c):" << Mystrcmp(a, c) << endl;
	cout << "Mystrcmp(a,d):" << Mystrcmp(a, d) << endl;
	return 0;
}