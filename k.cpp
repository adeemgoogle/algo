#include <iostream>
using namespace std;

bool prime(long long n){
    
    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    if(prime(n)){
        cout << "prime";
    }else cout << "composite";
    return 0;
}