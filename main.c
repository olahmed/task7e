/**
 ******************************************************************************
 * @file           : task 7
 * @author         : ola ahmed
 * @brief          : Array
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declarations Section Start ************* */

/* ********************** Global Declarations  Section End   ************ */

/* ********************** Sub-Program Declarations Section Start ******* *///functions

/* ********************** Sub-Program Declarations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    int i;
    char str[100];
    printf("please enter your name\n");
    gets(str);
    for(i=0;i<=100;i++)
    {
         while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0'))
         {
         str[i]=' ' ;
         printf("%c",str[i]);
         }
    }

    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      29 feb 2024           num4
*/
