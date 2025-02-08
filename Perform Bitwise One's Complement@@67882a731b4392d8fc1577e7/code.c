#include <stdio.h>
int main() {
    int a,complement;
    scanf("%U",&a);
    complement =~a;
    printf("%d",complement);
    return 0;
}