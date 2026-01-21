/*#include<iostream>
using namespace std;
int main(){
    cout<<"WORLD";
    cout<<"damn";
    return 0;
}
Above program prints both words in same line;
to print in different line we'll use <<endl
 #include<iostream>
using namespace std;
int main(){
    cout<<"WORLD"<<endl<<"damn";
    return 0;
}


HOW TO TAKE INPUT FROM USERS

#include<iostream>
using namespace std;
int main(){
    int apples;
    cin>>apples;
    cout<<"Number of apples: "<<apples<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
USES OF ARITHMETIC OPERATOR
#include<iostream>
using namespace std;

int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl;

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;
    return 0;
}
//NOTE- MAKE SURE TO TAKE CONTAINER
//(in above "int" is a container)

#include<iostream>
using namespace std;

int main(){
    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<(!exp1)<<endl;
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num1=6;
   int num2=3;
   num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
    
    return 0;
}

= 

+=    a+=1    a=a+1
-=    a-=1    a=a-1
/=    a/=1    a=a/1
%=    a%=1    a=a%1
    
    C++ Bitwise Operators
    ~Bitwise Complement       ~0=1
                              ~1=0
<<LEFT SHIFT   *2
>>RIGHT SHIFT  /2

| ->  OR
& ->  AND
^ ->  Exclusive OR   (SAME 0; DIFF 1)
USES-
#include<iostream>
using namespace std;

int main(){
    int num1=5;  //0101
    cout<<(num1<<1)<<endl;  //10   (left-shift)
    cout<<(num1>>1)<<endl;  //2    (right-shift)
    int num2=8;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a=4;
    cout<<sizeof(a)<<endl; //4

    char name='a';
    cout<<sizeof(name)<<endl; //1
    
    bool flag;
    a==name? flag = true : flag=false;
    cout<<flag<<endl;   //0  Here, == shows true if val(a)=val(name) then it show 1 but here it's opposite so ans- 0
    
    int c=6;
    cout<<(c++)<<endl;  //6
    int b=c+5;         //here c value is +1 incremented by above code.
    cout<<(b)<<endl; //12
    return 0;
}
What does the folowing code fragement print?

-> cout<<(4+2+"pqr");    output-> 6pqr
-> cout<<("pqr"+4+2);    output-> pqr42
*/
 
