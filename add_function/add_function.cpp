#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int addFunction(int argc,char *argv[]);
    if (argc!=3)
    {
        cout<<"输入参数不合法。"<<endl;
        return -1;
    }
    else
    {
        addFunction(argc,argv);
    }
    return 0;
}

int addFunction(int argc,char *argv[])
{
    cout<<argv[1]<<"+"<<argv[2]<<"的和为："<<atoi(argv[1])+atoi(argv[2])<<endl;
    return 0;
}
