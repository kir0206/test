#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARG_COUNT 4

int main(const int argc, const char *argv[]) {
   float sign1, first1,  second2;
    if (ARG_COUNT > argc) {
        printf("Input sign:\n");
        scanf("%f", &sign1);
        printf("Input x:\n");
        scanf("%f", &first1);
        printf("Input y:\n");
    scanf("%f", &second2);
    
    }//кусок кода для тестов
    else if (argc == ARG_COUNT)
    {
    const float sign = atof(argv[1]);
    const float first = atof(argv[2]);
    const float second = atof(argv[3]);
    sign1=sign;
    first1=first;
    second2=second;
    }

if (sign1 == 1)
{
printf("The result is: %f\n", first1 + second2);
}
else if (sign1 == 2)
{
   printf("The result is: %f\n", first1 - second2);
}
else if (sign1 == 3)
{
   printf("The result is: %f\n", first1 * second2);
}
else if (sign1 == 4)
{
   if (second2 != 0)
                {printf("The result is: %f\n", first1 / second2);
                }

               else printf("Error\n");
         }

   

    return EXIT_SUCCESS;
    getchar();
}