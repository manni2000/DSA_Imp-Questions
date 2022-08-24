#include<bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q;
public:
Stack() {
    
}

void push(int x) {
    int s = q.size();
    q.push(x);
    for(int i=0;i<s;i++){
        q.push(q.front());
        q.pop();
    }
    return;
}

int pop() {
    if(q.empty()){
        return -1;
    }
    int ans = q.front();
    q.pop();
    return ans;

}

int top() {
    if(q.empty()){
        return -1;
    }
    int ans = q.front();
    return ans;
}

int Size() {
    return q.size();
  }
// bool empty() {
//     return q.empty();
//  }
 };

int main() {
  Stack s;
  s.push(3);
  s.push(2);
  s.push(4);
  s.push(1);
  cout << "Top of the stack: " << s.top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.pop() << endl;
  cout << "Top of the stack after removing element: " << s.top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();
}