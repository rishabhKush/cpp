/**
 *  Friend  Func. can be friend to more than one class.
 *  Firend function is not amember func,hence while declaration in class it's mode could be private or public.
 *  Friend func. is not member function of a class to which it's a friend
 * Declared in the class,Defined outside the class
 * Can access private members of the class
 * There is no caller object for friend func. Caller object is only for member function
 */


#include <iostream>
using namespace std;


class B;
class A{

    private:
    int  a=2;
    public :
    friend void  fun(A,B);
};

class B{
    private:
    int  b=2;
    public :
    friend void  fun(A,B);

};

void fun(A o1,B o2){

    cout << "sum is : " << o1.a+o2.b<< endl;
 
    

}

int  main(){
    //clrscr();
    
    A obj1;
    B obj2;
    fun(obj1,obj2);
    }