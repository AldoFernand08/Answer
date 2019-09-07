
#include <stdio.h>

int main()
{
    int total,bayar,kembalian,pecahan;
    int uang[7];
    uang[0]=500;
    uang[1]=1000;
    uang[2]=2000;
    uang[3]=5000;
    uang[4]=10000;
    uang[5]=20000;
    uang[6]=50000;
    
    printf("total belanja = "); scanf("%d",&total);
    printf("total bayar = "); scanf("%d",&bayar);
    kembalian = bayar-total;
    printf("total kembalian = %i\n",kembalian);
    if (pecahan == kembalian, kembalian <=10000){
        printf("1 buah uang %i\n ",uang[3]);
        printf("2 buah uang %i\n ",uang[2]);
        printf("1 buah uang %i\n ",uang[1]);
    }
    return 0;
}