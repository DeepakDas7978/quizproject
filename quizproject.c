#include <stdio.h>    
int main()
{
     int i,a;
     char name[200];        // player name
     printf("\t\t\t\t -: ENTER A NUMBER :- \n\n");
     printf("\t\t\t \n 1. START THE QUIZ : \t\t\t \n 0. QUIT THE QUIZ : \t\t\n ");
     scanf(" %d",&i);  
 switch (i)
 { 
     case 1: 
       printf(" \n \t\t\t ENTER YOUR NAME   ");
       scanf(" %s",&name);
       printf("\n\t\t\t PLAYER NAME IS %s",name);
       printf("\n\n\t\t\t [ SELECT AND ENTER THE ANSWER NO. ]");
       printf("\n\n\t\t Q1.WHAT IS THE CAPITAL OF THE INDIA ?\n");
       printf("\n\t\t 1. DELHI \n\t\t 2.MUMBAI\n\t");
       scanf(" %d",&a);
       if (a==1)         
            printf(" \n\n\t\t COREECT !!!");
       else if (a==2)     
            printf("\n\t\t Oops WRONG !!!");
       else          
            printf("\n\t\t INVALID !!! ");
    
    case 2:
      printf("\n\n\n\t Q2. Which is the longest River in the world?\n");
      printf("\n\t\t 1.Nile\n\t\t 2.Amazon\n\n\t");
      scanf("%d",&a);
      if (a==1)
           printf("\n\n\t\t CORRECT!!!");
      else if(a==2)
        printf("\n\t\t Oops WRONG!!!");
      else
        printf("\n\t\t INVALID!!!");

    case 3:
      printf("\n\n\n\t Q3. How many bytes are in int data type?\n");
      printf("\n\t\t 1. 8 byte \n\t\t 2. 4 byte\n\n\t");
      scanf("%d",&a);
      if (a==1)
        printf("\n\n\t\t Oops WRONG!!!");
      else if (a==2)
        printf("\n\t\t CORRECT!!!");
      else 
        printf("\n\t\t INVALID!!!");
    case 4:
      printf("\n\n\n\t Q4. Which data structure is used to handle recursion in c?\n");
      printf ("\n\t\t 1.Stack \n\t\t 2.Trees\n\n\t");
      scanf("%d",&a);
      if (a==1)
           printf("\n\n\t\t CORRECT!!!");
      else if (a==2)
        printf("\n\t\t Oops WRONG!!!");
      else
        printf("\n\t\t INVALID!!!");
    case 5:
      printf("\n\n\n\t Q5. Who invented Computer?\n");
      printf("\n\t\t 1.Charles Babbage \n\t\t 2.Dennis M. Ritchie \n\n\t");
      scanf("%d",&a);
      if (a==1)
           printf("\n\n\t\t CORRECT!!!");
      else if (a==2)
        printf("\n\t\t Oops WRONG!!!");
      else 
        printf("\n\t\t INVALID!!!");
    case 6:
      printf("\n\n\n\t Q6. When is International Yoga Day celebrated?\n");
      printf("\n\t\t 1.March 21 \n\t\t 2.June 21 \n\n\t");
      scanf("%d",&a);
      if (a==2)
           printf("\n\n\t\t CORRECT!!!");
      else if (a==1)
        printf("\n\t\t Oops WRONG!!!");
      else
        printf("\n\t\t INVALID!!!");
      case 7:
      printf("\n\n\n\t Q7.Who is popularly known as the Iron Man of India?\n");
      printf("\n\t\t 1.Dr.APJ Abdul Kalam\n\t\t 2.Sardar Patel \n\n\t");
      scanf("%d",&a);
      if (a==2)
           printf("\n\n\t\t CORRECT!!!");
      else if (a==1)
        printf("\n\t\t Oops WRONG!!!");
      else
        printf("\n\t\t INVALID!!!");
      break;
    }
 return 0; 
  }