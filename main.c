/*Those thing that start with # are called preprocessor directive,
 you don`t need ; at the end of any of them*/

#include <stdio.h> //standard  input output
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "tamirInfo.h"


#define Name "this is the value" /*search the program got anything called Name and replace them with value
 printf("This will print the value of #define Name  %s" , Name);
 In c all of this process is made before compilation time
 */



int main()
{


    /**************************************************************************/
    ///String manipulations in c

    //replace strings
    char concatinat [50] = "My name is ";
    printf(strcpy(concatinat,"mario"));




    /*concatenate  strings
    char concatinat [50] = "My name is ";
    printf(strcat(concatinat,"mario"));
    */

      /**************************************************************************/
    /*
    char some = 'a' ;
    printf("%c this is to upper case in c",toupper(some) );
    */
      /**************************************************************************/

      /* user enters password - if contain upper letter and regular letter and number - he rocks
      else - this fool better enter stronger password


      char password[20] ;
      printf("Enter name: \n");
      scanf("%s", password);
      bool upper;
      bool lower;
      bool number;

      for(int i = 0;  password[i] != 0 ; i++){
          printf("%c char \n ", password[i]);

          if(password[i] >= 'a' && password[i] <= 'z'){
            lower = true;
            printf("33333333333333 \n");
          }else if( isdigit(password[i])){
            number = true;
            printf("22222222222 \n");
          }else if (password[i] >= 'A' && password[i] <= 'Z'){
            upper = true;
            printf("111111111111111 \n");
          }
      }
      if(upper && lower && number){
        printf("good job \n");
      }else{
        printf("you suck \n");
      }


      */







    /**************************************************************************/

    ///check if the letter is capital or not
    /*

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

    ///In c this is how you check is int/char are numbers or chars
    /*

    int number = '9';

    if ( isalpha(number) ){
            printf(" %c this is a number",number);
    }else if (isdigit(number)){
            printf(" %c this is a char",number);
    }
    */

    /**************************************************************************/
    /// This is how you check is a letter is from the abc
    /*
    int some = "a";

    if(!isalpha(some)){
        printf("it is abd");

    }else{
        printf("you dumb shit");
    }

    */



    /**************************************************************************/


    /*Shorten IF IN C

    (1 ==2) ? printf("Condition is true") : printf("Condition is false");



    /**************************************************************************/
    ///Replacing the array context
    /*
    char myName [] = "tamir" ;
    //In c this is how you replace something that inside array
    strcpy(myName,"lalal");
    printf("this is my name %s" , myName);
    */


    /**************************************************************************/
    return 0;
}
