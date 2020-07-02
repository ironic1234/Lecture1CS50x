#include <cs50.h>
#include <stdio.h>

void cough(int n);

int main(void)
{
    cough(67);
}

void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Cough\n");
    }
}