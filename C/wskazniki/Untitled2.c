#include <stdio.h>

int main(){

    int n;
    scanf(" %d", &n);

    int array[n];

    for(int i=0; i<n; i++){
        array[i] = i;
    }

    for(int i=0; i<n; i++){
        printf(" %d", array[i]);
    }

    return 0;
}
