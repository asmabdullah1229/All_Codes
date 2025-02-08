#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique numbers in the array are: \n");
    
    
    for (int i = 0; i < n; i++) {
        int d = 0;
        
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                d = 1;
                break;
            }
        }
        
        
        if (d == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
