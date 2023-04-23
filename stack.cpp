#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	int a=0;
	cout<<"size";
	cin>>a;
	for(int i=0;i<a;i++){
		int b;
	cout<<"element";
	cin>>b;
	stack.push(b);
	}
    while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}

