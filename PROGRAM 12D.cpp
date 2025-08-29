#include <iostream>
using namespace std;
   class Student{
       int age;
       string name;
       
       public:
       Student(string n, int a){
           name = n;
           age = a;
       }
       Student(const Student &s) {
           name = s.name;
           age = s.age;
           cout<<"COPY CONSTRUCTOR CALLED!"<<endl;
       }
       
       void display() {
       cout<<"NAME:"<<name<<", AGE:"<<age<<endl;
   }
   };
   int main() {
    Student s1("YASH SHRIVASTAVA", 20); 
    Student s2 = s1;
    
    cout<<"ORIGINAL OBJECT:";
    s1.display();
    
    cout<<"COPIED OBJECT:";
    s2.display();
    
    return 0;
}

// OUTPUT:

// COPY CONSTRUCTOR CALLED!
// ORIGINAL OBJECT:NAME:YASH SHRIVASTAVA, AGE:20
// COPIED OBJECT:NAME:YASH SHRIVASTAVA, AGE:20

