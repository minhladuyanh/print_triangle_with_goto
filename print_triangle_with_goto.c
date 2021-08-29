#include <stdio.h>

int main(){
    int row;
    printf("Input triangle high:");
    scanf("%d",&row);
    int i=row;
    int count = row;
    label:
    if(i==0){
        count = count*2+1;
        last:
        printf("*");
        count--;
        if(count==0)
            goto out;
        goto last;

    }else{
        sub:
            if(count==0){
                goto add;
            }
            if(count-- == (row-i)){
                printf("*");
                goto sub;
            }else{
            printf(" ");
            goto sub;
            }

        add:
            if(count==row){
                printf("\n");
                i--;
                goto label;
            }
            if(count++ == (row-i)){
                printf("*");
                goto add;
            }else{
            printf(" ");
            goto add;
            }
    }
    goto label;
    out:
    return 0;
}
