#include<iostream>
using namespace std;
#define TRUE  1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define INIT_SIZE 10


class Sqlist1
{
public:
	int* elem;
	int length;
	int listsize;
	Sqlist1();
	~Sqlist1();
	

	int setList();//给线性表赋值。
	

	int listMax();//求线性表最大值
	
};

Sqlist1::Sqlist1()
{
	elem = new int[INIT_SIZE];
	length = 0;
	listsize = INIT_SIZE;
}

Sqlist1::~Sqlist1()
{
	delete[]elem;
}

int Sqlist1::setList()
{
	int num;
	int l;
	cout << "Please input the number of values:";
	cin >> l;
	
	for (auto i = 0; i < l; i++)
	{
		cout << "the value:"; cin >> num;
		elem[length] = num;
		length++;
	}
	return OK;
}

int Sqlist1::listMax()
{
	if (length == 0)return ERROR;
	int max = elem[0];
	for (auto i = 0; i < length; i++)
	{
		if (elem[i] > max)max = elem[i];
	}
	return max;
}




class Sqlist2
{
public:
	int** elem;
	int length;
	int listsize;
	Sqlist2();//创建空线性表
	
	~Sqlist2();
	

	int setList();//给线性表赋值。
	

	int listMin();//求线性表最小值
	
};

Sqlist2::Sqlist2()
{
	elem = new int* [INIT_SIZE];
	for (auto i = 0; i < INIT_SIZE; i++)
	{
		elem[i] = new int[INIT_SIZE];
	}
	length = 0;
	listsize = INIT_SIZE * INIT_SIZE;
}

Sqlist2::~Sqlist2()
{
	for (auto i = 0; i < INIT_SIZE; i++)
	{
		delete[]elem[i];
	}
	delete[]elem;
}

int Sqlist2::setList()
{
	int num;
	int i = 0, j, l;
	cout << "Please input the number of values:";
	cin >> l;
	while (length < l)
	{
		cout << "the value:"; cin >> num;
		j = length % INIT_SIZE;
		elem[i][j] = num;
		length++;
		if (length % INIT_SIZE == 0)
			i++;
	}
	return OK;
}

int Sqlist2::listMin()
{
	int rows = length / INIT_SIZE + 1;
	int min = elem[0][0];
	for (auto i = 0; i < rows; i++)
	{
		if (i != rows - 1)
		{
			for (auto j = 0; j < INIT_SIZE; j++)
			{
				if (elem[i][j] < min)min = elem[i][j];
			}
		}
		else
		{
			for (auto j = 0; j < length % INIT_SIZE; j++)
			{
				if (elem[i][j] < min)min = elem[i][j];
			}
		}
	}
	return min;
}

int Mystrcmp(const char* s1, const char* s2)
{
	int i;
	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
	if (s1[i] == '\0' && s2[i] == '\0')
		return 0;
	else if (s1[i] > s2[i])return 1;
	else return -1;
}