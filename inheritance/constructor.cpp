#include <iostream>
using namespace std;
class Base{
    public:
        int a  = 10, b = 20;
        Base(int a,  int b){
            this->a = a;
            this->b = b;
        }
        void print(){
            cout << a << " " << b << endl;
        }

};

class Child : public Base{
    private:
    int c , d;
    public:
    Child(int a , int b , int c , int d) : Base(a , b){
        this->c = 30;
        this->d = 40;
    }    
    void print(){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
};

int main(){
    Child c(10,20,30,40);
    c.print();
}