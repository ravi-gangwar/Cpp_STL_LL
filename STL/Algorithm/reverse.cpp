#include <iostream>
#include <algorithm>
#include <vector>

using namespace  std;

int main () {
    // string a = "Ravi";
    vector <int> a;

    a.push_back(3);
    a.push_back(4);

    reverse(a.begin(), a.end());


    for(int i : a){
        cout << i << " ";
    }

}