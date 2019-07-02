/******************************************************************************
Learning function overloading.
*******************************************************************************/

#include <iostream>
using namespace std;

/** call by value */
float area(int);

int area(int,int);

int main()
{
    
    
    int a=2;
    int  l=3,b=3;
    /** area of circle*/
    float ar = area(a);
    cout << "area is : " << ar <<endl;
 
 
    /** area of rectangle*/
    int rect = area(l,b);
    cout << "rectangle area is : " << rect <<endl;
    
    //return 0;
}

/** call by value
 * area of circle
*/
float area(int  x){
    
    return(3.14*x*x);
}

/** call by value
 * area of rectangle
*/
int area(int n,int m){

    return(m*n);
}
