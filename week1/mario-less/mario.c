#include <stdio.h> 

#include <cs50.h>

void triangle(int);

int main(void)
{
    int height;
    do {
    height = get_int("Height: ");
    }
    while(height < 0 || height > 8);
    triangle(height);
}


void triangle(int n) {
    int height = n-1;
    for(int row = 0; row < n; row ++)
    {
        for(int col= 0; col< n; col++) {

            if (col >= height)
            {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        height--;
        printf("\n");
    }

}