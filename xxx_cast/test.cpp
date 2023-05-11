#include <iostream>
using namespace std;

void staCast()
{
    //static_cast<>()
    //双隐
    int a = 10;
    double b = 3.14;
    b = static_cast<double>(a);
    cout << b << endl;

    //单隐
    void * p;
    int * q;
    p = q;//void*能承接任何指针类型
    // q = p;  err
    q = static_cast<int*>(p);
    /*
    静态转换（Static Cast）
     静态转换是将一种数据类型的值强制转换为另一种数据类型的值。
     静态转换通常用于比较类型相似的对象之间的转换，例如将 int 类型转换为 float 类型。
     静态转换不进行任何运行时类型检查，因此可能会导致运行时错误。
    */
     
}

void rein()
{
    //双不隐
    int *m;long long n;
    // m = static_cast<int*>(n);    err
    // n = static_cast<int>(m) ;    err
    m = reinterpret_cast<int*>(n);
    n = reinterpret_cast<long long> (m);  //这里必须使用longlong 因为在64位系统下指针占8个字节，给int会报错：cast from ‘int*’ to ‘int’ loses precision [-fpermissive]
    /*
    重新解释转换（Reinterpret Cast）
    重新解释转换将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换。
    重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。
    原理是把类型从二进制角度重新解释。
    */
}

void constCast()
{
    /*
        const_cast<>()只能作用于 引用和指针
        用于去掉const

    */
   int a = 10;
   const int & ra = a;
//    ra = 20;err
    const_cast<int&>(ra) = 20;
    cout << a << endl;


    const int * p = &a;
    // *p = 30;err
    *const_cast<int*>(p) = 100;
    cout << a << endl;
    //****************************************************************

    const int b = 50;
    const int &rb = b;
    const_cast<int&>(rb) = 400;//未定义行为   rb改变了，b没有改变
    cout << "b = " << b << endl;
    cout << "rb = " << rb << endl;

    struct Data{
        int aData;
    };
    const Data d = {33};

    const Data& rd = d;
    const_cast<Data&>(rd).aData = 38;
    cout << d.aData << endl;//与上面的b与rb不同，这里两个都发生了改变。
    cout << rd.aData << endl;
//未定义行为   undefined behavior
//可见，const_cast应用于本身数据不是const，但是后面加了const的引用或者指针，去掉后面加的const的用途
//但是对于本身就是const修饰的数据，使用const_cast，会导致未定义的行为发生
}

int main()
{
    constCast();
    return 0;
}