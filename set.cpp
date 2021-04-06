#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    set<int> v;

    v.insert(3);
    v.insert(1);
    v.insert(1);
    v.insert(2);

    for(auto &x: v)
        cout << x << endl;
}

