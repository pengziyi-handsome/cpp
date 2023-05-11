#include <iostream>

using namespace std;
//inline兼顾宏函数和普通函数的优点
//可被编译器优化，建议型关键字，类似register
//常用于短小精悍的函数
inline int sqr(int x)
{
    return (x*x);
}
int main()
{
    cout << sqr(5) << endl;
    return 0;
}