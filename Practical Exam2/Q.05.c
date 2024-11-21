#include <stdio.h>
 int i , n ;

void Cube(n) {
    for (i = 1; i <= n; i++) 
	{
        printf("CUBE OF  %d = %d\n", i , i* i * i);
    }
}

int main() {
    int num;

    printf("ENTER A NUMBER TO PRINT THE CUBE TABLE: ");
    scanf("%d", &num);

    Cube(num);

    return 0;
}

