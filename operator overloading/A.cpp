#include <iostream>
using namespace std;

class A{
    private:
    int a , b;
    public:
    A(){
        cout << "Please enter the value of a " ; cin >> a;
        cout << "Please enter the value of b " ; cin >> b;
    }
    A operator -(){
        A temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
    A operator -(A obj){
        A temp;
        temp.a = a - obj.a;
        temp.b = b - obj.b;
        return temp;
    }
    A operator +(A obj){
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
    A operator +(int num){
        A temp;
        temp.a = a + num;
        temp.b = b + num;
        return temp;
    }
    A operator *(A obj){
        A temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
        return temp;
    }
    void print(){
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    friend A operator + (int num , A obj);
    void operator [](int a){
        cout << "mayank";
    }
    friend ostream & operator << (ostream & myout , A obj);
};
ostream & operator << (ostream & myout , A obj){
    myout << "a = " << obj.a << endl;
    myout << "b = " << obj.b << endl;
    return myout;
}

A operator + (int num , A obj){
    A temp;
    temp.a = num + obj.a;
    temp.b = num + obj.b;
    return temp;
}

int main(){
    A obj1;
    cout << obj1 << obj1;
}