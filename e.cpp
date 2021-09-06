#include <bits/stdc++.h>
using namespace std;

int main (){
    queue<int> fst, snd;
    int c;
    int cnt = 0; 
    for(int i = 0; i < 5; i++)
    {
        cin >> c;
        fst.push(c);
    }
    for(int i = 0; i <5; i++){
        cin >> c;
        snd.push(c);
    }
    while (!fst.empty() && !snd.empty())
    {
        
        if(fst.front() == 0 && snd.front() == 9)
        {
            fst.push(fst.front());
            fst.push(snd.front());
            
            
        }
        else if(fst.front() == 9 && snd.front() == 0)
        {
            snd.push(fst.front());
            snd.push(snd.front());
        }
        else if(fst.front() > snd.front())
        {
            fst.push(fst.front());
            fst.push(snd.front());
            
        }
        else if(fst.front() < snd.front())
        {
            snd.push(fst.front());
            snd.push(snd.front());
        }
        fst.pop();
        snd.pop();
        
        //cout << fst.front() <<  " " <<  snd.front() << endl;
        cnt++;
        
    
        if(cnt >= 1000000)
        {
            cout << "botva";
            return 0;
        }
    }
    if(!fst.empty() && snd.empty())
    {
        cout << "first" << " " << cnt;
    }
    else cout << "second" << " "<< cnt;
    return 0;
}