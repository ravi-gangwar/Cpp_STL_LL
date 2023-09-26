#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> max; // max heap syntax // max heap me max to low wise values hoti hain

    // min heap

    priority_queue<int, vector<int>, greater<int> > mini; // esme low to high


    max.push(6);
    max.push(3);
    max.push(5);
    max.push(2);
    max.push(9);
    max.push(1);

    cout << "Size: "<<max.size()<<endl;

    int n = max.size();

    for(int i = 0; i<n; i++){
        cout << max.top()<<endl;
        max.pop();
    }cout << endl;

    cout << "Is Empty: "<< max.empty();



}