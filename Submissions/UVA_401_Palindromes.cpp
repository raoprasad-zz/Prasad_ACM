#include <stdio.h>
#include <string.h>
using namespace std;

bool IsPalindrome(char* word)
{
    int len = strlen(word)/2;
    char* temp = word + strlen(word) - 1;

    for(int id = 0; id < len; id++)
    {
       if(*(temp - id) != *(word + id))
       {
           return false;
       }
    }

    return true;
}

bool AreCharsMirror(char first, char second)
{
   switch(first)
   {
        case 'A':
            if(second == 'A') return true;
            break;
        case 'E':
            if(second == '3') return true;
            break;
        case '3':
            if(second == 'E') return true;
            break;
        case 'H':
            if(second == 'H') return true;
            break;
        case 'I':
            if(second == 'I') return true;
            break;
        case 'J':
            if(second == 'L') return true;
            break;
        case 'L':
            if(second == 'J') return true;
            break;
        case 'M':
            if(second == 'M') return true;
            break;
        case 'O':
            if(second == 'O') return true;
            break;
        case 'S':
            if(second == '2') return true;
            break;
        case '2':
            if(second == 'S') return true;
            break;
        case 'T':
            if(second == 'T') return true;
            break;
        case 'U':
            if(second == 'U') return true;
            break;
        case 'V':
            if(second == 'V') return true;
            break;
        case 'W':
            if(second == 'W') return true;
            break;
        case 'X':
            if(second == 'X') return true;
            break;
        case 'Y':
            if(second == 'Y') return true;
            break;
        case 'Z':
            if(second == '5') return true;
            break;
        case '5':
            if(second == 'Z') return true;
        case '1':
            if(second == '1') return true;
            break;
        case '8':
            if(second == '8') return true;
            break;
   }

   return false;
}

bool IsMirror(char* word)
{
    int wordLen = strlen(word);
    int len = wordLen/2;
    char* temp = word + strlen(word) - 1;

    for(int id = 0; id < len; id++)
    {
       if(!AreCharsMirror(*(temp - id), *(word + id)))
       {
           return false;
       }
    }

    if(wordLen%2 != 0)
    {
       if(!AreCharsMirror(*(temp - len), *(word + len)))
       {
           return false;
       }
    }
    return true;
}

int main()
{
    char word[20];

    while(scanf("%s", word) > 0)
    {
        bool isPalindrome = IsPalindrome(word);
        bool isMirror = IsMirror(word);

        printf("%s -- ", word);
        if(!isPalindrome && !isMirror)
        {
            printf("%s", "is not a palindrome.");
        }
        else if(isPalindrome && !isMirror)
        {
            printf("%s", "is a regular palindrome.");
        }
        else if(!isPalindrome && isMirror)
        {
            printf("%s", "is a mirrored string.");
        }
        else if(isPalindrome && isMirror)
        {
            printf("%s", "is a mirrored palindrome.");
        }
        printf("\n");
        printf("\n");
    }
}
