#include<iostream>
#include<vector>
using namespace std;
class k2{
    public:
    vector<int> v;
     k2(){
         int a;
        cout<<"enter size";
        cin>>a;
        for(int i=0;i<a;i++){
           v.push_back(i);
        };
          
    }
    void disp(){
          for(auto p=v.begin();p<v.end();p++){
            cout<<*p<<endl;
           }
    }
};
int main(){
    k2 b;
    b.disp();
    return 0;
}