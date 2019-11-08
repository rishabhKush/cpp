# cpp
cpp indepth view


## Quick Tips & Tricks

<b><1>To store big values like  12000000015  use </b><br>
 long long int value[n]; 
<b><2>To break a String down into its component characters</b><br>
     use :  String.toCharArray method. 
     For example, this code:
     String myString = "This is String example.";
     char[] myCharArray = myString.toCharArray();
     for(int i = 0; i < myString.length(); i++){
         // Print each sequential character on the same line
         System.out.print(myCharArray[i]); 
     }
     // Print a newline
     System.out.println(); 

     produces this output:

     This is String example.

