#include <iostream>

using namespace std;

class Person{
private:
    int age;
public:
    Person(int age = 2){//Ĭ�ϲ����������޲ι���Ĵ���
        this->age = age;
    }
    int getAge();
};

int Person::getAge(){
    return this->age;
}

int main()
{
    Person * p1 = new Person(15);
    int p1Age = p1->getAge();
    cout << p1Age << endl;


    Person p;
    cout << p.getAge() << endl;
    return 0;
}