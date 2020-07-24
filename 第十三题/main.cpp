#include"p13.h"
int main()
{
	Point p1(0, 0), p2(10, 0), p3(10, 10), p4(0, 10);
	const Rectangle rec1(p1, p2, p3, p4);
	Point q1(1, 1), q2(11, 1), q3(11, 11), q4(1, 11);
	Rectangle rec2(q1, q2, q3, q4);
	Rectangle::printTotalValue();
	return 0;
}