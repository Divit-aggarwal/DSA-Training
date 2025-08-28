
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
    printf("Please enter the index position where u want to insert the new element");
    int x=0;
    int num=0;
    scanf("%d",&x);
    printf("Enter the element");
    scanf("%d",&num);
       
    if (x>n){
        printf("Index is not availaible");
        return 0 ;

    }
    else{
        printf("you choose %d position for your insertion\n",x);
        int y = n+1;
        n+=1;
        arr[n];
        for ( int i = n-1 ; i >= x; i--){
            arr[i+1]=arr[i];
        }
        arr[x]=num;

        
       for ( int i=0 ; i<y; i++){
            printf("%d\n",arr[i]);
       }
    }     
    return 0;

}