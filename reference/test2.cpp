#include <iostream>
using namespace std;
int main(){
    //������ԣ�ra rra a ����ƽ����ϵ
    int a = 19;
    int &ra = a;
    int &rra = ra;

    //���ǣ������ڶ������ã����õ�������
    // int && ra = ra;   //err


    // Ҳ��������������
    // int& rarr[10];   //err

    return 0;
}