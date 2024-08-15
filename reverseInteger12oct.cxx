//To reverse the number
#include <iostream>
using namespace std;
int n, sum=0;
int main (){
    cout<<"Enter a number: ";
    cin>>n;
   int n1,n2,n3;
   n1 = n;
   n2 = 0;
   if(n>=0){while(n1>0){
   n2 = ((n2+(n1%10))*10 ); 
    n1=n1/10;
   }
   }
   else{
   	
   while(n1<0){
   n2 = ((n2+(n1%10))*10 ); 
    n1=n1/10;	
   	
   }
   }
   if(n<2147483647){
   	
   cout<<"Reverse Number is "<<n2/10<<endl;
   }
   else{ cout<<"Please Not Enter Very Large Number";}
   
   if(n>-2147483647){
   	
   
   }
   else{ cout<<"Please Not Enter Very Small Number";}
    return 0;
}
