#include <stdio.h>

int main()
{
    int n; int arr[n];
    int sum = 0;

    printf("no of elements: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("Sum of elements: %d\n",sum);
}
