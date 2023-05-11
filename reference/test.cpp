#include <iostream>
using namespace std;
//引用的指针，有；指针的引用，无。



//使用引用实现指针内容的交换。
void MySwap(char* &pra, char* &prb){//指针的引用：char* &
    //这里引用可以理解成提升了作用域
    char *t = pra;
    pra = prb;
    prb = t;
}

int main(){
    char * p = "china";
    char * q = "canada";
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    MySwap(p,q);
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    return 0;
}

void func(){
    int a = 10;
    int& ra = a;
    //引用的指针,是无法通过编译的。实际上引用就是对指针的包装，避免使用裸露的指针
    //你却把包装好的给拆出来，肯定是不行的
    // int& * ra = &ra;
}