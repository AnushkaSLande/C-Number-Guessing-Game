# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main()
{
    srand(time(0));
 
    int randomNumber =(rand () % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    do
    {
       printf ("Guess the number");
       scanf("%d",& guessed_number);
       if(guessed_number>randomNumber)
       {
        printf("lower number please !\n ");

       }
       else if(guessed_number<randomNumber)
       {
        printf("higher number please!\n");
       }
       else{
        printf("congrats!\n");
       }
        no_of_guesses++;

    } while (guessed_number != randomNumber);
      
    printf("you guessed the number in %d guesses",no_of_guesses);
    return 0;



}
