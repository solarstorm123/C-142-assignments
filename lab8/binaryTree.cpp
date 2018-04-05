#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class node{
    public:
    int data;
    node*right;
    node*left;

    node(){
    right=NULL;
    left=NULL;
    }
};

class tree{
    node*root=NULL;
    public:
    void insertNode(int a){
        if (root==NULL){
                node*temp=new node;
                temp->data=a;
                temp->right=NULL;
                temp->left=NULL;
                root=temp;
        }

        else if(root!=NULL){
                node*temp=new node;
                temp->data=a;
                node*temp1=root;


                while(temp1->right!=NULL&&temp1->left!=NULL){
                    if(a<temp1->data){
                        temp1=temp1->left;
                    }
                    else if(a>temp1->data){
                        temp1=temp1->right;
                    }
                }

                if(a<temp1->data){
                    temp1->left=temp;
                }
                else if(a>temp1->data){
                    temp1->right=temp;
                }
        }
    }

    void display(node*a){

        if(a==NULL){return;}
        cout<<a->data<<endl;
        display(a->left);
        display(a->right);

    }

    void searchNode(int a,node*b){
        if(b==NULL){return;}
        if(b->data==a){
            cout<<"data found."<<endl;
            return;
        }
        searchNode(a,b->left);
        searchNode(a,b->right);
    }

    /*void isdata(int a,node*b){
        if(searchNode(a,b)){
            cout<<"data found"<<endl;
        }
        else{cout<<"data not found."<<endl;}
    }*/

    int countNode(node*a){
        if(a==NULL){return 0;}
        return 1+countNode(a->left)+countNode(a->right);
    }

    void rangeSearch(int m, int n, node*a){
        if(a==NULL)return;
        if(m<=a->data&&n>=a->data){
            cout<<"range: "<<a->data<<endl;
        }
        rangeSearch(m,n,a->left);
        rangeSearch(m,n,a->right);
    }

    void getRoot(node*&a){         //pointer pass by reference.
        a=root;
    }

};


int main(){
    tree t;
    node*a=NULL;
    for(int i=0;i<11;i++){
            t.insertNode(rand()%100);
    }

   // t.insertNode(5);
    //t.insertNode(1);

    t.getRoot(a);
    //t.rootdata(a);
    t.display(a);
    t.searchNode(58,a);
    cout<<"number of nodes: "<<t.countNode(a)<<endl;
    t.rangeSearch(0,50,a);
    return 0;
}






