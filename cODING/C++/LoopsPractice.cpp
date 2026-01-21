#include<iostream>;
using namespace std;
int main(){
//TO PRINT STARS IN "n" rows and "m" columns-    
/*  int n,m;
    cin>>n;
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}

// HOLLOW RECTANGLE
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// Triangular Pattern
    int n;
    cin>>n;
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//NOT CLEAR

input- 5
output-
    *
   ***
  *****
 *******
*********
//CODE-
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//NUMBER PRINT

    int n;
    cin>>n;
    

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//NEXT PATTERN 
INPUT
5
7
OUTPUT
1212121
2121212
1212121
2121212
1212121

CODE-

    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
}
   
input-7
OUTPUT-
*******
 *****
  ***
   *
   Code->
int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=(i-1);j++){
    cout<<" ";
    }
    for(int j=1;j<=(n-2*i+2);j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}
*/

