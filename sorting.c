#include <stdio.h>

int main(){
    int len,ch;
    printf("Enter length of array: \t");
    scanf("%d",&len);
    int arr[len];

    for (int i=0;i<len;i++){
        printf("Enter for %d\t",i);
        scanf("%d",&arr[i]);
    }

    printf("\n");

    printf("P r i n t i n g before sorting.\n");
//printing
    for (int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");

//menu
    printf("Enter choice from 1/2/3\n");
    printf("1.BubbleSort\n");
    printf("2.Selection Sort\n");
    printf("2.Insertion Sort\n");
    scanf("%d",&ch);
    
    if (ch==1){
        int i,j,temp;
        for (i=0;i<len-1;i++){
            for (j=0;j<len-i-1;j++){
                if (arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    printf("P r i n t i n g after sorting.\n");
//printing
    for (int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");

    }
    else if(ch==2){
        int min;
        for (int i=0;i<len-1;i++){
            min=i;
            for (int j=i+1;j<len;j++){
                if (arr[j]<arr[min]){
                    min=j;
                    int temp=arr[min];
                    arr[min]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        printf("P r i n t i n g after sorting.\n");
//printing
    for (int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
    }
    else{
        int i,j,key;
        for (i=1;i<len;i++){
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
//printing
    for (int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
        }
    }
    
