#include <bits/stdc++.h>
using namespace std;

queue<string> ten, elv;

int main(){
    int n;
    string s;
    while(cin >> n)
    {
        cin >> s;
        if(n == 9)
        {
            cout << n << " " << s << "\n";
        }
        if(n == 10)
        {
            ten.push(s);
        }
        if(n == 11)
        {
            elv.push(s);
        }
    }
    while(!ten.empty() || !elv.empty())
    {
        if(!ten.empty())
        {
        cout << "10 " << ten.front() <<"\n";
            ten.pop();
        }
        else if(!elv.empty())
        {
            cout << "11" << " " << elv.front() << "\n";
            elv.pop();
        }
    }
}