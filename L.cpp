#include <iostream>

using namespace std;
long long gcd(long long a, long b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else {
            b = b % a;
        }
    }    return a+b;
}

int main(){
    long long a,b;
    cin >> a >> b;
    cout << (a*b) / gcd(a,b);
    return 0;
}