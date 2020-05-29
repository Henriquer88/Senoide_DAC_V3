
*/
#include "mbed.h"
#include <math.h>

BusOut Bus(D5,D6,D7);
AnalogIn Ain (A0);
int i;
float  valor ;
float  seno;
#define pi 3.141592

Serial pc (USBTX,USBRX);



int main()
{
    while(1) {
        for (int i=0; i < 361; i++) {

            valor  = 3.3 * Ain.read();

            seno = 0.5*sin(i*(3.14/180.0))+0.5;

            int n = (int) (seno*7);

            Bus = n;

            pc.printf("\r\t%1.3f\n",valor);
            wait(0.0001);


        }
    }
}

