#include <iostream>
using namespace std;
//���õ�ָ�룬�У�ָ������ã��ޡ�



//ʹ������ʵ��ָ�����ݵĽ�����
void MySwap(char* &pra, char* &prb){//ָ������ã�char* &
    //�������ÿ�������������������
    char *t = pra;
    pra = prb;
    prb = t;
}

int main(){
    char * p = "china";
    char * q = "canada";
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    MySwap(p,q);
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    return 0;
}

void func(){
    int a = 10;
    int& ra = a;
    //���õ�ָ��,���޷�ͨ������ġ�ʵ�������þ��Ƕ�ָ��İ�װ������ʹ����¶��ָ��
    //��ȴ�Ѱ�װ�õĸ���������϶��ǲ��е�
    // int& * ra = &ra;
}