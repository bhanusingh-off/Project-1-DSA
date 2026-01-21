#include<iostream>
using namespace std;

int main(){
/*
    int n;
    cin>>n;

    int sum=0;

    int i=1;  //loop variable
    while(i<=n){  //condition
        sum+=i;
        i++;  //updating loop variable
    }

    cout<<sum<<endl;

Using FOR LOOP

int n;
cin>>n;

int sum=0;
for(int i=1;;i<=n;i++){
    sum+=i;
}
cout<<sum<<endl;


//Print the first FIVE multiple of 5 which is also a multiple of 7

    int i=5;
    while(true){

        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
USING FOR LOOP
    int i=5;
    for(int i=5;;i+=5){
       if(i%7==0){              
            cout<<i<<endl;
            break;
       }
    }
   

  // Print the sum of the stream of N integers in the input using do-while loop.
    
    int n;
    cin>>n;

    int sum=0;
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);

    cout<<sum<<endl;
     */

    //Print all the values between 1 and 50 except for the multiples of 3

    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
     }


    


    return 0;


}

