#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<string> s;


    s.push("Ravi");
    s.push("Gangwar");
    s.push("Mr.");
    s.push("DodRaj");
    s.push("Gangwar");

    cout << "Size: "<<s.size()<<endl;

    cout << "Top Ele: "<<s.top()<<endl;

    s.pop();
    cout << "After pop top Ele: "<<s.top()<<endl;

}