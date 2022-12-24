#include<stdio.h>
int main(){
    int number[25],i,even=0,positive=0,odd=0,negative=0,size;
    printf("Enter the size of an array");
    scanf("%d",&size);
    for (i=0;i<size;i++)
    {
        printf("Enter number[%d]= ",i);
        scanf("%d",&number[i]);
    }
    for (i=0;i<size;i++)
    {
        if (number[i]>0)
        {
            positive++/*=positive+1*/;
        }
        if (number[i]<0)
        {
            negative++/*=negative+1*/;
        }
        if (number[i]%2==0)
        {
            even++/*=even+1*/;
        }
        if (number[i]%2!=0)
        {
            odd++/*=odd+1*/;
        }
    }
        printf("positive is %d\n",positive);
        printf("negative is %d\n",negative);
        printf("even is %d\n",even);
        printf("odd is %d\n",odd);
return 0;
}
