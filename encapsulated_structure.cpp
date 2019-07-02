/**
 * Learing  structure using Encapsulation
 * Encapsulation :> All the properties( variables  or function ) that belong to simillar group 
 *                  must be grouped to 1 single group.
  * I aggree with those who think that, the code could be writen  in a better way than this.
 */
#include <iostream>
#include <string.h>

using namespace std;


/**This structure consist 5 MEMBERS, 3: Member variables & 2:Member functions */
struct book
{
    int bookid;
    char title[40];
    float price;


    /** used void and not book bcoz its seen like this that the caller object(here b6) type will hold for input */
    void  input(){
    
     cout<< "Enter bookid ,title ,book price" << endl;
     cin>> bookid ;
     cin >>title ;
     cin >>price ;

     
}


void  display(){

    cout << bookid << " " << title << " "   <<  price << endl;
  
}    
};

int main(){

    book b6 ;
    b6.input();
    b6.display();
    
    return 0;
}

