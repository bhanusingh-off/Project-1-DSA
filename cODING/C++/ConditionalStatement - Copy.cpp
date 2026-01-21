#include<iostream>
using namespace std;

int main(){
/*    int score;
    cin>>score;

    //score>80 , print Well Done
    // score = 50-80 , print Can Improve
    // score <50 , print Poor PERFORMANCE

    if(score>80){
        cout<<"well done!"<<endl;
    }
    else if(score>=50){
        cout<<"can improve"<<endl;
    }
    else{
        cout<<"poor performance"<<endl;
    }
    return 0;
}
PROFIT LOSS QUES.
    int sp, cp;
    cout<<"Enter Selling price: ";
    cin>>sp;
    cout<<"Enter cost price: ";
    cin>>cp;

    if(sp>cp){
       int profit = sp-cp;
       cout<<"Your profit is : "<<profit<<endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout<<"Your loss is: "<<loss<<endl;
    }
    else{
        cout<<"No profit or loss"<<endl;
    }
    return 0;
}
To find the greatest of three number's--
int a,b,c;
cout<<"Enter first no. "<<endl;
cin>>a;
cout<<"Enter second no. "<<endl;
cin>>b;
cout<<"Enter third no. "<<endl;
cin>>c;
    if(a>b && a>c){
    cout<<"The greatest no. is"<<a;
    }
    else if(b>c && b>a){
    cout<<"The greatest no. is"<<b;
}
    else{
        cout<<"The greatest no. is"<<c;
    }
    return 0;
}

Same ques. but ny using NESTED IF ELSE statement
*/
int n1,n2,n3;
cout<<"Enter 3 numbers: ";
cin>>n1>>n2>>n3;
if(n1>n2){
    if(n1>n3){
        cout<<"max is: "<<n1<<endl;
    }
    else{
        cout<<"max is: "<<n3<<endl;
    }
}
else{
    if(n2>n3){
        cout<<"max is:"<<n2<<endl;
    }
    else{
        cout<<"max is: "<<n3<<endl;
    }
}
}