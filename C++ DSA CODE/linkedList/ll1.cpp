#include <iostream>
using namespace std;

class node   
{
    public:
    int data;
    node* next;

    node(int data){
        this -> data =data;
        this -> next = NULL;

    }
};

void inserAtNode(node* &head, int d){
    node
    node* temp = new node(d);
    temp -> next = head;
    head = temp;

};

    // print
    void print(node* head){
        node* temp = head;
        while (temp != NULL)
        {
            cout << temp ->  data << " ";
            temp = temp -> next;


        }
        cout<< endl;
        
    };

int main(){
    node* node1 = new node(10);
    // cout << node1 -> data << endl;
    node* head = node1;
    print(head);

    inserAtNode(head, 12);

    print(head);

    return 0;


}