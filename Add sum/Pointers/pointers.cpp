#include<iostream>

using namespace std;

int main(){
    int a = 3;
    int* pointer = &a;
    cout<<"Value of a :"<<a<<"\n address of a:"<<&a<<"\nvalue of pointer: "<<pointer<<"\n Value stored at poitner :"<<*pointer;
    return 0;
}