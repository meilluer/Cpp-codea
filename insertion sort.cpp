#include<iostream>
using namespace std;
int arr[40];
int siz;
class shot{
    public:
    void ary(){
    cout<<"enter array size";
        cin>>siz;
        cout<<"enter array elements";
        for(int i=0;i<siz;i++){
            cin>>arr[i];
        }
    }
    void swap(int a,int b){
        int temp;
        a=temp;
        temp=b;
        b=a;
    }
    void disp(){
        for(int i=0;i<siz;i++){
            cout<<arr[i];
        }
    }
    void sort(){
        for(int i=0;i<siz;i++){
            for(int j=1;j <siz;j++){
                int temp2=arr[j];
                int f=j-1;
                while(f>=0&& temp2<=arr[f]){
                    arr[f+1]=arr[f];
                    f=f-1;
                }
                arr[f+1]=temp2;
            }
        }
    }
};
int main(){
    shot s;
    s.ary();
    s.sort();
    s.disp();
    return 0;
}