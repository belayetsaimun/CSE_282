#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec1;
    vector<string>vec2;
    for(int i=0; i<5; i++)
    {
        vec1.push_back(i);

    }
    vec1.push_back(100);
    vec1.push_back(10);
    vec1.push_back(23);
    vec1.push_back(9);

    for(int i=0; i<vec1.size(); i++)
    {
        cout<<vec1[i]<<"\t";

    }
}

