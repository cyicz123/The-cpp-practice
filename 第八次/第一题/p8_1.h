#include<iostream>
using namespace std;

class Student
{
	string name;
	int age;
	float score;
public:
	Student(const string& n, const int& a, const float& s) :name(n), age(a), score(s)
	{
		cout << "同学姓名：" << name << "	年龄：" << age << "	成绩：" << score << endl;
	}

	~Student() { cout << endl << "学生" << name << "信息已销毁！" << endl; }

	void print_info(){ cout << "同学姓名：" << name << "	年龄：" << age << "	成绩：" << score << endl; }

};