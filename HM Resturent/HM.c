#include <stdio.h>

void bFast();
void Lunch();
void Dinner();
void Exit();

float Total;

int main ()
{
    char choice;

    printf("\n\t\t\tWelcome to HM Restuarent");
    printf("\n\t\t-----------------------------------------");

    printf("\n\t Please Select The Meal That You Would Like To Purchase. \n");
     printf("\t\t\t [A] Breakfast \n");
     printf("\t\t\t [B] Lunch \n");
     printf("\t\t\t [C] Dinner \n");
     printf("\t\t\t [D] Exit \n");

     printf("\n\tEnter Your Choice Here: ");
     scanf("%c",&choice);

     switch (choice)
     {
        case 'A':
        bFast();
        break;

        case 'B':
       Lunch();
        break;

        case 'C':
        Dinner();
        break;

        case 'D':
       Exit();
        break;

        default:
         printf("\n\tError! Invalid Value!\n\n");
     }
          
}

void bFast()
{
    int choice;
    int quantity;
    int again;

      printf("\n\t\t\t $ Breakfast Menu $ \n");
      printf("\n\t Please Select The Food That You Would Like To Purchase.\n");
     printf("\t\t\t [1] Sausage Bun - Rs 25.00 \n");
     printf("\t\t\t [2] Sandwich    - Rs 50.00 \n");
     printf("\t\t\t [3] Cup Noddles - Rs 100.00 \n");

     printf("\n\tEnter Your Choice Here: ");
     scanf("%d",&choice);
     
     if(choice==1)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(25*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                bFast();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\tSorry Invalid Decision Entered\n");
                        Exit();
                      }
                


     }

     else if (choice==2)
        {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
        Total= Total+(50*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                bFast();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\tSorry Invalid Decision Entered\n");
                        
                      }
     }

     else if(choice==3)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(100*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                bFast();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\tSorry Invalid Decision Entered\n");
                        Exit();
                      }
       }

     else
     {
        if((choice!=1)||(choice!=2)||(choice!=3))
        {
            printf("\n\tInvalid Choice Entered\n\n\n");
           
        }
     }                  
 
}


void Lunch()
{
    int choice;
    int quantity;
    int again;

      printf("\n\t\t\t $ Lunch Menu $ \n");
      printf("\n\t Please Select The Food That You Would Like To Purchase.\n");
     printf("\t\t\t [1] Red rice And Curry - Rs 200.00 \n");
     printf("\t\t\t [2] Fried Rice         - Rs 300.00 \n");
     printf("\t\t\t [3] Biryani            - Rs 400.00 \n");

     printf("\n\tEnter Your Choice Here: ");
     scanf("%d",&choice);
     
     if(choice==1)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(200*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Lunch();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\tSorry Invalid Decision Entered\n");
                        Exit();
                      }
                


     }

     else if (choice==2)
        {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
        Total= Total+(300*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Lunch();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                       printf("\n\tSorry Invalid Decision Entered\n");
                        
                      }
     }

     else if(choice==3)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(400*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Lunch();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\tSorry Invalid Decision Entered\n");
                        Exit();
                      }
       }

     else
     {
        if((choice!=1)||(choice!=2)||(choice!=3))
        {
            printf("\n\tInvalid Choice Entered\n");
            Exit();
           
        }
     }                  
 
}

void Dinner()
{
    int choice;
    int quantity;
    int again;

     printf("\n\t\t\t $ Dinner Menu $ \n");
     printf("\n\t Please Select The Food That You Would Like To Purchase.\n");
     printf("\t\t\t [1] Cup Of Chicken Soup    - Rs 150.00 \n");
     printf("\t\t\t [2] Cup Of Spicy Macaroni  - Rs 200.00 \n");
     printf("\t\t\t [3] Kottu                  - Rs 500.00 \n");

     printf("\n\tEnter Your Choice Here: ");
     scanf("%d",&choice);
     
     if(choice==1)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(150*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Dinner();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\t Sorry Invalid Decision Entered\n");
                        Exit();
                      }
                


     }

     else if (choice==2)
        {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
        Total= Total+(200*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Dinner();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\t Sorry Invalid Decision Entered\n");
                        
                      }
     }

     else if(choice==3)
     {
        printf("\tEnter Quantity: ");
        scanf("%d",&quantity);
         
         Total= Total+(500*quantity);
         printf("\tYour Total Amount is Rs %.2f\n",Total);
         printf("\n\tWould You Like To Buy Anything Else? [1] Yes, [2] No: ");
         scanf("%d",&again);
              if(again==1)
                Dinner();
              else
                  if(again==2)
                   Exit();

                   else 
                      if((again!=1)|| (again!=2))
                      {
                        printf("\n\t Sorry Invalid Decision Entered\n");
                        Exit();
                      }
       }

     else
     {
        if((choice!=1)||(choice!=2)||(choice!=3))
        {
            printf("\n\t Invalid Choice Entered\n");
           
        }
     }                  
 
}

void Exit()
{
    printf("\n\n\tTotal is Rs %.2f",Total);
    printf("\n\n\t\t\t Thank You Very Much");
    printf("\n\t\t +=====================================+");
    printf("\n\t\t\t Please Come Again.\n\n");
}