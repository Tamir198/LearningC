/*Those thing that start with # are called preprocessor directive,
 you don`t need ; at the end of any of them*/

#include <stdio.h> //standard  input output
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "tamirInfo.h"
#include "header.h"


#define Name "this is the value" /*search the program got anything called Name and replace them with value
 printf("This will print the value of #define Name  %s" , Name);
 In c all of this process is made before compilation time
 */



int main()
{
    /**************************************************************************/
     ///Structure

    struct user tamir;
    tamir.userAge = 5;
    printf("%d  hey",tamir.userAge);

    /**************************************************************************/
    ///Handling memory - using malloc() method

    /*

    int * points;

    ///allocate memory equal to int * 5

    points = (int *) malloc(5 * sizeof(int));

    ///give back the memory that I took from the heap

    free(points);

    */


    /**************************************************************************/

    ///string and  lengths of them:

    //How to only accept XX number or chars from the user and the rest will get cut off and not go in the program

    /*

    char someString [20];
    char * pSomeString = someString;

    fgets(pSomeString,20,stdin);
    //fgets(where to store it,max chars,input type stdin for key board);
    puts(pSomeString);

    */
    /**************************************************************************/


    ///Pointers intro:

    /*

    int age = 9;

    //%p for pointer I want to print the memory address
    //& - to go when your something is - &age -> go to where your age is saved on your memory.
    printf("%p \n",&age );

    //creating pointer:
    int * pAge = &age;
    printf("%p this \n",pAge);//prints the memory address

    //de-referenc a pointer

    //go to the variable that pAge points to and gets the value of it
    printf("*pAge value is %d \n",*pAge);

    */

    ///arrays and pointers aka: "there is no god at this point(er)"


    /*
    int array [5] = {56,48,321,4,126};
    int i;

    for(i=0 ; i<5 ; i++){
        printf("in \t array[%d] \t the memory address  %p \t the value %d \n" ,i,&array[i],array[i]);
    }

     /// with arrays you don`t have to use & before :
     ///it will just give you pointer to the first element of the array

     printf("check my array pointer %p \n",array);


     printf("check my dereferenced array pointer %d \n",*array);


     */


     /*
     ///You can NOT change the array like this ->[string = "some"] because the name of the array is constant
     ///BUT you can change the value of it with pointers
     char string [] = "some thing is real";
     puts(string);
     char * pString = "this is pointer to array";
     puts(pString);
     pString = "look how this value is changing";
     puts(pString);

     */



    /**************************************************************************/
    ///Messing with math
    /*

    printf("Dice roll 1-6... %d \n" , (rand()%6) + 1 ); //generates random number with custom range 1-6
    printf("Rundom number... %d \n" , rand()); //generates random number


    printf("%f is the square root of 64 ", sqrt(64));
    printf("%f is the hezka (5^3 = 5*5*5) of 5^3 %d \n",pow(5,3));
    //absolute  value abs()
    printf("this is absolute value of %d \n",abs(3-9));


    float someFloat = 5.4564;
    printf("%.2f rounding to bottom is \n",floor(someFloat));
    printf("%.2f rounding up is \n",ceil(someFloat));

    */

    /**************************************************************************/
    ///gets and puts
    /*
    char someString[50] = "aaaa";
    puts("this is like  scanf but with new line at the end by default");
    puts(someString);
    gets(someString); //get string from user
    puts(someString); // print it

    */

    /**************************************************************************/
    ///String manipulations in c

     ///replace strings
    /*
    char concatinat [50] = "My name is ";
    printf(strcpy(concatinat,"mario")); //replace My name is with mario
    */

     ///concatenate  strings
    /*
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
