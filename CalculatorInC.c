#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;
#include <math.h>;

int main (int argc, char *argv[])
{
    float val1, val2, answer;
    char operator;
   
    printf("Enter the first value: ");
    scanf("%f", &val1);
    printf("Enter the second value: ");
    scanf("%f", &val2);
    printf("Enter the operator: ");
    scanf(" %c", &operator);

    switch (operator)
        {

            case '/': answer = val1 / val2;
            break;
            case '*': answer = val1 * val2;
            break;
            case '+': answer = val1 + val2;
            break;
            case '-': answer = val1 - val2;
            break;
            case '^': answer = pow(val1, val2);
            break;
            case '%': answer = fmod(val1, val2);
            break;
            case ' ': answer = sqrt(val2);
            break;
            default: goto fail;

        }
    printf("%.9g%c%.9g =  %.6g\n\n",val1,operator,val2, answer);
    goto exit;
    fail:
    printf("Fail.\n");
    exit:
    return 0;
}
