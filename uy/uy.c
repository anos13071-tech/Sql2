#include <stdio.h>
// int main (){
//     int a,b,c,d,e,natija;
//     printf("Birinchi bahoni kiriting\n");
//     scanf("%d",&a);

//     printf("Ikinchi bahoni kiriting\n");
//     scanf("%d",&b);

//     printf("Uchinchi bahoni kiriting\n");
//     scanf("%d",&c);

//     printf("Turtinchi bahoni kiriting\n");
//     scanf("%d",&d);

//     printf("Beshinchi bahoni kiriting\n");
//     scanf("%d",&e);

//     natija=a+b+c+d+e;
//     natija=natija/5;
//     printf("%djavob"), natija;
// }


int main () {
    int a,b,c,d,natija;
    printf("Son kiriting\n");
    scanf("%d",&a);

    b=a%10;
    c=a/10%10;
    d=a/100;

    natija=b;
    natija=c;
    natija=d;
    printf("Natija %d%d%d " ,b,c,d );
}


// int main(){
//      int a;
//     do {
//         printf("2 xonali son kiriting: ");
//         scanf("%d", &a);
//     } while (a < 10 || a > 99);

//     int a = a / 10;   
//     int b = a % 10;   

//     a = b * 10 + a;

//     printf("Raqamlari almashgan son: %d\n", a);

//     return 0;
// }

// int main(){
//     printf(" *    *\n"); 
//     printf("  *  *  \n");
//     printf("    *   \n");   
//     printf("  *  *  \n");
//     printf(" *    *\n"); 
// }




// int main() {
//     int i, j;

//     for (i = 1; i <= 9; i++) {
//         for (j = 1; j <= 9; j++) {
//             printf("%d x %d = %d\n", i, j, i * j);
//         }
//         printf("\n"); 
//     }

//     return 0;
// }



