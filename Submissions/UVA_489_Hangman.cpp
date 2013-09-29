#include<stdio.h>
#include<cstring>
using namespace std;

char* Hangman(char* solution, char* guesses)
{
    int copyOfGuesses = guesses;

    while(*guesses != '\0')
    {
        /*Has currentGuess been accounted for.*/
        strchr(guesses, *guesses)
        /*Is the current guess present in the solution. What is the count of occurance.*/
        guesses++;
    }

    return "";
}
int main()
{
    int round = 0;
    while(true)
    {
        scanf("%d", &round);

        if(round <= 0)
        {
            break;
        }
        char* solution = new char[256];
        scanf("%s", solution);

        char* guesses = new char[256];
        scanf("%s", guesses);

        printf("Round %d\n", round);
        printf("%s\n", Hangman(solution, guesses));

        delete solution;
        delete guesses;
    }

}
