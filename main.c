/*Those thing that start with # are called preprocessor directive,
 you don`t need ; at the end of any of them*/

#include <stdio.h> //standard  input output
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "tamirInfo.h"


#define Name "this is the value" /*search the program got anything called Name and replace them with value
 printf("This will print the value of #define Name  %s" , Name);
 In c all of this process is made before compilation time
 */



int main()
{






    /**************************************************************************/

    /*check if the letter is capital or not

    int isUpperCase = 'd';

    if ( isalpha(isUpperCase) ){
        if(isupper(isUpperCase)){
            printf(" %c is capital",isUpperCase);
        }else{
            printf(" %c is not capital",isUpperCase);
        }
    }

    */


    /**************************************************************************/

    /*In c this is how you check is int/char are numbers or chars

    int number = '9';

    if ( isalpha(number) ){
            printf(" %c this is a number",number);
    }else if (isdigit(number)){
            printf(" %c this is a char",number);
    }
    */

    /**************************************************************************/

    /* This is how you check is a letter is from the abc
    int some = "a";

    if(!isalpha(some)){
        printf("it is abd");

    }else{
        printf("you dumb shit");
    }

    */



    /**************************************************************************/


    /*sHORTEN IF IN C

    (1 ==2) ? printf("Condition is true") : printf("Condition is false");





    /**************************************************************************/

    /*Replacing the array context
    char myName [] = "tamir" ;
    //In c this is how you replace something that inside array
    strcpy(myName,"lalal");
    printf("this is my name %s" , myName);
    */


    /**************************************************************************/
    return 0;
}
