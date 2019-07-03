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

        cout <<"sum is : " << a+b;
    }
    
    friend Complex operator+(Complex , Complex);
};


Complex operator+(Complex X ,Complex Y){
    Complex temp;
    temp.a= X.a + Y.a;
    temp.b = X.b + Y.b;
    return(temp);
}
int main(){

    //clrscr();


    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(4,5);

    /**
     * Learn to read below line
     * when a binary operator  is overloaded but in case of member fubction
     * c1 called +(acting as a function here) and c2 is passed  as agrument in it,what +  returned is assigned in c3
     * c3 = c1+c2; // c1.operator+(c2) , alternative way of writing this
     * When a binary (+)operator is overloaded but in case of  friend function
     * + operator is called and c1,c2 are passed as argument\
     * c3= c1+c2 //operator+(c1,c2)  , + needs two operannd before 1 became caller object ang 1 was passed as
     * agrument after for friend function  the caller object also becomes(passed) as argument 
     */

    
    c3=c1+c2;  // operator+(c1,c2)  ,  since this is case of friend function
    c3.showData();


}