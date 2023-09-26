#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    vector<string> arr = {"bella", "label", "roller"};
    vector<char> commonWords;
    int vectorSize = arr.size();
    unordered_map<char, int> comm;
    

    for (int i = 0; i<vectorSize; i++) {
        int k =0;
        string str = arr.at(i); 
        while (str[k]!='\0')
        {
            if(comm.count(str[k])){
                comm[k] = i+1;
            }else{
                comm.insert(str[k], )
            }
            
            k++;
        }
        
    }
    for(char i:commonWords){
        cout<<i;
    }

    return 0;
}
