/*Take 6 integer values (0 to 5) into a stack and then find the factorial of
each stack element. Store the outputs in another stack. Print the output in the
following way:
Factorial : 0 = 1
Factorial : 1 = 1
Factorial : 2 = 4
*/

#include <bits/stdc++.h>
using namespace std;

int fact (int x)
{
    if (x== 0)
    {
        return 1;
    }
    else
    {
        return x * fact (x - 1);
    }
}

int main()
{
    stack<int>st,f;

    for (int i = 0; i <= 5; i++)
    {
        st.push(i);
    }

    while (!st.empty())
    {
        int n = st.top();
        st.pop();
        f.push(fact(n));
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << "Factorial : " << i << " = " << f.top() << endl;
        f.pop();
    }
}
