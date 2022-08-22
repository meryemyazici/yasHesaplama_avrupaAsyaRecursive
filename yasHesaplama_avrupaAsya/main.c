#include <stdio.h>
#include <stdlib.h>

//Avrupa ve Asya'ya göre yaþ hesaplamasý
int get(int n) {
    if (n>0){
        int age, europeanAge, asianAge,sonuc;

        printf("Avrupa Yasi Girecekseniz 0, Asya Yasi Girecekseniz 1 Yaziniz: \n");

        scanf("%d", &age);

        if (age == 0) {
            printf("Avrupa Yasinizi Giriniz:");
            scanf("%d", &europeanAge);
            sonuc = europeanAge+1;
            printf("Asya Yasiniz = %d\n",sonuc);
        }
        else if (age==1){
            printf("Asya Yasinizi Giriniz:");
            scanf("%d", &asianAge);
            sonuc = asianAge-1;
            printf("Avrupa Yasiniz = %d\n", sonuc);
        }

        return get(n-1);
    }


}

int main(){
    get(5);

    return 0;
}
