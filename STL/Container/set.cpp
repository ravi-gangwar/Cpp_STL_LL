#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s;

    s.insert(4);
    s.insert(4);
    s.insert(7);
    s.insert(8);
    s.insert(8);
    s.insert(0);
    s.insert(7);
    s.insert(46);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(2);


    for (int i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++; // pointing 2nd ele

    s.erase(it);

    cout << "count: "<< s.count(4)<< endl; // count tell ele is present or not

    set <int>::iterator itr = s.find(46);

    cout << "itr: "<< *itr <<endl;





}