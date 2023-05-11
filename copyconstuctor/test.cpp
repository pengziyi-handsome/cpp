#include <iostream>
#include <string.h>
using namespace std;

//���������� copy constructor
//ϵͳ�ṩĬ�ϵĿ������������ṩ����ǳ���� shallow copy
//(��Ȼ���������������ݲ��漰�ѣ���Ȼ����ν��ǳ)

//���漰�����ڴ�Ŀ�����һ��Ҫ���������һ����Ϊǳ�����޷��������󣬶��ǻᵼ�������� double free

/*
    The style of the deep copy constructor like this:
    ClassName (const ClassName & Another){}
*/

class DataStr{
public:
    DataStr(){
        _str = new char[1024];
        strcpy(_str,"C++ is the best language in the world!");
    }

    //ʵ�����
    DataStr(const DataStr& another){
        _str = new char[strlen(another._str) + 1];//�ǵ�+1��ԭ_str�Ŀ����´����ȥ\0����strlen()�������\0
        strcpy(_str,another._str);
        cout << "deep copy working" << endl;
    }

    ~DataStr(){
        delete [] _str;
    }

    void dis(){
        cout << _str << endl;
    }

    void setStr(char* newStr){
        strcpy(this->_str,newStr);
    }

private:
    char * _str;
};

int main(){
    DataStr ds;
    ds.dis();


    DataStr ds2(ds);
    ds2.dis();//ǳ�����ᵼ��������

    return 0;
}