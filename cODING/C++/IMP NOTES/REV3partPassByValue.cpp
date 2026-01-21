#include<iostream>
using namespace std;
    // void swap(int x,int y){
    // int temp = x;
    // x = y;
    // y = temp;
    // }
    // int main() {
    //     int i = 6 , j = 4;
    //     swap(i, j);
    //     cout<<i<<" "<<j<<"\n";
    //     return 0;
    // }

//! PASS BY REFERENCE
/*
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int x = 9;
    int &y = x;
    cout<<x<<" "<<y<<"\n";
    y = 88;
    cout<<x<<" "<<y<<"\n";
    return 0;
}
*/
/*
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 9;
    int c = 1;
    int &y = x;
    swap(x, c);
    cout<<x<<" "<<c;
    return 0;
}
*/

//! Default Value

void fun(int x, int y = 100, int z = 30, int a = 9){
    cout<<x<<" "<<y<<" "<<z<<" "<<a;
}

int main(){
    fun(10, 1, 5);
    return 0;
}