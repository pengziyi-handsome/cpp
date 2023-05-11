#include <iostream>
using namespace std;

struct Complex{
    int real;
    int image;
};
Complex operator+(Complex aComp, Complex anothor){
    Complex sum;
    sum.real = aComp.real + anothor.real;
    sum.image = aComp.image + anothor.image;
    return sum;
}
int main(){
    Complex a = {1,2};
    Complex b = {3,4};
    Complex sum = a + b;
    cout << "sum.real = " << sum.real << "\t" << "sum.image = " << sum.image << endl;
    return 0;
}