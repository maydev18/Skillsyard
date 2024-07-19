#include <iostream>
#include <string>
using namespace std;
class Car{
    string ownernName;
    double currentSpeed;
    int engineCC;
    string manufacturerName;
    string modelName;
    public:
    Car(){
        ownernName = "mayank";
        modelName = "xys";
        currentSpeed = 10;
        engineCC = 2000;
        manufacturerName = "maruti";
    }
    Car(const Car & oldCar){
        ownernName = oldCar.ownernName;
        manufacturerName = oldCar.manufacturerName;
        currentSpeed = oldCar.currentSpeed;
        engineCC = oldCar.engineCC;
        modelName = "copied model name";
    }
    void printDetails();
    double increaseSpeed();
    double decreaseSpeed();
    double getCurrentSpeed(){
        return currentSpeed;
    }
    void setManufacturerName(string newName){
        manufacturerName = newName;
    }
    string getManufacturerName(){
        return manufacturerName;
    }
};
void Car :: printDetails(){
    cout << "Hello world";
}
double Car :: increaseSpeed(){
    currentSpeed += (currentSpeed * 0.2);
    return currentSpeed;
}
double Car :: decreaseSpeed(){
    currentSpeed -= (currentSpeed * 0.2);
    return currentSpeed;
}
int main(){
    Car c1;
    cout << c1.getManufacturerName() << endl;
    c1.setManufacturerName("mercedes");
    Car c2(c1);
    cout << c2.getManufacturerName();

}