#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    map<char, int> v;
    v['a'] = 1;
    v['b'] = 2;

    for(auto &x: v){
        cout << x.first << " " << x.second << endl;    
    }
}

