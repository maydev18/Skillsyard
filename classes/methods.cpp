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
    void displayDetailsInside(){
        cout << "The name of the person is " << name << endl;
        cout << "The age of the person is " << age << endl;
        cout << "The height of the person is " << height << endl;
        cout << "The weight of the person is " << weight << endl;
    }
    void displayDetailsOutside();
    double bmi();
    
};

void Person :: displayDetailsOutside(){
    cout << "The name of the person is " << name << endl;
    cout << "The age of the person is " << age << endl;
    cout << "The height of the person is " << height << endl;
    cout << "The weight of the person is " << weight << endl;
}

double Person :: bmi(){
    return (double)(weight)/(height * height / 10000);
}

int main(){
    Person p1;
    Person p2("Mayank" , 21 , 150 , 87);
    p1.displayDetailsOutside();
    double p1bmi = p2.bmi();
    cout << p1bmi << endl;
    return 0;
}