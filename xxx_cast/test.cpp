#include <iostream>
using namespace std;

void staCast()
{
    //static_cast<>()
    //˫��
    int a = 10;
    double b = 3.14;
    b = static_cast<double>(a);
    cout << b << endl;

    //����
    void * p;
    int * q;
    p = q;//void*�ܳн��κ�ָ������
    // q = p;  err
    q = static_cast<int*>(p);
    /*
    ��̬ת����Static Cast��
     ��̬ת���ǽ�һ���������͵�ֵǿ��ת��Ϊ��һ���������͵�ֵ��
     ��̬ת��ͨ�����ڱȽ��������ƵĶ���֮���ת�������罫 int ����ת��Ϊ float ���͡�
     ��̬ת���������κ�����ʱ���ͼ�飬��˿��ܻᵼ������ʱ����
    */
     
}

void rein()
{
    //˫����
    int *m;long long n;
    // m = static_cast<int*>(n);    err
    // n = static_cast<int>(m) ;    err
    m = reinterpret_cast<int*>(n);
    n = reinterpret_cast<long long> (m);  //�������ʹ��longlong ��Ϊ��64λϵͳ��ָ��ռ8���ֽڣ���int�ᱨ��cast from ��int*�� to ��int�� loses precision [-fpermissive]
    /*
    ���½���ת����Reinterpret Cast��
    ���½���ת����һ���������͵�ֵ���½���Ϊ��һ���������͵�ֵ��ͨ�������ڲ�ͬ����������֮�����ת����
    ���½���ת���������κ����ͼ�飬��˿��ܻᵼ��δ�������Ϊ��
    ԭ���ǰ����ʹӶ����ƽǶ����½��͡�
    */
}

void constCast()
{
    /*
        const_cast<>()ֻ�������� ���ú�ָ��
        ����ȥ��const

    */
   int a = 10;
   const int & ra = a;
//    ra = 20;err
    const_cast<int&>(ra) = 20;
    cout << a << endl;


    const int * p = &a;
    // *p = 30;err
    *const_cast<int*>(p) = 100;
    cout << a << endl;
    //****************************************************************

    const int b = 50;
    const int &rb = b;
    const_cast<int&>(rb) = 400;//δ������Ϊ   rb�ı��ˣ�bû�иı�
    cout << "b = " << b << endl;
    cout << "rb = " << rb << endl;

    struct Data{
        int aData;
    };
    const Data d = {33};

    const Data& rd = d;
    const_cast<Data&>(rd).aData = 38;
    cout << d.aData << endl;//�������b��rb��ͬ�����������������˸ı䡣
    cout << rd.aData << endl;
//δ������Ϊ   undefined behavior
//�ɼ���const_castӦ���ڱ������ݲ���const�����Ǻ������const�����û���ָ�룬ȥ������ӵ�const����;
//���Ƕ��ڱ������const���ε����ݣ�ʹ��const_cast���ᵼ��δ�������Ϊ����
}

int main()
{
    constCast();
    return 0;
}