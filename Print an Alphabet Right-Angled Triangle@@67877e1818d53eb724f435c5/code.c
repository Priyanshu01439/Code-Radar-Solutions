 #include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c ",j-1+'A');
        }
        printf("\n");
    }
    return 0;
}