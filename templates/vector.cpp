#include <iostream>
#include <ostream>
using namespace std;

template<class T> class vector{
    T * arr;
    int maxSize;
    int curr;
public:
    vector(){
        arr = new T[1];
        this->maxSize = 1;
        this->curr = 0;
    }
    vector(T * arr , int size){
        this->arr = new T[size];
        maxSize = size;
        curr = size;
        for(int i = 0 ; i < size ; i++){
            this->arr[i] = arr[i];
        }
    }
    void push_back(T num){
        if(curr == maxSize){
            maxSize *= 2;
            T * tmp = new T[maxSize];
            for(int i = 0 ; i < curr ; i++){
                tmp[i] = arr[i];
            }
            delete[] arr;
            arr = tmp;
        }
        arr[curr] = num;
        curr++;
    }
    void pop_back(){
        if(curr == maxSize/2){
            T * tmp = new T[maxSize/2];
            for(int i = 0 ; i < curr ; i++){
                tmp[i] = arr[i];
            }
            delete[] arr;
            arr = tmp;
            maxSize /= 2;
        }
        curr--;
    }
    int size(){
        return curr;
    }
    int operator[](int in){
        cout << maxSize;
        return arr[in];
    }
    template<class U> friend ostream & operator << (ostream & out , vector<T> & v);
};
template<class T> ostream & operator << (ostream & out , vector<T> & v){
    for(int i = 0 ; i < v.size() ; i++){
        out << v[i] << " ";
    }
    return out;
}

int main(){
    vector<int> v;
    
    cout << v;
}       