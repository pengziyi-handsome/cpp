#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "A()" << endl;
    }

    A(const A & another){
        cout << "A(const A & another)" << endl;
    }

    ~A(){
        cout << "~A()" << endl;
    }
};

void foo1(A a){

}

void foo2(A &a){


}
int main(){
    A a;
    foo1(a);//函数传参也调用拷贝构造器
    // foo2(a);   不过更加推荐使用引用，不会调用拷贝构造器
    return 0;
}