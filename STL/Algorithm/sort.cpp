#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main (){


    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(18);
    v.push_back(13);
    v.push_back(15);;

    sort(v.begin(),v.end());
    // start, end

    for(int i:v){
        cout<< i<< endl;
    }


}