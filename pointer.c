#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // p mein n ka address store hai

    // p ko print karne se address milega
    printf("Address (p ki value): %p\n", p);

    // *p ko print karne se us address par rakhi value milegi
    printf("Value at address (*p ki value): %d\n", *p);

    return 0;
}