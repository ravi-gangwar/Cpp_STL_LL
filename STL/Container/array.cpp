#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[4] = {1, 2, 4, 5}; // Normal Array 

    array<int, 4> arr1 = {1,2,3,4}; // STL array

    // methods

    cout <<endl<<"Array is Empty: " << arr1.empty()<<endl<<endl;
    cout << "Ele is Index: " << arr1.at(2)<<endl<<endl;
    cout << "Array's 1st Ele: " << arr1.front()<<endl<<endl;
    cout << "Array's last Ele: " << arr1.back()<<endl<<endl;
}