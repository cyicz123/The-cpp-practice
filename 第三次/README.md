# 第三次实验报告
![第三次cpp作业](http://photo.cyicz123.com/FnKvz8oIA4XFaxQ0ZOUdSjI_0imD)
## 第一题实验结果截图
![3_1](http://photo.cyicz123.com/Figjc6WiyqVBTobggmyRcQaCq9b-)
这道题出现了问题，如果在`main函数`里不对传入`int getMax_Min(int a[], int n, int& mi)`中的`mi`变量赋值，vs2019就会报错：`c4700——未初始化的局部变量名称使用。`

如果在main函数中初始化，其传入的mi值也不会有任何改变，就如同值传递而不是引用传递的效果。函数如下：
```C++
int getMax_Min(int a[], int n, int& mi)
{
	int max = a[0];
	mi = a[0];
	for (auto i = 0; i < n; i++)
	{
		if (a[i] > max)max = a[i];
		if (a[i] < mi)mi = a[i];
	}
	cout <<"mi="<< mi << endl;
	return max;
}
```
## 第二题实验结果截图
![3_2](http://photo.cyicz123.com/Fi-F8MJZWGECv1Kmv_EWq3IHwnsm)
