#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int dia, hora, min, seg;
    for(dia = 0; dia < 30; dia++)
    {
        for(hora = 0; hora < 24; hora++)
        {
            for(min = 0; min < 60; min++)
            {
                for(seg = 0; seg < 60; seg++)
                {
                    printf("\r%2d:%2d:%2d:%2d", dia, hora, min, seg);
                    sleep(0.1);
                }
            }
        }
    }
}
