#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int &ra = a;

    int b = 3;
    ra = b;
    cout << a << endl;//3

    //���Կ������þ��൱�� int *const p;  һ��ָ�볣��
    //Ҳ��������ָ�򲻻�ı䣬����ָ��ı�����ֵ���Ա��ı�

    return 0;
}