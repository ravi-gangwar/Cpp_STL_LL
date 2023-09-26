#include <vector>
#include <iostream>
// vector jb full ho jata hain to yh apna size double kr leta hain
using namespace std;
int main(){

vector<int> v; // intialize without pre given Size
// vector<int> a(5, 1); // here name of vector is "a" and size is "5" and initilize all the Block with "1";
// vector<int> last(a); // here "a" vector copy in last vecotr;

// cout << v.capacity()<<endl; // this is tell us Memory taken by vector or space;

v.push_back(78); // this is push method of vector

// cout << v.size()<<endl; // size() tells how many element in the vector

// cout << v.at(1)<<endl;

cout << "front: " << v.front()<<endl;

cout << v.back()<<endl;

v.pop_back(); // DELETE LAST ELEMENT 

v.clear(); // this clear all the element but STIORAGE Remains Same

for(int i:v){
    cout<< i << " ";
}cout << endl;

}
