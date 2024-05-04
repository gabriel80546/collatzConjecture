#include<stdio.h>
#include<stdlib.h>

int max = 1000000;
int inicial = 1;

void collatz(int x) {
    inicial++;
    if(inicial >= max) {
        exit(1);
    }
	printf("%d ", x);
	if (x <= 1)
		return;
	else if (x % 2 == 0)
		collatz(x/2);
	else
		collatz(3*x+1);
}


int main() {
    printf("-Collatz Conjecture-\n");
    int i;

    for (i = 1; i < 20; i++) {
        printf("collatz(%i) = ", i);
        collatz(i);
        printf("\n");
    }

    /*
    printf("\n\n.\n.\n\n\n");
    for (i = 0; i < 20; i++) {
        printf("collatz(%i) = ", -i);
        collatz(-i);
        printf("\n");
    }
    */
    return 0;
}
