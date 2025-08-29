// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: DEFAULT CONSTRUCTOR INSIDE THE CLASS (EXPERIMENT: 12A)

// CODE: 

#include <iostream>
#include <string>  
using namespace std;

class student 
{
    double rollno;
    string name;
    double fee;
    
public:
    student()
    {
        cout << "ENTER THE ROLLNO: ";
        cin >> rollno;
        cin.ignore();       
        cout << "ENTER THE NAME: ";
        getline(cin, name);         
        cout << "ENTER THE FEE: ";
        cin >> fee;
    }

    void display()
    {
        cout << "\nROLL NO: " << rollno
             << "\nNAME: " << name
             << "\nFEE: " << fee << endl;
    }
};

int main()
{
    student s1;  
    s1.display(); 
    return 0;
}

// OUTPUT:

// ENTER THE ROLLNO: 24070123137
// ENTER THE NAME: YASH SHRIVASTAVA
// ENTER THE FEE: 300000

// ROLL NO: 2.40701e+10
// NAME: YASH SHRIVASTAVA
// FEE: 300000

// ENTER THE ROLLNO: 137
// ENTER THE NAME: YASH 
// ENTER THE FEE: 300000

// ROLL NO: 137
// NAME: YASH 
// FEE: 300000
