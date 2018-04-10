#include <iostream>
using namespace std;

class heap{
    int arr[100];
    int i=0;
public:
    heap(){
        for(int e=0;e<100;e++){
            arr[e]=0;
        }
    }
    void insertData(int a){
        arr[i]=a;
        int p=(i-1)/2;
        if(i>0){

            int z=i;
            while(arr[z]>arr[p]&&z>0){
                int temp=arr[z];
                arr[z]=arr[p];
                arr[p]=temp;
                z=p;
                p=(p-1)/2;
            }
        }
        i++;
    }

    void removeData(){
        arr[0]=arr[i-1];
        arr[i-1]=0;

        int x=0;
        int r=2*x+2;
        int l=2*x+1;
        if(x<i-2){
            while(arr[x]<arr[l]||arr[x]<arr[r]){

                if(arr[x]<arr[l]&&arr[x]<arr[r]){
                    int temp=max(arr[r],arr[l]);
                    if(temp==arr[r]){
                        arr[r]=arr[x];
                    }
                    else {arr[l]=arr[x];}
                    arr[x]=temp;
                    x=l;
                    l=2*x+1;
                    r=2*x+2;
                }
                else if(arr[x]<arr[l]){
                    int temp=arr[x];
                    arr[x]=arr[l];
                    arr[l]=temp;
                    x=l;
                    l=2*x+1;
                    r=2*x+2;
                }
                else if(arr[x]<arr[r]){
                    int temp=arr[x];
                    arr[x]=arr[r];
                    arr[r]=temp;
                    x=r;
                    r=2*x+2;
                    l=2*x+1;
                }

            }
        }
        i--;

    }


    void display(){
        for(int n=0;n<i;n++){
            cout<<arr[n]<<" ";
        }
        cout<<""<<endl;
    }
};

int main(){
    heap t;
    /*t.insertData(30);
    t.insertData(25);
    t.insertData(29);
    t.insertData(10);
    t.insertData(44);*/
    int q=0;
    cout<<"enter the no. of elements: ";
    cin>>q;
    cout<<"enter elements :"<<endl;
    for(int w=0;w<q;w++){
            int b=0;
        cin>>b;
        t.insertData(b);
    }
    t.display();
    t.removeData();
    t.display();
    cout<<"hi, it was fun working with you!!!";


    return 0;
}
