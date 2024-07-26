#include <iostream>
#include <string>

using namespace std;



class CartItem{
    public:
        string name;
        double price;
        string brand;
        double quantity;
        CartItem(){

        }
        CartItem(string username , double userprice ,string  userbrand ,double userquantity){
            name = username;
            price = userprice;
            brand = userbrand;
            quantity = userquantity;
        }
};

class Cart{
    public:
    CartItem cart[100];
    static int current;
    Cart(){

    }
    void addCartItem(){
        string name, brand;
        double quantity , price;
        cout << "Please enter the name of item : " ;
        cin >> name;
        cout << "Please enter the brand of item : " ;
        cin >> brand;
        cout << "Please enter the quantity of item : " ;
        cin >> quantity;
        cout << "Please enter the price of item : " ;
        cin >> price;
        CartItem c1(name , price , brand , quantity);
        cart[current] = c1;
        current++;
    }
    void printCart(){
        for(int i = 0 ; i < current ; i++){
            cout << "-------------------------------------" << endl;
            cout << "Item number : " << i+1 << endl;
            cout << "name : " << cart[i].name << endl;
            cout << "brand : " << cart[i].brand << endl;
            cout << "price : " << cart[i].price << endl;
            cout << "quantity : " << cart[i].quantity << endl;
            cout << "-------------------------------------" << endl;
        }
    }
    void totalPrice(){
        double total = 0;
        for(int i = 0 ; i < current ; i++){
            total += (cart[i].quantity * cart[i].price);
        }
        cout << "The total cart amount is : " << total << endl;
    }
};
int Cart :: current = 0;
int main(){
    Cart c;
    c.addCartItem();
    c.printCart();
    c.totalPrice();

}
