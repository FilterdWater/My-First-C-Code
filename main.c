#include <stdio.h>

int main()
{
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency[] = "€"; // char stores 1 byte, € is 3 bytes, therefore a string was used instead
    char name[] = "FilterdWater";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%s\n", currency);
    printf("%s\n", name);

    float price1 = 10.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}
