#include <iostream>  
using namespace std;  
class A  
{  
    
    int x;  
      public:  
      A(){}  
    A(int i)  
    {  
       x=i;  
    }  
    void operator+(A a) 
    {  
    int m = x+a.x; 
    cout<<"The result of the addition of two objects is : "<<m;  
  
} 
    void display();  
};  
  
 
int main()  
{  
    A a1(5);  
    A a2(4),a3(10);  
    a1+a2;  
    return 0;  
}  
