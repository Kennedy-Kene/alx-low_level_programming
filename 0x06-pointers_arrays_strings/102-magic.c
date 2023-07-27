#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98; /*This line modifies a[2] indirectly through the pointer p*/

printf("a[2] = %d\n", a[2]);

/*Additional line to print a[2] = 98, followed by a new line*/
printf("a[2] = %d\n", *(p + 5));

return (0);
}

