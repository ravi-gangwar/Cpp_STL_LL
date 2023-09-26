#include <iostream>

#include <list>

using namespace std;
int main(){
    list <int> l(5, 2);
    
    l.push_back(3);
    // for(int i:l){
    //     cout << i << endl;
    // }
    cout << "size: "<<l.size()<<endl;

    l.erase(l.begin());
    // for(int i:l){
    // cout << i << endl;
    //     }

}
