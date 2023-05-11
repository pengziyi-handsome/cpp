#include <iostream>
using namespace std;


int data = 100;
int main()
{
    int data = 200;
    cout << data << endl;//200
    cout << ::data << endl;//100  全局命名空间下的data


    return 0;
}