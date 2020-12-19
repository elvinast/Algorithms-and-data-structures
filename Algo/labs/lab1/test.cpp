#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <string> cl9,cl10,cl11;
    string s,str;
    while(getline(cin,s)){
        if(s[0]=='9') {
            str = s.substr(2,s.size()-2);
            cl9.push(str);
        } else {
            if(s.substr(0,2)=="10") {
                str = s.substr(3,s.size()-3);
                cl10.push(str);
            } else if(s.substr(0,2)=="11"){
                str = s.substr(3,s.size()-3);
                cl11.push(str);
            }
        }
    }

    while(!cl9.empty()){
        cout<<"9 "<<cl9.front()<<endl;
        cl9.pop();
    }
    while(!cl10.empty()){
        cout<<"10 "<<cl10.front()<<endl;
        cl10.pop();
    }
    while(!cl11.empty()){
        cout<<"11 "<<cl11.front()<<endl;
        cl11.pop();
    }

    return 0;
}