#include<Stdio.h>
#include<stdlib.h>
struct data{
    int used_size;
    int total_size;
    int* ptr;
};
void createArray(struct data* b,int usize,int tsize){
    b->used_size = usize;
    b->total_size = tsize;
    b->ptr = (int*)malloc(tsize*sizeof(int));
}
void addValue(struct data* b,int usize){
    int n;
    for(int i=1;i<=usize;i++){
        printf("Enter %dth element:",i);
        scanf("%d",&n);
        b->ptr[i] = n;
    }
}
void show(struct data* b,int usize){
    for(int i=1;i<=usize;i++){
        printf("%dth element:%d\n",i,b->ptr[i]);
    }
}
int main()
{
    struct data a;
    createArray(&a,10,20);
    addValue(&a,10);
    show(&a,10);
    printf("\n");
    return 0;
}