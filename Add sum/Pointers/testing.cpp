#include<iostream>
#include<string>

#define c 20;
#define d 20;
using namespace std;

auto name_changer(string data){
    return data+"_new";
}

int main(){
    int a[20][20];
    string name;
   
    getline(cin,name);
    name = name_changer(name);

    cout<<name;
    return 0;
}
