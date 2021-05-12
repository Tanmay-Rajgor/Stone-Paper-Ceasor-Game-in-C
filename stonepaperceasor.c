#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int stonepaperceasor( char comp, char you)
{
    //this function will return 1 if you win, or if computer wins so it will return -1 or if match is draw then it will return 0.
    if (comp == you)
    {
        return 0;
    }
    if (comp =='s'&& you =='c')
    {
        return -1;
    }
    else{
        return 1;
    }

    if (comp == 's' && you == 'p')
    {
       return 1;
    }
    else{
        return -1;
    }

    if (comp =='p'&& you =='c')
    {
        return 1;
    }
    else{
        return -1;
    }

    if (comp == 'p' && you == 's')
    {
       return -1;
    }
    else{
        return 1;
    }
    if (comp =='c'&& you =='s')
    {
        return 1;
    }
    else{
        return -1;
    }

    if (comp == 'c' && you == 'p')
    {
       return -1;
    }
    else{
        return 1;
    }
    
}
int main()
{
    char comp, you;

    //random number generator.
    int number;
    srand(time(0));
    number = rand()%100 + 1;

    // if else condition to choose random input for computer.
    if (number<33){
        comp = 's';
    }
    else if (number>=33 && number<=66)
    {
        comp = 'p';
    }
    else{
        comp = 'c';
    }

    // you can choose your choice here. 
    printf("Enter 's' for stone, Enter 'p' for paper, Enter 'c' for ceaser.\n");
    scanf("%c", &you);

    int result  = stonepaperceasor(comp, you);

    printf("The result is %d\n", result);
    printf("***********************\n");


    if ( result == 0)
    {
        printf("Match Draw, Play Again.\n");
    }
    else if ( result == 1)
    {
        printf("Congratulations! You Won the Match\n");
    }
    else
    {
        printf("Sorry, Better Luck Next Time.\n");
    }
    
    printf("You chose %c and Computer chose %c", you, comp);
    return 0;
}