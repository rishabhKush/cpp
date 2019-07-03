

/**
 * Friend function is declared inside the class but is ddefined outside the class
 */

#include <iostream>
using namespace std;

class Complex{

    private:
    int a,b;

    public:
    void setData(int x,int  y){
        a=x;
        b=y;
    }

    void showData(){

        cout <<" a : "<< a << " b : " << b;
    }


    //if it was member function
    //     Complex operator-(){

    //     Complex temp;
    //     temp.a = a;
    //     temp.b = b;
    //     return(temp);
    // }
    friend Complex operator-(Complex);



};

Complex operator-(Complex X){

    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return(temp);
}



int main(){

    //clrscr();


    Complex c1,c2;
    c1.setData(2,3);

    c2 = -c1;
    /**
     * Learn to read below line
     * In case of friend function
     * c2 = -c1  ;  // c2 = operator -(c1) , -  get called and c1 is passed as an argument and whats returned is assinged in c2
     *  in case of member function   c2 = -c1;   // c2= c1.operator-();
     * c1 called -(acting as a function here) and nothing is passed  as agrument in it,what - returned is assigned in c2
     */
    c2.showData();

    //output a : -2 b : -3
}