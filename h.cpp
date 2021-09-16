#include <iostream>
#include <deque>
using namespace std;
deque<int> d, d2;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        int n;
        if(c == '+')
        {
            cin >> n;
            d2.push_back(n);
        }
        if (c == '*')
        {
            cin >> n;
            d2.push_front(n);
        }
        if (c == '-')
        {
            cout << d.front() << "\n";
            d.pop_front();
        }
        if (d.size() < d2.size())
        {
            d.push_back(d2.front());
            d2.pop_front();
        }
    }
}