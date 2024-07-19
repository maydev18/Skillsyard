#include <iostream>
#include <string>
using namespace std;

class Person{
    private :
    int height;
    int weight;
    public:
    string name;
    int age;
    //default constructor
    Person(){
        name = "XYZ";
        age = 15;
        height = 160;
        weight = 60;
    }
    //parametrized constructors
    Person(string username){
        name = username;
        age = 15;
        height = 160;
        weight = 60;
    }
    Person(int userheight , int userweight){
        height = userheight;
        weight = userweight;
        name = "ravi";
        age = 30;
    }
    Person(string username , int userage ,int userheight ,int userweight){
        name = username;
        age = userage;
        height = userheight;
        weight = userweight;
    }
};


int main(){
    Person p1;
    Person p2("sunny" , 20 , 165 , 60);
    cout << p1.name << endl;
    cout << p2.name << endl;
    Person p3("Mayank");
    cout << p3.name << endl;
    Person p4(150 , 80);
    cout << p4.age << endl;
    return 0;
}