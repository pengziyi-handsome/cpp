#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int &ra = a;

    int b = 3;
    ra = b;
    cout << a << endl;//3

    //可以看出引用就相当于 int *const p;  一个指针常量
    //也就是它的指向不会改变，但是指向的变量的值可以被改变

    return 0;
}