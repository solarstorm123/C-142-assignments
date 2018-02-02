#include <iostream>
using namespace std;

class node{      //node to store data and pointer to link to other nodes.     
public:          
    int data;
    node*next;
};

class StackLL{   //            
node*head;
node*tail;
public:
    StackLL(){
    head=NULL;
    tail=NULL;}

    void push(int x);       //function to push or add a new data in the stack.
    void pop();             //function to delete the last element added.   
    void display();         //function to display the current elements in the stack.
};

void StackLL::push(int x){   
node*temp=new node;            //creating a pointer temp which points to a new node.
if (head==NULL){               //if the list is empty.
    head=temp;
    temp->data=x;
    temp->next=NULL;
    tail=temp;
}
else{                         //if the list already has atleast one element;
        temp->next=tail;
        tail=temp;
        tail->data=x;
}
cout<<x<<" is pushed."<<endl;
};

void StackLL::pop(){
    if(tail!=NULL){           //if the list has atleat one element.
    node*temp;
    temp=tail;
    cout<<tail->data<<" is popped."<<endl;
    delete tail;
    tail=temp->next;
    }
    else{                    //the list does not have any element.
        cout<<"stack underflow"<<endl;
    }
}

void StackLL::display(){     //displays the list in the reverse order.
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
