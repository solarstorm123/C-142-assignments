#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
};

class Queue{
node*head;
node*tail;
public:
    Queue(){
    head=NULL;
    tail=NULL;}

    void push(int x);
    void pop();
    void display();
};

void Queue::push(int x){
node*temp=new node;
if (head==NULL){
    head=temp;
    temp->data=x;
    temp->next=NULL;
    tail=temp;
}
else{
        tail->next=temp;
        temp->data=x;
        temp->next=NULL;
        tail=temp;
}
cout<<x<<" is pushed."<<endl;
};

void Queue::pop(){
    if(head!=NULL){
    node*temp;
    temp=head;
    cout<<head->data<<" is popped."<<endl;
    delete head;
    head=temp->next;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}

void Queue::display(){
    node*temp=head;
    cout<<"Queue :";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
Queue s;
for (int i=1;i<11;i++){
        s.push(i);
}
s.pop();
s.pop();
s.display();
return 0;
}
