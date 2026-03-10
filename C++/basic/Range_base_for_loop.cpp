
// #include<iostream>
// using namespace std;
// int main(){
// int a[5]={7,9,1,3,4};
// for(int i=0;i=5; i++){
//     a[i]++;
// }
// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }
// }
#include<iostream>
using namespace std;
int main(){
    int a[5]{7,9,1,3,4};
    for(int i=0;i<4;i++)
    cout<<a[i]*a[i+1]<<" ";
}