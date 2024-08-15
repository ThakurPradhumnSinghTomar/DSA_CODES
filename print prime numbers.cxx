#include<iostream>
using namespace std;

int main(){
    int num =1;
    while(num<=100){
        int j = 2 ;
        int flag=0 ;
        while(j<num){
            if(num%j==0){
             flag=1;
             break;
            }
            j++;
        }
        if(flag==0){
            cout<<num<<endl;
        }
        num++;
    }
    return 0;
}