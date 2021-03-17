#include <stdio.h>

int main() {
    int n,result=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n == 0) {
        printf("0! = 1");
    }
    else {
        for(int i=1;i<=n;i++)
        {
            result = result*i;
        }
        printf("%d! = %d",n,result);
    }

    return 0;
}
