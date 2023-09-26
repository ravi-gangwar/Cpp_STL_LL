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
    v.push_back(15);
    v.push_back(10);
    v.push_back(19);
    v.push_back(21);
    v.push_back(41);

    sort(v.begin(), v.end());

    cout << "Finding Present or not: " << binary_search(v.begin(), v.end(), 18)<<endl;

    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 14) - v.begin()<<endl;

    


}