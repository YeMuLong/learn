#include <stdio.h>
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int a1 = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < a1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int b[5] = {6, 8, 9, 10, 4};
    int b1 = sizeof(b) / sizeof(b[0]);
    print_array(b, b1);
    return 0;
}
