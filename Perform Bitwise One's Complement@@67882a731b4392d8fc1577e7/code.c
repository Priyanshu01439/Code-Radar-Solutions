#include <stdio.h>
int main() {
    int a,complement;
    scanf("%d",&a);
    complement =~a;
    printf("%d",complement);
    return 0;
}