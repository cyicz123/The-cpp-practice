#include<iostream>
#include<vector>
using namespace std;

class Point
{
public:
	Point(const float& a, const float& b);

	const float x, y;
};

Point::Point(const float& a, const float& b) :x(a), y(b) {}

class Rectangle :public Point
{
	Point p1, p2, p3, p4;
	float length, height;
	static float total_area;
	static int total_number;
public:
	Rectangle(const Point& a, const Point& b, const Point& c, const Point& d);
	Rectangle(const Point& lt, const float& l, const float& h);
	~Rectangle();
	void printInfo();
	static void printTotalValue();
};

float Rectangle::total_area = 0;//必须在定义类的文件中对静态成员变量进行一次说明或者初始化，
int Rectangle::total_number = 0;//否则编译能过，链接无法通过。

Rectangle::Rectangle(const Point& a, const Point& b, const Point& c, const Point& d) :p1(a), p2(b), p3(c), p4(d), Point((p1.x + p3.x) / 2, (p1.y + p3.y) / 2)
{
	length = p3.x - p1.x;
	height = p3.y - p1.y;
	total_number++;
	total_area += length * height;
}

Rectangle::Rectangle(const Point& lt, const float& l, const float& h) :Point(lt.x + l / 2, lt.y + h / 2), p1(lt), p2(lt.x + l, lt.y), p3(lt.x, lt.y + h), p4(lt.x + l, lt.y + h)
{
	length = l;
	height = h;
}

Rectangle::~Rectangle()
{
	total_area -= length * height;
	total_number--;
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

void Rectangle::printTotalValue()
{
	cout << "矩形的总数为：" << total_number << "，总面积为：" << total_area << endl;
}