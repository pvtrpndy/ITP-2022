//Sorting arrays into ascending or descending order, and printing the odd and even elements separately.

#include <stdio.h>
int main(){
    printf("Enter the number of elements to sort\n");
    int n; 
    scanf("%d", &n); 
    int a[n]; 
    printf("\nEnter the elements to sort\n");
    for(int i=0; i<=n-1; i++){
        scanf("%d", &a[i]);
    }
    //Sorting elements of the array
    int count = 0,c;
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<=n-i-1; j++){
            if(a[j]>a[j+1]){
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
                count=1;
            }   
        }
        if(count == 0) break;
        count = 0;
    }
    //Printing sorted array in ascending order
    printf("\nSorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    //Printing even elements of array separately
    printf("\nSorted array with even numbers is: ");
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            printf("%d ",a[i]);
        }
    }
    //Printing odd elements of array separately
    printf("\nSorted array with odd numbers is: ");
    for(int i=0; i<n; i++){
        if(a[i]%2 == 1){
            printf("%d ",a[i]);
        }
    }
    //Printing sorted array in descending order
    printf("\nSorted array in descending order is: ");
    for(int i=n-1; i>=0; i--){
        printf("%d ",a[i]);
    }
    return 0;
}
