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

     for(int i=0;i<x;i++){
        a[n+i]=b[i];
     }

     //printf("The merged array is :");
     for(int i=0;i<(n+x);i++){
        //printf("%d",a[i]);
     }


      for(int i=0;i<(n+x);i++){
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
    for(int i=0;i<(n+x);i++){
        if(a[i]!=a[i+1]){
        a[y++]=a[i];
    }     
          
    }
       
       
    printf("\nUnion pf two arrays is :");
    for(int i=0;i<y;i++){
         printf("\n%d",a[i]);
    }

     

     return 0;

}