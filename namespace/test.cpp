#include <iostream>
using namespace std;


int data = 100;
int main()
{
    int data = 200;
    cout << data << endl;//200
    cout << ::data << endl;//100  ȫ�������ռ��µ�data


    return 0;
}