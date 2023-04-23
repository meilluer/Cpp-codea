#include<iostream>
using namespace std;
class count{
    int siz,arr[40],count[50],out[50],i;
    public:
    void disp(){
        out[i]=arr[i];
        int i=0;
        out[i]=arr[i];
        for( i=0;i<siz;i++){
            cout<<arr[i];
        }
    }
    void ary(){
        int n;
        cout<<"enter siz";
        cin>>siz;
        for(int i=0;i<siz;i++){
        cout<<"enter elements";
        cin>>arr[i];
        }
    }
    void sort(){
        int*count=new int[siz+1];
        for(int i=0;i<=siz;i++){
            count[i]=0;
        }
        for(int i=0;i<siz;i++){
            count[arr[i]]++;
        }
        for(int i=1;i<=siz;i++){
            count[i]+=count[i-1];
        }
        int *out=new int[siz];
        for(int i=siz-1;i<0;i--){
           out[count[arr[i]]-1] = arr[i]; count[arr[i]]--;
        }
     }

};
int main(){
    count c;
    c.ary();
    c.sort();
    c.disp();
    return 0;
}