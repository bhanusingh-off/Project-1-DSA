#include<iostream>
using namespace std;

int main(){
/*
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;

    switch (alphabet){
        case 'a':
        cout<<"It is a VOWEL"<<endl;
        break;
        case 'e':
        cout<<"It is a VOWEL"<<endl;
        break;
        case 'i':
        cout<<"It is a VOWEL"<<endl;
        break;
        case 'o':
        cout<<"It is a VOWEL"<<endl;
        break;
        case 'u':
        cout<<"It is a VOWEL"<<endl;
        break;
        default:
        cout<<"It is a Consonant"<<endl;
        break;
    }
    */
//CALCULATOR PROGRAM
   int n1,n2;
   cout<<"Enter two Numbers"<<endl;
   cin>>n1>>n2;

   cout<<"Enter an operator(+,_,*,/,%)"<<endl;
   char op;
   cin>>op;

   switch (op){
    case '+':
    cout<<"Sum is : "<<n1+n2<<endl;
    break;
    case '-':
    cout<<"Diff is :"<<n1-n2<<endl;
    break;
    case '*':
    cout<<"Prod is :"<<n1*n2<<endl;
    break;
    case '/':
    cout<<"Div is :"<<n1/n2<<endl;
    break;
    case '%':
    cout<<"REM is :"<<n1%n2<<endl;
    break;
    default:
    cout<<"This operator is invalid"<<endl;
    break;
     }
   return 0;
}