
#include <stdio.h>

int main() {
    int n = 0 ;
    
    printf("Please enter size oF ARRAY ");
    scanf("%d",&n);
    int arr[n];
    printf("please enter elements\n ");
    for ( int i=0 ; i<n; i++){
        
        scanf("%d",&arr[i]);
    }
    printf("Please enter the element to be deleted :-");
    int num=0;
    scanf("%d",&num);
    int y = 0;
    for ( int i=0 ; i<n; i++){
        if(arr[i]==num){
            for(int j = i ; i<n-1; i ++ ){
                arr[i]=arr[i+1];
            } 
            break;
        }
    }
    for ( int i=0 ; i<n-1; i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}