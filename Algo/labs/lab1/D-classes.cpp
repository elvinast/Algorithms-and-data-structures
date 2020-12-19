#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> G9;
    queue <string> G10;
    queue <string> G11;

    string s;
    while (getline(cin,s)){
        if (s.substr(0, 1) == "9") {
            G9.push(s.substr(2, s.size() - 2));
        }
        else if(s.substr(0,2) == "10") {
                G10.push(s.substr(3, s.size() - 3));
            }
        else if(s.substr(0,2) == "11"){
            G11.push(s.substr(3, s.size() - 3));
        }
    }

    while(!G9.empty()){
        cout << "9 " << G9.front() << endl;
        G9.pop();
    }
    while(!G10.empty()){
        cout << "10 " << G10.front() << endl;
        G10.pop();
    }
    while(!G11.empty()){
        cout << "11 " << G11.front() << endl;
        G11.pop();
    }

    return 0;
}