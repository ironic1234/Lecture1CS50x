#include <cs50.h>
#include <stdio.h>

void cough(void)
{
    printf("Cough\n");
}

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}