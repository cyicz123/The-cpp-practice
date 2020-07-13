#include"p8_2.h"
Student s3;

int main()
{
	auto s4 = new Student;
	s4->get_info("new delete析构函数测试", 20, 100);
	cout << "delete后析构函数开始工作，打印如下信息：" << endl;
	delete s4;
	s3.get_info("全局析构函数测试", 20, 100);
	xigou_test1();
	xigou_test2();
	cout << "\nmain函数即将结束，static对象和全局对象的析构函数即将工作。" << endl;
	return 0;
}

