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

//initial list    初始化列表    完成成员变量的初始化    效率很高
//初始化列表的初始化顺序，跟列表中的顺序无关，与成员变量声明顺序有关。案例参照question.cpp
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