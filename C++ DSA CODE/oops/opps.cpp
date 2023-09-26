#include <iostream>
using namespace std;

class student
{
    public:
    char name;
    int age;

    // private:
    int marks;


    void hero(){
        cout << "this is constractor"<< endl;

    }
  /*  void hero(int age){
        this -> age =  age;
    }*/

    int getMarks (){
        return marks;

    }
    int setMarks (int m){
        marks = m;
    }

};

int main(){
        student ravi;
        // cout <<sizeof(ravi.name) << endl;   
        // cout <<sizeof(ravi.age)<< endl;   
        // cout <<sizeof(ravi.getMarks())<< endl;
        // cout <<sizeof(ravi.setMarks(5))<< endl;   
        // cout <<sizeof(ravi.marks)<< endl;   
        // cout << sizeof(ravi);

        // Dynamically make

        student* b = new student;

        (*b).age = 12;
        cout << "Ravi->>"<<sizeof(ravi) << endl;
        cout << "b->>"<<sizeof(b);

    }
