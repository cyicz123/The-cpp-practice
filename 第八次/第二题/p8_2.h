#include<iostream>
using namespace std;
class Student
{
	string name;
	int age;
	float score;
public:
	Student()
	{
		cout <<endl<<"构造函数工作。" << endl;
	}

	~Student() { cout <<endl<< name << "  析构函数工作！" << endl; }

	void get_info(const string& n, const int& a, const float& s) { name = n; age = a; score = s; }

	void print_info() { cout << "同学姓名：" << name << "	年龄：" << age << "	成绩：" << score << endl; }

};


void xigou_test1()
{
	Student s;
	s.get_info("局部析构函数测试", 20, 100);
	s.print_info();
	cout << "局部析构函数工作，打印以下内容："<<endl;
}

void xigou_test2()
{
	static Student s2;
	s2.get_info("static析构函数测试", 20, 100);
	s2.print_info();
	cout << "static析构函数不会工作，将在main函数结束工作。" << endl;
}
