//Write a C++ program to print the star and terminate using break statement
#include<iostream>
using namespace std;
int main() {
    for(int i=1; i<20;i++){
        if(i==10){
            break;
        }
        cout<<"*"<<endl;
    }
}
