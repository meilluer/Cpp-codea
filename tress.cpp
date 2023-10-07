#include<iostream>
using namespace std;
class node{
  public:
  int val;
  node*left=NULL;
   node*right=NULL;
  node(int i){
    val=i;
  node*left=NULL;
   node*right=NULL;
  }
}
int main(){
  node*root=new node(1);
  root->left=new node(5);
  return 0;
}