#include<iostream>
using namespace std;
/*
int addition(int x, int y){
    //processing
    int result = x + y;
    return result;
}

void fun(string name){
    cout<<"Are you having fun "<<name<<"?"<<endl;
}

int main() {
    fun("Bhanu");
    int response = addition(9, 8);
    cout<<response;
    return 0;
}
*/

//HOW TO USE PROTOTYPE--
/*
void fun(string);
int addition(int, int);

int main(){
    fun("Bhanu");
    int response = addition(9,8);
    cout<<response;
    return 0;
}

void fun(string name){
    cout<<"Are you having fun "<<name<<" ?"<<endl;

}

int addition(int x, int y){
    //processing
    int result = x + y;
    return result;
}*/

//SQUARE OF NATURAL NUMBERS:
/*
int square(int x){
    return x * x;
}

int main(){

    for(int i = 1; i<= 5; i++){
        cout<<square(i)<<endl;
    }
    return 0;
}*/

//Given radius Print area and circumference of circle
/*
double area(int x){
    return 3.14 * x * x;
}
double circumference(int x){
    return 2 * 3.14 * x;
}
//double carries decimal value
int main(){
    int r;
    float a;
    float b;
    cout<<"Enter Radius";
    cin>>r;

    a=area(r);
    cout<<a<<endl;

    b=circumference(r);
    cout<<b<<endl;

    return 0;
}*/

//To check if the person is eligible to vote or not:
//mine code
/*
string vote(int x){
    if (x<18){
    cout<<"not eligible";
    }
    else{
    cout<<"eligible";
    }
}
int main(){
int n;
cout<<"ENTER YOUR AGE ";
cin>>n;
vote(n);
return 0;
}*/

//Sir code (better)
/*
bool checkEligible(int age, int limit){
    if(age>=limit){

        return true;
    } else {

        return false;
    }
}

int main(){
    int voting_limit = 18;
    int is_eligible_for_voting = checkEligible(28, voting_limit);
    if(is_eligible_for_voting){
        cout<<"Yes, the current person is eligible to vote";
    } else{
        cout<<"No, the current person is not eligible to vote";

    }
    return 0;
    }
    */

   //TO PRINT ALL ODD NUMBERS
   /*
    bool isOdd(int num){
        if(num%2 == 0){
            return false;
        } else {
            return true;
        }
    }
    int main(){
        int a=1 , b=10;
        for(int i=a; i<=b; i++){
            if(isOdd(i)){
                cout<<i<<" ";
            }
        }
        return 0;
    }*/

//PRINT PRIME NUMBERS:

    bool isPrime(int num){
        // function checks if the number is prime number or not
        for(int i = 2; i<= (num-1); i++){
            if(num % i == 0) return false;
        }
        return true;
    }

    int main(){
        int a = 2, b= 10;
        for(int i = a; i<=b; i++){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
        return 0;
    }
