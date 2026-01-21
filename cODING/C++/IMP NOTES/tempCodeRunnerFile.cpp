 #include<iostream>
 #include<algorithm>
 using namespace std;

 int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
 int ele= s.size();
 for(int i=0;i<ele;i++){
    if (i==(ele-2)){
        cout<<s[i];


    }

 }
 }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// string p;
// cin >> p;
// char f = '?', s = '?';
// for (auto &i : p) {
// if (f == '?' || i > f) {
// s = f;
// f = i;
// } else if (i > s) {
// s = i;
// }
// }
// cout << s;
// }