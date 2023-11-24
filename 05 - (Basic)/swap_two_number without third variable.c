#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter a two number\n");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d after swapping\n", a);
    printf("%d after swapping\n", b);

    // Swap twp number without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping%d\n%d\n", a, b);
}
