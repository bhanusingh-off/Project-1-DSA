#include<iostream>
using namespace std;
int main(){

//int array[]={1,2,3,4};

//NORMAL LONG METHOD

// cout<<sizeof(array)<<endl;
// cout<<sizeof(array)/sizeof(array[0])<<endl;

// int array2[4];
// cout<<array2[0]<<endl;
// cout<<array2[1]<<endl;
// cout<<array2[2]<<endl;
// cout<<array2[3]<<endl;

// int size = sizeof(array)/sizeof(array[0]);

// //for loop
// for(int idx=0;idx<size;idx++){
//     cout<<array[idx]<<endl;
// }

// //for each loop
// for(int ele:array){
//     cout<<ele<<endl;
// }

// //while loop
// int index=0;
// while(index<size){
//     cout<<array[index]<<endl;
//     index++;
// }

//TAKING INPUT IN ARRAY

// char vowels[5];

// for(int idx=0;idx<5;idx++){
//     cin>>vowels[idx];
// }

// for(int idx=0;idx<5;idx++){
//     cout<<vowels[idx]<<" ";
// }

//2nd method

// for(char &element:vowels){
//     cin>>element;
// }

// for(int idx=0;idx<5;idx++){
//     cout<<vowels[idx]<<" ";
// }

//SUM OF NUMBERS IN ARRAY

// int array[]={3,4,10,11};
// int size=sizeof(array)/sizeof(array[0]);

// int sum=0;
// for(int i=0;i<size;i++){
//     sum+=array[i];
// }
// cout<<sum<<endl;

//FIND THE MAXIMUM VALUES FROM THE ARRAY

// int array[]={3,7,18,9,11};

// int max=array[0];

// for(int i=1;i<5;i++){
//     if(array[i]>max){
//         max=array[i];
//     }
// }

// cout<<max<<endl;

//! LINEAR SEARCH
// Search if a given element is present in the array or not.If it is not present then return -1 else return the index.

int array[]={3,9,18,11,7};
int key = 11;

int ans=-1;

for(int i=0;i<5;i++){
    if(array[i]==key){
        ans=i;
        break;
    }
}
cout<<ans<<endl;

return 0;

}