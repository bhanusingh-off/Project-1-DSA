#include<iostream>
using namespace std;
int main(){
/*    int n;
    cout<<"Enter a No.";
    cin>>n;

    int i;
    int j;

    for(i=1; i<=n ; i++){
        for(j=1 ; j<=(n-i); j++){
            cout<<" ";
        }
        for(j=1 ; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n+1; i<2*n; i++){
        for(j=1 ; j<=(i-n); j++){
            cout<<" ";
        }
        
        for(j=1 ; j<=(2*n-i) ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=(n+1); i<=2*n; i++){
        for(j=1 ; j<=(2*n-i) ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
*/

    
    /*
OUTPUT

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
/*

    int n;
    cout<<"Enter a no.";
    cin>>n;
    
    int i;
    int j;

    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=(n+1); i<=2*n; i++){
        for(j=1 ; j<=(2*n-i) ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

*/ 
  /*OUTPUT 
*
**
***
****
*****
******
*******
******
*****
****
***
**
*
*/
/*
    int rows;
    cin >> rows;
    
    for( int i = 0; i <= rows; i++ ){
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
    
    for( int i = rows - 1; i >= 0; i-- ){
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        
        int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
    */
//     int n;
//     cout<<"Enter a number--";
//     cin>>n;

//     for(int i=1; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++){
//             cout<<"*";
//         }
//         for(int j= 1 ; j<=2*(n-i); j++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=i ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=n+1 ; i<=2*n ; i++){
//         for(int j=1 ; j<=(2*n-i); j++){
//             cout<<"*";
//         }
//         for(int j=1 ; j<=2*(i-n) ; j++){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=(2*n-i); j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     int n;
//     cout<<"Enter a no.";
//     cin>>n;

//     for(int i=1; i<=n ; i++){
//         for(int j=1; j<=(n-i) ; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=(2*i)-1 ;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i= n+1 ; i<=2*n ; i++){
//         for(int j=1; j<=(i-n); j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=3*n-i-(i-n)-1 ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }
/*OUTPUT- if 7
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
//     int n;
//     cout<<"Enter a no...";
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n-i ; j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             if(j==1||j==2*i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n+1 ; i<=2*n-1 ; i++){
//         for(int j=1; j<=i-n; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*(2*n-i)-1; j++){
//             if(j==1||j==2*(2*n-i)-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
    
//         cout<<endl;
//     }
//     return 0;
// }
  