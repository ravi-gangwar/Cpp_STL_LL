#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, string> m1; // order = Sorted;

    m1[1] = "Ravi";
    m1[4] = "Gangwar";
    m1[2] = "Rohan";
    m1[3] = "Rohit";

    m1.insert({5, "Mr Naresh"});
    m1[1] = "r";

    cout << (m1[1]);

    cout << "Cout: "<< m1.count(5)<<endl;


    m1.erase(4);

    for(auto i:m1){
        cout<<i.first<<" " << i.second<<endl;
    }

}