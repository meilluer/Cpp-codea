#include<iostream>
using namespace std;
class stack{
    int top;
    int arr[3];
    public:
    stack(){
    top=-1;
    }
void disp(){
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<i;
    }
}
void push(){
    if(top==3){
        cout<<"overflow";
    }
    int val;
    cout<<"enter val";
    cin>>val;
    ++top;
   arr[top]=val;
    //++top;
}
int pop(){
    if(top==-1){
        cout<<"underflow";
    }
    int x;
   x=arr[top];
    cout<<x;
    top--;
    return x;
}

};
int main(){
    stack s;
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.pop();
    s.disp();
    return 0;
}