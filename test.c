#include<stdio.h>


struct book{
    int isbn;
    int page_number;
    double value;
};

int main(){

    int x,y;
    double v;

    struct book b;

    b.isbn = scanf("%d",&x);
    b.page_number = scanf("%d",&y);
    b.value = scanf("%lf",&v);

    printf("isbn = %d\n",x);
    printf("page number = %d\n",y);
    printf("valu = %lf\n",v);

    return 0;
}