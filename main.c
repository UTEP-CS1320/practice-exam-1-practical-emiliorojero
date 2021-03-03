/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1\n 2 to test P2\n 3 to test P3: \n");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int y;
    int z;
    int r1;
    int r2;


  printf("Enter y: \n");
  scanf("%d", &y);

  printf("Enter z: \n");
  scanf("%d", &z);


    r1 = y%100;
    r2 = z%100;

    if(r1 == r2) {
      printf("TRUE");
    }
    else { 
      printf("FALSE");
    }
    /* Problem 1 End */
  }
   else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = "7239";
    char ticket[5];

    printf("Enter your ticket number: \n");
    scanf("%s", ticket);
    
    // TODO: Your P2 code goes here
    if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
      printf("1st Prize!\n");
    }
    else if((ticket[0] == winner[0]) || (ticket[1] == winner[1])) {
      if ((ticket[0] == winner[0]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) || (ticket[1] == winner[1])) {
      if ((ticket[0] == winner[0]) && (ticket[1] == winner[1])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
    } 
    else if((ticket[0] == winner[0]) || (ticket[2] == winner[2])) {
      if ((ticket[0] == winner[0]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) || (ticket[1] == winner[1])) {
      if ((ticket[0] == winner[0]) && (ticket[1] == winner[1])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
    } 
    else if((ticket[0] == winner[0]) || (ticket[3] == winner[3])) {
      if ((ticket[0] == winner[0]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("2nd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) || (ticket[1] == winner[1])) {
      if ((ticket[0] == winner[0]) && (ticket[1] == winner[1])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[0] == winner[0]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[2] == winner[2])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[1] == winner[1]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
      else if ((ticket[2] == winner[2]) && (ticket[3] == winner[3])) {
        printf("3rd Prize!\n");
      }
    } 
    else {
      printf("No Prize! Better luck next time!\n");
    }
    }
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);

    //TODO: Your P3 code goes here
    
    /* Problem 3 End */
  }
}
