#include <iostream>

using namespace std;
//inline��˺꺯������ͨ�������ŵ�
//�ɱ��������Ż��������͹ؼ��֣�����register
//�����ڶ�С�����ĺ���
inline int sqr(int x)
{
    return (x*x);
}
int main()
{
    cout << sqr(5) << endl;
    return 0;
}