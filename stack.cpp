#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
    stack<int> v;

    for(int i = 1; i < 5; i++)
        v.push(i);


    while(!v.empty()){
        cout << v.top() << endl;    
        v.pop();
    }
}

