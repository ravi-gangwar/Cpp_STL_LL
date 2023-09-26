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

    // destructor
    ~node(){
        int value = this->data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout << "memory is free node with data " << value << endl;
    }
};

void insertAtHead(node* &head, int d){
    
    node* temp = new node(d);
    temp -> next = head;
    head = temp;

};

void insertAtTail(node* tail, int d){
    node* temp = new node(d);
    tail -> next = temp; 
    tail = tail -> next;
}

void insertAtPosition(node* &tail, node* &head, int position, int d ){
    node* temp = head;

    if(position==1){
        insertAtHead(head, d);
        return;
    }
    int c  = 1;
    while(c < position-1){
        temp = temp -> next;
        c++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    node* insertToNode = new node(d);
    insertToNode -> next = temp ->next;
    temp->next = insertToNode;

}
void deleteNode(node* &head, node* &tail, int position){
    if(position == 1){
        node* temp = head;
        head = head -> next;

        temp ->next = NULL;
        delete temp;
    }else{
        node* curr = head;
        node* prev = NULL;
        int c = 1;
        while (c < position){
            prev = curr;
            curr = curr -> next;
            c++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr ->next = NULL;
        delete curr;
        

    }
}
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
    node* tail = node1;
    print(tail);

    insertAtTail(tail, 12);

    print(tail);

    insertAtPosition(tail, head, 1, 22);
    print(head);

    deleteNode(head, tail, 3);
    print(head);

    cout << "head: "<<head -> data << endl;
    cout << "tail: "<<tail->data;


    return 0;


}