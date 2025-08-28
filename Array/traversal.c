
#include <stdio.h>

int main() {
    int n = 0 ;
    
    printf("Please enter size oF ARRAY ");
    scanf("%d",&n);
    int arr[n];
    for ( int i=0 ; i<n; i++){
        printf("please enter elements ");
        scanf("%d",&arr[i]);
    }
     for ( int i=0 ; i<n; i++){
         printf("%d\n",arr[i]);
}
    return 0;
}