#include <iostream>
#include <stack>
using namespace std;

stack<char> st;
int main(){
    string s;
    cin >> s;
    

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else 
        {
            if(!st.empty())
            {
                if((s[i]==')' && st.top()=='(') || (s[i] == ']' && st.top() == '[') || (s[i] == '}' && st.top() == '{'))
                {
                    st.pop();
                }else {
                    cout << "no";
                    return 0;
                }
            }
            else
            {
                cout << "no"; return 0;
            }
        }
    }

    if(st.empty()){
        cout << "yes";
    }else cout <<"no";
    
}