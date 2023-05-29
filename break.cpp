//********************BREAK STATAMENT**********
//Break statament is used to terimate the condtion when break will execute it will terminate the condition.
//Sample program of BREAK statement.
#include<iostream>
using namespace std;
int main() {
    for(int i=0; i<10; i++) {
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
}
