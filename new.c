#include<stdio.h>
int main()
    {
        int a=20, b=60, c;
        printf("hello world\n");
        
        c = b - a;
        printf("The value of b - a\n");
        printf("%d\n\n",c);
        
        c = b + a;
        printf("The value of b + a\n");
        printf("%d\n\n",c);

        c = b * a;
        printf("The value of b * a\n");
        printf("%d\n\n",c);

        c = b / a;
        printf("The value of b / a\n");
        printf("%d",c);
        return 0;
    }
