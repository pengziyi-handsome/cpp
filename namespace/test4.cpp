#include <iostream>
using namespace std;

//ͬ�������ռ��Զ��ϲ�
//���ڶ���Эͬ����
namespace space1{
    int data1 = 2;
}
namespace space1{
    int data2 = 3;
}
int main()
{
    using namespace space1;
    cout << data1 << "----" << data2 << endl;
    return 0;
}