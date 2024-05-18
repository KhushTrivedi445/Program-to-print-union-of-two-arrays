#include<stdio.h>

int main () {
    int n,x;
    printf("Enter the size of first array :");
    scanf("%d",&n);

    printf("Enter the size of second array :");
    scanf("%d",&x);

    int a[n];
    int b[x];

     printf("Enter first array :");
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
     }

     printf("Enter second array :");
     for(int i=0;i<x;i++){
        scanf("%d",&b[i]);
     }

     for(int i=0;i<x;i++){  // This loop merges two arrays
        a[n+i]=b[i];
     }

     //printf("The merged array is :");
     for(int i=0;i<(n+x);i++){
        //printf("%d",a[i]);
     }


      for(int i=0;i<(n+x);i++){   // This loop sorts the merged array
        for(int j=i+1;j<(n+x);j++) {
            if(a[i]>a[j]){
                
               int c=a[i];
                a[i]=a[j];
                a[j]=c;
                                
            }
            
        }
    }
   //printf("\nThe sorted array is :");
   for(int i=0;i<(n+x);i++){
    //printf("%d",a[i]);
   }


   int y=0;
    for(int i=0;i<(n+x);i++){    // This loop removes duplicates from the sorted array
        if(a[i]!=a[i+1]){
        a[y++]=a[i];
    }     
          
    }
       
       
    printf("\nUnion pf two arrays is :");
    for(int i=0;i<y;i++){    // This loop gives the union of two arrays
         printf("\n%d",a[i]);
    }

     

     return 0;

}
