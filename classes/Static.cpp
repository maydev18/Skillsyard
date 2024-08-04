#include <iostream>
#include <string>
using namespace std;
class Car{
public:
    int speed;
    string color;
    int seats;
    static int total;
    Car(int userspeed , string usercolor , int userseats){
        speed = userspeed;
        color = usercolor;
        seats = userseats;
        total++;
    }
    void display(){
        cout << "The speed is " << speed << endl;
        cout << "The color is " << color << endl;
        cout << "The seats are " << seats << endl;
    }

};
int Car :: total = 0;
int main() {
    
    Car c1(50, "gray" , 4);
    cout << Car :: total << endl;
    Car c2(10 , "black" , 5);
    cout << Car :: total << endl;
    Car c3(20 , "green" , 6);
    cout << Car :: total << endl;
    return 0;
}