// fig06_03.c
// Initializing the elements of array s to the even integers from 2 to 10.
#include <stdio.h>
#define SIZE 5 // maximum size of array
int main(void)
{
    int j[SIZE];
    for(size_t i=0; i<SIZE; i++) //size_t is a function not for inisilaize
    {
     j[i]=2+2*i;
    }
    printf("%s%8s\n","Element","Value");
//    for(size_t i=0; i<SIZE; i++) in orginal code
    for(int i=0; i<SIZE; i++)
    {
        printf("%7zu%8d\n",i,j[i]);
    }
}


/**************************************************************************
 * (C) Copyright 1992-2021 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

