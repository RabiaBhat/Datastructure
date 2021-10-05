#include <stdio.h>

int addElement(int *ptr, int size) {
    int total = 0;
    for(int i = 0; i <size; i++){
        total = total + ptr[i];
    }
    return total;
}


int main() {
    int arr[] = {2, 4, 6, 8};
    int size = sizeof arr / sizeof arr[0];
    int total = 0;
    total = addElement(arr, size);
    printf(" the sum of array = %d \n",total);
    return 0;
}
