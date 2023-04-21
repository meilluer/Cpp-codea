#include<iostream>
#include<vector>
using namespace std;
class vec{
    public:
    vector<int> v;
     vec(){
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
    vec b;
    b.disp();
    return 0;
}
