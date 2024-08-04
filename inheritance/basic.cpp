#include <iostream>
using namespace std;

class A{
    public:
    void print(int a){
        cout << "In base class";
    }
};
class B : public A{
    public:
    void print(){
        cout << "In Child class";
    }
};
int main(){
    B obj;
    obj.B::print();
}