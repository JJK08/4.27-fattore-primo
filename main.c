#include <stdio.h>

int main() {
    int n;
    int i;
    printf("inserisci il numero intero: ");
    scanf("%d",n);
    if(n<=1) {
        printf("il numero deve essere maggiore di 1\n");
    }
    printf("la scomposizione in fattori primi di %d e' : ",n);
    for(i=2;i*i<=n;i++) {
        while(n%i==0) {
            printf("%d",n);
            n/=1;
        }
    }
    if(n>1) {
        printf("%d",n);
    }
    return 0;
}
