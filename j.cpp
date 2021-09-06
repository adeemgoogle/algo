#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else {
            b = b%a;
        }
    }

    return a+b;
}

int main(){
    ll a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}