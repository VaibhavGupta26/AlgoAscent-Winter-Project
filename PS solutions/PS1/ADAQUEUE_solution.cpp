// problem link:  http://www.spoj.com/problems/ADAQUEUE/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    deque<int>dq;
    int rev=0;
    
    while(n--){
        string s;cin>>s;
        if(s=="toFront"){
            int x;cin>>x;
            if(rev){
                dq.push_back(x);
            }
            else dq.push_front(x);
        }
        else if(s=="push_back"){
            int x;cin>>x;
            if(rev){
                dq.push_front(x);
            }
            else dq.push_back(x);
        }
        else if(s=="back"){
            if(!dq.size()){
                cout<<"No job for Ada?"<<endl;
            }
            else{
                if(rev){
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
                else{
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
            }
        }
        else if(s=="front"){
            if(!dq.size()){
                cout<<"No job for Ada?"<<endl;
            }
            else{
                if(rev){
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
                else{
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
            }
        }
        else if(s=="reverse"){
            rev= 1-rev;
        }
    }
}