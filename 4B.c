#include <stdio.h>
int main()
{
int i,j,k;
int test[2][3][2];
printf("Enter 12 values: \n");
for (i = 0; i < 2; ++i)
{
for (int j = 0; j < 3; ++j)
{
for (int k = 0; k < 2; ++k)
{
scanf("%d", &test[i][j][k]);
}
}
}
printf("\nDisplaying values:\n");
for (i = 0; i < 2; ++i)
{
for(j = 0; j < 3; ++j)
{
for (k = 0; k < 2; ++k)
{
printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
}
}
}
return 0;
}
