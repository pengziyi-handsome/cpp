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
    foo1(a);//��������Ҳ���ÿ���������
    // foo2(a);   ���������Ƽ�ʹ�����ã�������ÿ���������
    return 0;
}