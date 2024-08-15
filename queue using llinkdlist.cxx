#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}*f=NULL,*r=NULL;


void traverse(){
if(f==NULL){
cout<<"QUEUE IS EMPTY"<<endl;
}
else{
struct node *t=f;
for(t;t!=NULL;t=t->next){
cout<<t->data<<"   ";
}
}
}
void enqueue(){
struct node *p=new node;
cout<<"ENTER DATA: "<<endl;
cin>>p->data;
if(f==NULL){
p->next=NULL;
f=p;r=p;
}
else{
p->next=NULL;
r->next=p;
r=p;
}
}


void dequeue(){
if(f==NULL){
cout<<"QUEUE IS EMPTY"<<endl;
}
else if(f==r){
f=NULL;r=NULL;
}
else{
f=f->next;
}
}
int main(){
int x;
do{
cout<<"PRESS "<<endl<<"1. To enqueue "<<endl<<"2. To dequeue"<<endl<<"3. To traverse ";
cin>>x;


switch(x){
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
traverse();
break;
default:
cout<<"TERMINATING"
;
break;
}
}
while(x<=3&&x>0);
return 0;
}