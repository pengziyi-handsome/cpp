#include <iostream>

using namespace std;

class Person{
private:
    string name;
    int age;
    char gender;

public:
    Person(){

    }

//initial list    ��ʼ���б�    ��ɳ�Ա�����ĳ�ʼ��    Ч�ʺܸ�
//��ʼ���б�ĳ�ʼ��˳�򣬸��б��е�˳���޹أ����Ա��������˳���йء���������question.cpp
    Person(string a, int b, char c) :
        name(a),age(b),gender(c){
            
        }
    void toString(){
        cout << "name = "   << this->name   <<endl;
        cout << "age = "    << this->age    <<endl;
        cout << "gender = " << this->gender <<endl;
    }

};


int main()
{
    Person p1("peng",12,'M');
    p1.toString();
    return 0;
}