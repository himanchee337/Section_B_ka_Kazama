#include<iostream>
using namespace std;
class student{
    public:
    int a,b;
    student(){
        
cout<<"object created "<<endl;

    }
    // ~student(){ //destructor
    //     cout<<"object destroyed"<<endl;

    // }
};
int main(){
    student s1,s2;
    return 0;
}