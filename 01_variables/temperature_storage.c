#include <stdio.h>

int main(void)
{
    int whole_degrees;      /* e.g. 25 */
    float precise_temp;     /* e.g. 25.73 */
    char unit;              /* 'C' or 'F' */

    /* Assign example values */
    whole_degrees = 25;
    precise_temp = 25.73f;
    unit = 'C';

    /* Print them in one formatted sentence */
    printf("Temperature: %d degrees (%.2f %c)\n", whole_degrees, precise_temp, unit);

    return 0;
}
