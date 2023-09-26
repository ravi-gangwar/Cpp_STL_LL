#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <string> q;

    q.push("Ravi");
    q.push("Gangwar");
    q.push("Mr.");
    q.push("DodRaj");
    q.push("Gangwar");
      
    cout<< "Size: "<<q.size()<<endl;
    cout<< "First Element: "<<q.front()<<endl;

    q.pop();
      
    cout<<"After POP"<<endl;

    cout<< "Size: "<<q.size()<<endl;
    cout<< "First Element: "<<q.front()<<endl;
      
      
      
      
}
