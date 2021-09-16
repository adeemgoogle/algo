#include <iostream>
#include <stack>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};
struct st
{
    int cnt;
    Node * tail;
    public:
    st()
    {
        tail = NULL;
        cnt = 0;
    }
    void poop(){
        tail = tail -> next;
        cnt--;
    }
    void push(int val){
            Node *neww = new Node(val);
            neww -> next = tail;
            tail = neww;
            cnt++;
        }
    
};

int main(){
    st stakk;
    string s;
    while(cin >> s)
    {
        if(s == "size"){
            cout << stakk.cnt << endl;
        }
        if(s == "clear"){
            while(stakk.cnt != 0){
                stakk.poop();
            }
            cout << "ok" << endl;
        }
        if (s == "push")
        {
            int n;
            cin >> n;
            stakk.push(n);
            cout << "ok" << endl;
        }
        if(s == "pop"){
            if(stakk.cnt!=0){
                cout << stakk.tail->val << endl;
                stakk.poop();
            }else cout << "error" << endl;
        }
        if(s=="back")
        {
            if(stakk.cnt == 0) 
                cout << "error" << endl;
            else cout << stakk.tail -> val << endl;
        
        }
        if(s == "exit"){
            cout << "bye" << endl;
            return 0;
        }
    }
}
