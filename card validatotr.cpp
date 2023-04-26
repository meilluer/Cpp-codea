
#include <iostream>
#include<vector>
using namespace std;
      vector<int>v;
      string s;
 bool check(  string s){
     cout<<"enter number";
     cin>>s;
    for(int i1=0;i1<s.size();i1++){
        v.push_back(s[i1]-'0');
    }
    for(int i=v.size()-2;i>=0;i-=2){
       int a=s[i];
       a=a*2;
       if(a>9){
           a=a/10+a%10;
       }
       v[i]=a;
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    if(sum%10==0){
       return true;
       
    }
    else{
       return false;
       
    }
}

int main() {
cout<<boolalpha<<check(s);
}

