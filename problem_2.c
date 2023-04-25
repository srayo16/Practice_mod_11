// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Input
// First line contains a number N (1  ≤  N  ≤  106) number of digits.

// Second line contains N digits (0 ≤ Ai ≤ 9).

// Output
// Print the summation of these digits.

#include <stdio.h>
#include <string.h>

int main()
{   
    
     int n;
     scanf("%d", &n);
    int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //    scanf("%d", &a[i]);
    // }
    scanf("%s", a);
    // printf("%s", a);
    int sum=0;

    for (int i = 0; i < n; i++)
    {
       sum= sum +a[i];
    }
    printf("%d", sum);
    

    return 0;
}