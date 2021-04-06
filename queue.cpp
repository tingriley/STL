#include<iostream>
#include<string>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
    queue<int> v;

    for(int i = 1; i < 5; i++)
        v.push(i);


    while(!v.empty()){
        cout << v.front() << endl;    
        v.pop();
    }
}

