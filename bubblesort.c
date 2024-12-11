#include<stdio.h>
int main() {
    int Arr[] = {43,45,98,23,21,5,1,8,2,6,77,18,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int i,j,s;

    printf("Before Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    for(i = 0;i < n;i++) {
        for(j = i+1;j < n;j++) {
            if(Arr[i] > Arr[j]) {
                s = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = s;
            }
        }
    }

    printf("After Sort:\n");
    for(i = 0;i < n;i++) {
        printf("%d ",Arr[i]);
    }
    printf("\n");

    return 0;
}