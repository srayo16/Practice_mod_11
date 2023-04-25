// Given two strings X and Y . Print the smallest lexicographical one.

// Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

// Input
// Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

// Output
// Print the smallest lexicographical string.

#include <stdio.h>
#include <string.h>

int main()
{   
    
     char x[20],y[20];
    scanf("%s %s", x, y);

    for (int i = 0; ; i++)
    {
        if(x[i] == y[i]){
            continue;
        }
        else if(x[i] == ' ' || x[i]== '\0'){
            printf("%s", x);
            break;
        }
        else if(y[i] == ' ' || y[i]== '\0'){
            printf("%s", y);
            break;
        }
        else if(x[i] != y[i]){
            if(x[i] < y[i]){
             printf("%s", x);
             break;
            }
            else if(x[i] > y[i]){
            printf("%s", y);
            break;
            }
        }
    }
        

    // printf("%s %s", x,y);
     

    return 0;
}