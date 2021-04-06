#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v {
        1,
        3,
        4,
        2,
        5
    };

    reverse(v.begin(), v.end());
    for(int x: v)
        cout << x << endl;
    sort(v.begin(), v.end());
    
    cout << endl;
    for(int x: v)
        cout << x << endl;
}

