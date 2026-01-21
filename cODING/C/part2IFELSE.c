#include<stdio.h>
int main(){

//To find whether the number is odd or even

//     int r;
//     printf("Enter any Number : ");
//     scanf("%d",&r);
//     if(r%2==0){
//         printf("The Number is EVEN NO.");
//     }
//     if(r%2!=0){
//         printf("The Number is ODD NO.");
//     }    
        
    
//     return 0;
// }

//To find whether the Year is leap year or not

    // int year;
    // printf("Enter YEAR");
    // scanf("%d",&year);
    // if(year%4==0){
    //     printf("The year is LEAP YEAR");
    // }
    // else{
    //     printf("The year is not a LEAP YEAR");
    // }
    // return 0;
    // }

//To print the Modulus of a Number

//     int x;
//     printf("Enter a Number: ");
//     scanf("%d",&x);
//     if(x<0){
//         x= x * (-1) ;      
//     } 
//         printf("The Modulus of no is : %d",x);
    
//     return 0;
// }

//Find whether the seller has made profit or loss

    // int r;
    // printf("ENTER COST PRICE : ");
    // scanf("%d",&r);
    // int n;
    // printf("ENTER SELLING PRICE : ");
    // scanf("%d",&n);
    // if(r>n){
    //     int x= (r-n);
    //     printf("The seller makes LOSS of : %d",x);
    // }
    // if(r<n){
    //     int y= (n-r);
    //     printf("The seller makes PROFIT of : %d",y);
    // }
    // if(r==n){
    //     printf("The seller makes neither profit nor loss");
    // }
    // return 0;
    // }

//Program to find out if number is three digit or not

//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     if(n>99 && n<1000){
//         printf("It is a Three Digit number");
//     }
//     else{
//         printf("It is not a Three digit number");
//     }
//     return 0;
// }

//Take positive integer input and tell if it is divisible by 5 or 3.

//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     if(n%5==0 || n%3==0){
//         printf("This is divisible by 5 or 3");
//     }
//     else{
//         printf("This is not divisible by 5 or 3");
//     }
//     return 0;
// }

//Take 3 positive integers input and print the greatest of them

//     int n,m,o;
//     printf("Enter first Number: ");
//     scanf("%d", &n);
//     printf("Enter second number");
//     scanf("%d", &m);
//     printf("Enter third number");
//     scanf("%d", &o);
//     if(n>m && n>o){
//         printf(" %d is greatest among them",n);
//     }
//     if(m>n && m>o){
//         printf(" %d is greatest among them",m);
//     }
//     if(o>n && o>m){
//         printf(" %d is greatest among them",o);
//     }
//     return 0;
// }

//Take 4 positive integers input and print the greatest of them

    // int a,b,c,d;
    // printf("Enter 1st no: ");
    // scanf("%d",&a);
    // printf("Enter 2nd no: ");
    // scanf("%d",&b);
    // printf("Enter 3rd no: ");
    // scanf("%d",&c);
    // printf("Enter 4th no: ");
    // scanf("%d",&d);
    // if(a>b && a>c && a>d ){
    //     printf("%d is the greatest",a);
    // }
    // if(b>a && b>c && b>d){
    //     printf("%d is the greatest",b);
    // }
    // if(c>a && c>b && c>d){
    //     printf("%d is the greatest",c);
    // }
    // if(d>a && d>b && d>c){
    //     printf("%d is the greatest",d);
    // }
    // return 0;
    // }

//Take 3 numbers input and tell if they can be the sides os a Triangle.

//     int a,b,c;
//     printf("Enter 1st side: ");
//     scanf("%d",&a);
//     printf("Enter 2nd side: ");
//     scanf("%d",&b);
//     printf("Enter 3rd side: ");
//     scanf("%d",&c);
//     if((a+b>c) && (b+c>a) && (a+c>b)){
//         printf("Triangle can be formed");
//     }
//     else{
//         printf("No triangle can be formed");
//     }
//     return 0;
// }

//NESTED IF-ELSE

//Take positive integer input and tell if it is divisible by 5 and 3.

//     int a;
//     scanf("%d",&a);
//     if(a%5==0){
//         if(a%3==0){
//             printf("The no is divisible by 5 and 3");
//         }
//         else{
//         printf("Not Divisible by 5 and 3");
//     }
//     }
//     else{
//         printf("Not Divisible");
//     }
//     return 0;
// }

//Divisible by 5 or 3 but not by 15

//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if(n%5==0 || n%3==0){
//         if(n%15!=0){
//             printf("The number is divisible by 5 or 3 but not by 15");
//         }
//         else{
//             printf("The number is divisible by 15");
//         }

//     }
//     else{
//         printf("The number is not divisible by 3 or 5");
//     }
//     return 0;
// }

//OR we can perform above code by 2nd method

//      int n;
//      printf("Enter a number: ");
//      scanf("%d",&n);
//      if((n%5==0 || n%3==0) && n%15!=0){
//         printf("The Number is divisible by 5 or 3 but not 15");
//      }
//      else{
//         printf("The Number is not matching the required condition");
//      }
//      return 0;
// }

//Greatest of 3 number NESTED

//     int a,b,c;
//     printf("Enter 1st number: ");
//     scanf("%d", &a);
//     printf("Enter 2nd number: ");
//     scanf("%d",&b);
//     printf("Enter 3rd number: ");
//     scanf("%d", &c);
//     if(a>b){
//         if(a>c)
//         printf("%d is greatest",a);
//         else
//         printf("%d is greatest",c);
//     }
//     else{
//         if(b>c)
//         printf("%d is greatest",b);
//         else
//         printf("%d is greatest",c);
//     }
//     return 0;
// }

//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

//     int r,s,a;
//     printf("Enter the age of RAM: ");
//     scanf("%d",&r);
//     printf("Enter the age of SHYAM: ");
//     scanf("%d",&s);
//     printf("Enter the age of AJAY: ");
//     scanf("%d",&a);
//     if(r<s){
//         if(r<a)
//         printf("Ram is Youngest");
//         else
//         printf("AJAY is Youngest");
//     }
//     else{
//         if(s<a)
//         printf("Shyam is Youngest");
//         else
//         printf("Ajay is Youngest");
//     }
//     return 0;
// }

//Print Grades given to corresponding marks

// int n;
// printf("Enter percentage: ");
// scanf("%d",&n);
// if(n>80)
// printf("A grade");
// else if(n>60)
// printf("B grade");
// else if(n>40)
// printf("C grade");
// else{
//     printf("FAILED");
// }
// return 0;
// }

//Given 3 points (x1,y1),(x2,y2) and (x3,y3), write a program to check if all the three points fall on the straight line.

// int x1,x2,x3,y1,y2,y3;
// printf("Enter (x1,y1)");
// scanf("%d %d",&x1,&y1);
// printf("Enter (x2,y2)");
// scanf("%d %d",&x2,&y2);
// printf("Enter (x3,y3)");
// scanf("%d %d",&x3,&y3);
// float m=(y2-y1)/(x2-x1);
// float n=(y3-y2)/(x3-x2);
// if(m==n){                                                           
//     printf("It can form straight line");
// }
// else{
//     printf("Straight line cannot be formed");
// }
// return 0;
// }

//Use of TERNARY operator

    int n;
    printf("Enter a Number",n);
    scanf("%d",&n);
    // ternary operator
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("Even number") : printf("Odd number");

    // if(n%2==0)
    //      printf("Even Number");
    // else
    //     printf("Odd number");
    return 0;
}