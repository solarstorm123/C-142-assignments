#include <iostream>
using namespace std;

const int len=100;

class stack{
int top;
public:
stack(){
top=-1;
}
int arr[len];
void push(int x);
void pop();
void head();
bool isEmpty();
};

void stack::push(int x){
if(top<len){
top++;
arr[top]=x;
cout<<x<<" is pushed."<<endl;
}
else{
cout<<"stack overflow."<<endl;
}
}

void stack::pop(){
if (top>=0){
cout<<arr[top]<<" is popped."<<endl;
top--;
}
else{cout<<"no element to pop."<<endl;}
}

void stack::head(){
if(isEmpty()){
cout<<"stack is empty.";}
else{
cout<<arr[top]<<" is the latest (top) element.";
}
}

bool stack::isEmpty(){
if(top<0){
return 1;
}
else{return 0;}
}

int main(){

stack s;
for (int i=1;i<11;i++){
s.push(i);
}
s.pop();
s.pop();
s.head();
return 0;
}
