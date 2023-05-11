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
    //交换两个成员变量的声明顺序，可以正确得出结果5
    int _len;
    string _name;
   //所以开发中要避免使用被初始化成员，去初始化其他成员变量
    

};
int main()
{
    A a("china");
    a.dis();
    return 0;
}