#include <iostream>
using namespace std;
class Complex{
    private:
    public:
    float real;
    float img;
    Complex(){
        real = 0;
        img = 0;
    }
    Complex(float a){
        real = a;
        img = 0;
    }
    Complex(float a , float b){
        real = a;
        img = b;
    }
    void print(){
        cout << "real = " << real << endl;
        cout << "img = " << img << endl;
    }
    Complex operator+ (Complex arg){
        int newreal = real + arg.real;
        int newimag = img + arg.img;
        return Complex(newreal , newimag);
    }
    Complex operator- (Complex arg){
        int newreal = real - arg.real;
        int newimag = img - arg.img;
        return Complex(newreal , newimag);
    }
    Complex operator* (Complex c2){
        int newreal = real *  c2.real - img * c2.img;
        int newimag = real * c2.img + img * c2.real;
        return Complex(newreal , newimag);
    }
    friend ostream& operator << (ostream &cout , Complex c1);
};

ostream & operator << (ostream & cout , Complex c1){
    cout << c1.real << "+" << c1.img << 'i';
}

Complex sum(Complex c1 , Complex c2){
    return Complex(c1.real+c2.real , c1.img + c2.img);
}

int main(){
    Complex c1(5 , 10);
    // cout << c1;
    // c1 << cout;
    cout << c1 << 100;
}