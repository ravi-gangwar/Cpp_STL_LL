#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> d(5);

    d.push_front(7);
    d.push_back(4);
    d.push_back(6);
    d.push_front(5);
for(int i:d){
        cout << i << endl;
    }

    cout << "size"<< d.size();
    // cout<< d.at(1); 
//     cout << d.front()<<endl;
//     cout << d.back()<<endl;

//     cout << d.empty()<<endl;

//     cout << d.size()<<endl;

//     d.pop_back ();

//     for (auto i:d)
//     {
//         cout<< "->"<< i << endl;
//     }
    
//     cout << "After erase";
//     d.erase(d.begin(), d.begin()+1); // only erase 0 to 1
    
//     for (auto i:d)
//     {
//         cout<< "->"<< i << endl;
//     }
    


//     // d.erase(d.begin(), d.begin()+1)
 }