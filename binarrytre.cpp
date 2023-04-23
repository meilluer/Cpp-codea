#include<iostream>
using namespace std;
class nod{
    public:
    int data;
   struct nod*left;
   struct nod*right;

nod(int val){
    data=val;
    nod*left=nullptr;
    nod*right=nullptr;
    
}
};
int main(){
    nod*root=new nod(1);
    root->left=new nod(3);
    root->right=new nod(5);
    return 0;
}



