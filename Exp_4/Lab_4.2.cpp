#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>mystack;
    mystack.push(42);
    mystack.push(11);
    mystack.push(5);
    mystack.push(71);
    mystack.push(43);
    while(!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
}
