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
        if(current == 0){
            cout << "The cart is empty , please add some items into your cart" << endl;
            return;
        }
        cout << "Item Number" << " | " <<  "Item Name" << " | " << "Item Brand" << " | " << "Item Price" << " | " << "Item Quantity" << endl;
        for(int i = 0 ; i < current ; i++){
            cout << i+1 << " | ";
            cout << cart[i].name << "      |      ";
            cout << cart[i].brand << "      |      ";
            cout << cart[i].price << "      |      ";
            cout << cart[i].quantity << "     |     ";
            cout << endl;
        }
    }
    void totalPrice(){
        double total = 0;
        for(int i = 0 ; i < current ; i++){
            total += (cart[i].quantity * cart[i].price);
        }
        cout << "The total cart amount is : " << total << endl;
    }
    void deleteCartItem(){
        if(current == 0){
            cout << "The cart is already empty" << endl;
            return;
        }
        cout << "Enter the item number you want to delete" << endl;
        printCart();
        int item;
        cin >> item;
        item--;
        for(int i = item+1 ; i < current ; i++){
            cart[i-1] = cart[i];
        }
        current--;
        printCart();
    }

};
int Cart :: current = 0;
int main(){
    cout << "***************************" <<endl;
    cout << "Welcome to Dmart" << endl;
    cout << "***************************" <<endl;
    Cart c;
    while(true){
        cout << "1. Add a new product in your cart" << endl;
        cout << "2. Delete a item from your cart" << endl;
        cout << "3. Get the total amount of the cart" << endl;
        cout << "4. Display the Cart" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cout << "Please enter your choice : "; cin >> choice;
        if(choice == 1){
            c.addCartItem();
        }
        else if(choice == 2){
            c.deleteCartItem();
        }
        else if(choice == 3){
            c.totalPrice();
        }
        else if(choice == 4){
            c.printCart();
        }
        else if(choice == 5){
            cout << "Thankyou for visiting us, see you again" << endl;
            break;
        }
        else{
            cout << "Please select a valid choice" << endl;
            break;
        }
    }
}
