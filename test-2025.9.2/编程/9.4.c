#include <stdio.h>
void paixu(int arr[],int n);
int main(){
    int n;
    printf("��������������");
    scanf("%d",&n);
    int arr[n];
    printf("���������������֣������м��Կո����");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    paixu(arr,n);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
    return 0;
}
void paixu(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}