#include <iostream>
#include "SLList.h"
using namespace std;

void reverse(SLList &a){
	Node*temp=a.head;
	
	Node*temp2=a.tail;

	a.tail=a.head;

	a.head=temp2;

	while(a.tail->next!=temp2){
		while(temp->next!=temp2){
		
		temp=temp->next;
		}

        temp2->next=temp;
		temp2=temp;
		temp=a.tail;
		}
	temp2->next=a.tail;
	a.tail->next=NULL;
}

int main(){
	SLList foo;
	for(int i=0;i<10;i++){
		foo.insert(i);
	}

	foo.display();
	reverse(foo);
	foo.display();



	return 0;
}


			




