#include<stdio.h>

int main(){
    int a=2;
    int i;
    int arr[7];

    for(i=0; i<7;i++){
        int p = 1 << i;
        // printf("%d", a & p ? 1:0);
        if(a & p) {
            printf("%d", 1);
            arr[i] = 1;
        }
        else {
            printf("%d", 0);
            arr[i] = 0;
        }
    }
    printf("\n");
    for(i = 6; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}