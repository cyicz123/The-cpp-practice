#include<iostream>
#include<vector>
using namespace std;

class Point
{
public:
	Point(const float& a,const float& b);

	float x, y;
};

Point::Point(const float& a, const float& b):x(a),y(b){}

class Rectangle :public Point
{
	Point p1, p2, p3, p4;
	float length, height;
public:
	Rectangle(const Point& a, const Point& b, const Point& c, const Point& d);
	Rectangle(const Point& lt, const float& l, const float& h);
	void printInfo();
};
Rectangle::Rectangle(const Point& a, const Point& b, const Point& c, const Point& d) :p1(a), p2(b), p3(c), p4(d), Point((p1.x + p3.x) / 2, (p1.y + p3.y) / 2)
{
	length = p3.x - p1.x;
	height = p3.y - p1.y;
}

Rectangle::Rectangle(const Point& lt, const float& l, const float& h) :Point(lt.x + l / 2, lt.y + h / 2), p1(lt), p2(lt.x + l, lt.y), p3(lt.x, lt.y + h), p4(lt.x + l, lt.y + h)
{
	length = l;
	height = h;
}

void Rectangle::printInfo()
{
	cout << "矩形的长为：" << length << "，宽为：" << height << endl;
	cout << "矩形的中心为：";
	cout << "(" << x << ',' << y << ")\n";

	cout << "顺时针四个点坐标分别是：";
	cout << "(" << p1.x << ',' << p1.y << ")\t";
	cout << "(" << p2.x << ',' << p2.y << ")\t";
	cout << "(" << p3.x << ',' << p3.y << ")\t";
	cout << "(" << p4.x << ',' << p4.y << ")\n";
}

class Book
{
public:
	string name;
	string author;
	float price;

	void push_back(const string& n, const string& a, const float& p)
	{
		name = n;
		author = a;
		price = p;
	}

	void bookInfo()
	{
		cout << "书名：" << name << "\t作者：" << author << "\t价格：" << price << endl;
	}
};

class Person
{
public:
	Person(const string& n,const int& age);
	
	string name;
	int age;
};

Person::Person(const string& n, const int& a)
{
	name = n;
	age = a;
}

 

class Student:public Person
{
public:
	Student(const string& n, const int& a, const float& s);

	void getBook(const Book& b) { books.push_back(b); }
	void getBook(const vector<Book>& b) { books = b; }
	void studentInfo();

	float score;
	vector<Book> books;
};

Student::Student(const string& n, const int& a, const float& s) :Person(n,a),score(s){}

void Student::studentInfo()
{
	cout << "姓名：" << name << "\t年龄：" << age << "\t成绩：" << score << endl;
	cout << "\n以下是他的书籍信息：" << endl;

	for (auto i : books)
	{
		i.bookInfo();
	}
}