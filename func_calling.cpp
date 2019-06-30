/******************************************************************************
Learning Different ways to call a function.
*******************************************************************************/

#include <iostream>
using namespace std;

/** call by value */
int sum(int,int);

/** call by address */
int sum1(int *, int  *);
//testing
/** Call by reference*/
int sum2(int  & ,int  &);
int main()
{
    
    
    int a=2,b=4;
    /** call by value*/
    //int s = sum(a,b);
    //cout << "sum is : " << s <<endl;
    
/** call by address*/
    //int s1 = sum1(&a,&b);
    //std::cout << "sum  is :  " <<s1  << std::endl;
    
    
    /** call by reference*/
    //int s2 = sum2(a,b);
    //std::cout << "sum is : " << s2 << std::endl;
    
    
    return 0;
}

/** call by value */
int sum(int  x,int y){
    
    return(x+y);
}

/** call by address*/
int sum1(int *p,int *q){
    
    return(*p + *q);
}

/** call by reference */

int sum2(int &x , int &y){
    
    return(x  +  y);
}