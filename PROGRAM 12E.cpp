// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: DESTRUCTOR (EXPERIMENT: 12E)

// CODE: 

#include <iostream>
using namespace std;
int count = 0;
   class destruct{
       public:
       destruct()
       {
           count++;
           cout<<"NO. OF OBJECTS CREATED:"<<count<<endl;
       }
       ~destruct()
       {
           count--;
           cout<<"NO. OF OBJECTS DESTROYED:"<<count<<endl;
       }
   };
   
   int main(){
       destruct aa, bb, cc;
       { destruct dd;
       }
       return 0;
   }

// OUTPUT:

// NO. OF OBJECTS CREATED:1
// NO. OF OBJECTS CREATED:2
// NO. OF OBJECTS CREATED:3
// NO. OF OBJECTS CREATED:4
// NO. OF OBJECTS DESTROYED:3
// NO. OF OBJECTS DESTROYED:2
// NO. OF OBJECTS DESTROYED:1
// NO. OF OBJECTS DESTROYED:0
