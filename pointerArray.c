#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;
    

    ptr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        *(ptr+i)=i;
    }
    for(int i=0;i<n;i++){
        printf("%d--------------%d\n",*(ptr+i),ptr+i);
    }
}