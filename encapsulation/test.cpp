#include <iostream>
#include "myList.h"
using namespace std;

//struct Ĭ��Ȩ���� public
//class  Ĭ��Ȩ���� private

//����Ա������ʵ�ַ���class������
//һ����ļ������ǰ�class����.h�ļ��У���Ա������ʵ�ַ���.cpp�ļ���
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