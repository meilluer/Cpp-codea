#include<iostream>
using namespace std;
class select{
    int arr[40];
    int size;
    public:
    void ary(){
        cout<<"siz";
        cin>>size;
        for(int i=0;i<size-1;i++){
        cout<<"elem";
        cin>>arr[i];
        }
}
    void disp(){
        for(int i=0;i<size-1;i++){
            cout<<arr[i]<<endl;
            
        }
    }
    void sort(){
        int minval;                                                        
        for(int i=0;i<size-1;i++){
            minval=i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[minval]){
                    minval=j;
                }
                //swap(&arr[j],&arr[minval]);
            }
            swap(&arr[i],&arr[minval]);
            }
        }
    void swap(int *a,int *b){
        int trp;
      trp=*a;
      *a=*b;
      *b=trp;
    }
};
int main(){
    select s;
    s.ary();
    s.disp();
    s.sort();
    s.disp();
}