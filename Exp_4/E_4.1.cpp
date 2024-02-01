/*Take 5 integer values into a stack. Find the summation of all the stack
elements*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);
    int sum=0;
    while(!mystack.empty())
    {
        sum=sum+mystack.top();
        mystack.pop();
    }
    cout<<"Sum of all the stack elements:"<<sum;
}

