#include <iostream>
#include <string.h>
using namespace std;

//拷贝构造器 copy constructor
//系统提供默认的拷贝构造器，提供的是浅拷贝 shallow copy
//(当然，你所拷贝的内容不涉及堆，自然无所谓深浅)

//在涉及到堆内存的拷贝，一定要构造深拷贝，一是因为浅拷贝无法满足需求，二是会导致重析构 double free

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

    //实现深拷贝
    DataStr(const DataStr& another){
        _str = new char[strlen(another._str) + 1];//记得+1，原_str的拷贝会拷贝进去\0，而strlen()不会计算\0
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
    ds2.dis();//浅拷贝会导致重析构

    return 0;
}