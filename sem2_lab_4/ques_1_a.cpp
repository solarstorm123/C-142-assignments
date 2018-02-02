#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
};

class StackLL{
node*head;
node*tail;
public:
    StackLL(){
    head=NULL;
    tail=NULL;}

    void push(int x);
    void pop();
    void display();
};

void StackLL::push(int x){
node*temp=new node;
if (head==NULL){
    head=temp;
    temp->data=x;
    temp->next=NULL;
    tail=temp;
}
else{
        temp->next=tail;
        tail=temp;
        tail->data=x;
}
cout<<x<<" is pushed."<<endl;
};

void StackLL::pop(){
    if(tail!=NULL){
    node*temp;
    temp=tail;
    cout<<tail->data<<" is popped."<<endl;
    delete tail;
    tail=temp->next;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}

void StackLL::display(){
    node*temp=tail;
    cout<<"stack in reverse :";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
StackLL s;
for (int i=1;i<11;i++){
        s.push(i);
}
s.pop();
s.pop();
s.display();
return 0;
}
