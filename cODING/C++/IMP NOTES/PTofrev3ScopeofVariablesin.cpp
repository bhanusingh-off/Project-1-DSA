#include<iostream>
using namespace std;

string name = "Sanket"; //global

void fun() {
    int x = 10; // fun
    for(int y= 0; y < 5; y++){
        x = x + y;
        int z = x * x;
    }
    cout<<name<<"\n";
    {
        int d = 10;
    }
}
int main(){
    cout<<name<<"\n";
    name = "Sarthak";
    fun();
    //! cout<<x<<"\n"; -> not accessible here because it is local to fun
    return 0;
} 

//