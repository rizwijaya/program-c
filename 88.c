#include<stdio.h>

int main ()
{
    char a;
    float x;
    printf("Masukkan Suhu = ");
    scanf("%f %c", &x, &a); //masukkan suhu dan char tanda suhu
    if(a=='c') //jika dari celcius
        printf("%f Reamur %f Fahrenheit %f Kelvin", 0.8*x, (1.8*x)+32, x+273);
    if(a=='r') //jika dari reamur
        printf("%f Celcius %f Fahrenheit %f Kelvin", 1.25*x, (2.25*x)+32, (1.25*
                x)+273);
    if(a=='f') //jika dari fahrenheit
        printf("%lf Celcius %lf Reamur %lf Kelvin", 0.56*(x-32), 0.44*(x-32), (0.
                56*(x-32))+273);
    if(a=='k') //jika kelvin
        printf("%lf Celcius %lf Reamur %lf Fahrenheit", x-273, (0.8)*(x-273), (1.
                8)*(x-273)+32);
}
