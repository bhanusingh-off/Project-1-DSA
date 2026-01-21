#include<iostream>
using namespace std;
int main(){

/*Print-
output-
        A
       ABC   
      ABCDE
     ABCDEFG
    ABCDEFGHI
     ABCDEFG
      ABCDE
       ABC
        A
by using ASCII Table

First we need to make 
output-  
         1
        123
       12345
      1234567
     123456789
      1234567
       12345
        123
         1
        

//OUTPUT- (if input 9)  ABCDEFGHI 
    int no_of_chars;
    cin>>no_of_chars;

    for(int j = 0; j < no_of_chars; j++){
        char ch = (char)('A' + j);
        cout<<ch;
        
    }*/ 

/*   int n;
    cin>>n;

    //loop to print upper triangle
    for(int line = 1; line <= n; line++){
        //this loop does same work for each line

        //below loop is to print spaces
        int no_of_spaces = (n - line);
        for(int k = 0; k < no_of_spaces; k++){
            cout<<" ";
        }

        //below loop is to print chars for each line
        int no_of_chars = 2*line - 1;
        for(int j=0; j < no_of_chars; j++){
            char ch = (char)('A'+ j);
            cout<<ch;
        }
        cout<<endl;
    }
    */
/*OUTPUT- if 5 input
    A       
   ABC      
  ABCDE     
 ABCDEFG    
ABCDEFGHI   
*/


/*
    int n;
    cin>>n;

    //loop to print upper triangle
    for(int line = 1; line <= n; line++){
        //this loop does same work for each line

        //below loop is to print spaces
        int no_of_spaces = (n - line);
        for(int k = 0; k < no_of_spaces; k++){
            cout<<" ";
        }

        //below loop is to print chars for each line
        int no_of_chars = 2*line - 1;
        for(int j=0; j < no_of_chars; j++){
            char ch = (char)('A'+ j);
            cout<<ch;
        }
        cout<<endl;

    }    
    
    // loop to print the lower triangle
    for(int line = n + 1; line <= 2*n - 1; line++){ //line badhane k liye likha gya h
        int no_of_spaces = (line - n);
        for(int k = 0; k < no_of_spaces; k++){
            cout<<" ";
        }

        int no_of_chars = 2*(2*n - line) - 1;
        for(int j = 0; j < no_of_chars; j++){
            cout<<(char)('A' + j);
        }
        cout<<endl;
    }
    return 0;

}
*/
/*
OUTPUT OF ABOVE PROG;

    A       
   ABC      
  ABCDE     
 ABCDEFG    
ABCDEFGHI   
 ABCDEFG    
  ABCDE     
   ABC      
    A 

*/         
/*
   int n = 5;

    // for loop to do some task for each line
    for(int line = 0; line < n ; line++){

        // spaces for the current line
        for(int i=0; i< n ; i++){
            if(i == n/2) cout<<"*";
            else if(line == n/2) cout<<"*";
            else cout<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
*/
/*Above output--


  *  
  *  
*****       
  *
  *    
*/
//To print Rectangle from given rows and columns star --

/*
#include<iostream>
using namespace std;
int main(){
    int starRows;
    int starCols;
    cout<<"Please enter thr no. of star rows";
    cin>>starRows;
    cout<<"Please enter the no. of star columns";
    cin>>starCols;

    for(int line = 1; line <= starRows; line++){
        for(int j=1;j<= starCols; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
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
//     return 0;
// }
/*OUTPUT-


*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            *

*/
// int n;
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

/*Above code is for--
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/