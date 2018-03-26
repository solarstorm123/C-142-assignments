#include<iostream>
using namespace std;
//class to create node
class node{
     public:
     node *parent;
     node *left;
     node *right;
     int data;
    node(){
     parent=left=right=NULL;
     data=0;
    }
};

//class to create a binary tree
class Btree{
     public:
     node *root;       
   
    Btree()
    {
    root=NULL;
    }

// to insert elements
 void insert(int x){
   node *temp=new node;
   temp->data=x;
   temp->parent=temp->left=temp->right=NULL;
   
   if(root==NULL)
   { root=temp;
   }
   else{ node *cur; 
         cur=root;
        while(1){
            if(x<cur->data){
              
               if(cur->left==NULL){
                  temp->parent=cur;
                  cur->left=temp;
               break;
               }              
              else{cur=cur->left;}
            }
           else { 
                    if(cur->right==NULL)
                       {
                       temp->parent=cur;
                       cur->right=temp;
                     break;}
                   else{cur=cur->right;}
                  }
                          
        }
     }
 }

//to display the elements

 void display(node *temp){
     
      if(temp==NULL)
         return;
      display(temp->left);
      cout<<"\t"<<temp->data;
      display(temp->right);                
}

};     


int main(){
 Btree b;
 cout<<"\nMENU";
 cout<<"\n1.INSERT";
 cout<<"\n2.DISPLAY";
 cout<<"\nEXIT";
 
int ch,x;
do{
  cout<<"\nenter your choice (1-3): ";
  cin>>ch;
  switch(ch){
  case 1:cout<<"\nenter the data you want to enter :";
         cin>>x;
         b.insert(x);break;
  case 2:b.display(b.root);break;
  deafult:cout<<"\nwrong choice ";break;
  }
}while(ch!=3);
return 0;
}
