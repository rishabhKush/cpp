/**
 * Friend func. is not member function of a class to which it's a friend
 * Declared in the class,Defined outside the class
 * Can access private members of the class
 * There is no caller object for friend func. Caller object is only for member function
 */


#include <iostream>
using namespace std;


class Complex{

    private:
    int a,b;
    public:

    void setData(int x,int y){
        a=x;
        b=y;

    }
    void showData(){
        cout << "a= " << a << " b =" << b << endl; 
    }

    friend void fun(Complex);
};


void fun(Complex c){

    cout << "sum is : " << c.a+c.b << endl;
}
int main{
    
    clrscr();
    
    Complex c1,c2;
    
    /**this is how a member function is called having a caller object */
    c1.setData();

    /**this is how a friend function is called not having a caller object ,by passing object as paramerter*/
    fun(c1);
    
}