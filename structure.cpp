/**
 * I aggree with those who think that, the code could be writen  in a better way than this.
 */
#include <iostream>
#include <string.h>

using namespace std;

struct book
{
    int bookid;
    char title[40];
    float price;
};

book input();
void display(book);
int main(){

    /** intitialsation during declaration */
    book b1 = {1,"cpp by Rishabh Kushwaha",299.0};  

    /** Intialisation after declaration */
    book b2;
    b2.bookid = 2;
    b2.price = 600.0;
    
    /** this way of initialzation of a string to a char type is wrong ,instead we use strcpy when assigning 
    sring to char type */
    //b2.title =  "c by Rishabh Kushwaha";
    
    strcpy(b2.title,"c by Rishabh Kushwaha");

    /** assigning whole book variable to another */
    book b3;
    b3=b2;
    //uncomment to see output
    // cout<< b3.bookid << endl;
    // cout<< b3.price << endl;
    // cout << b3.title <<endl;
    

    
    book b6 = input();
    display(b6);
    
    return 0;
}

book  input(){
    book b4;
     cout<< "Enter bookid ,title ,book price" << endl;
     cin>> b4.bookid ;
     cin >> b4.title ;
     cin >> b4.price ;

    /** More than 1 value can't be returned ,but sincce we used b4 (of type book) which contains multiple input values
     * it is seen as 1 value by return
     */
     return(b4);
}


void  display(book b5){

    cout << b5.bookid << " " << b5.title << " "   <<  b5.price << endl;
  
}