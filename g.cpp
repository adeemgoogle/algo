#include <iostream>
#include <stack>
using namespace std;

//typedef long long  ll;

int main(){
    string s;
    getline(cin, s);
    stack<int> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*')
        {
            int s1 = st.top();
            st.pop();
            int s2 = st.top();
            st.pop();
            if(s[i] == '+')
            {
                st.push(s1+s2);
            }
            if(s[i] == '-')
            {
                st.push(s2-s1);
            }
            if(s[i] == '*')
            {
                st.push(s1*s2);
            }

        }else if(s[i]!=' '){
            st.push(int(s[i])-48);
        }
    }
    cout << st.top();
}