#include <iostream>
#include <string.h>

using namespace std;


class A{
public:
    A(char * str)
    : _name(str),_len(strlen(_name.c_str()))
    {}

    void dis(){
        cout << _len << endl;
    }

private:
    //����������Ա����������˳�򣬿�����ȷ�ó����5
    int _len;
    string _name;
   //���Կ�����Ҫ����ʹ�ñ���ʼ����Ա��ȥ��ʼ��������Ա����
    

};
int main()
{
    A a("china");
    a.dis();
    return 0;
}