#include <iostream>
#include "myList.h"
using namespace std;

//struct 默认权限是 public
//class  默认权限是 private

//将成员函数的实现放在class的外面
//一般多文件开发是把class放在.h文件中，成员函数的实现放在.cpp文件中
int main()
{
    myList list;
    list.initList();
    for(int i = 0; i < 5; i++){
        list.insertList(i);
    }
    list.traverseList();
    list.destroyList();
    return 0;
}