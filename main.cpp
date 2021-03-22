

#include "mbed.h"
#include <math.h>


BusOut saida(D9,D8,D7,D6,D5,D4,D3,D2);

int i;

float  valor ;

float  sen;

#define pi 3.14159265359f

#define f 5

#define a 0.356f
#define b 0.356f


int main()
{


    while(1) {

        for (int i=0; i <362; i++) {

            sen = a*sin(i*(pi/180)*f)+b;

            int n = (int) (sen*255);

            saida =  n;

            wait_ms(3.2);
        }
    }
}

