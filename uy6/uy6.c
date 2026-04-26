#include <stdio.h>

// int main (){
//     int a;
//     scanf("%d",&a);

//     for(int b=1;b<=a; b++){
//         for(int f=1;f<=a;f++){
//             printf("& ");
//         }
//         puts("");
//     }
// }




// int main (){
//     int a;
//     scanf("%d",&a);

//     for(int b=a; b ;b--){
//         for(int f=1;f<=b;f++){
//             printf("* ");
//         }
//         puts("");
//     }
// }


// int main (){
//     int a;
//     scanf("%d",&a);

//     for(int b=1;b<=a;b++){
//         for(int f=1;f<=a;f++){
//             printf("%d ",b);
//         }
//         puts("");
//     }
// }



// int main (){
//     int a;
//     scanf("%d",&a);

//     for(int d=1;d<=a;d++){
//         for(int f=1;f<=a;f++){
//             if(d==f){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         puts("");
//     }
// }



// int main (){
//     int a,c;
//     a=10;
 

//     for(int b=1;b<=a;b++){
//         for(int f=1;f<=a;f++){
//             printf("%d ",f*b);
//         }
//         puts("");
//     }
// }


// ------------------------------------------------------------------


// int main (){
//     int a,d,h;
//     d=5;
//     for(int b=0; b<d;b++){
//         printf("Son kiriting");
//         scanf("%d",&a); 

//         if(a>0){
//         printf("%d\n",a);
//         h+=a;
//         }
//     }
//     printf("%d",h/5 );
// }



// int main (){
//     int a;
//     printf("son kiriting");
//     scanf("%d",&a);

//     printf("%d",a*a*a);
// }


// int main() {
//     int n;
//     double H = 0.0;

//     printf("n musbat butun sonni kiriting: ");
//     scanf("%d", &n);

//     if(n <= 0) {
//         printf("Xatolik! n musbat butun son bo'lishi kerak.\n");
//         return 1;
//     }

//     for(int i = 1; i <= n; i++) {
//         H += 1.0 / i;
//     }

//     printf("H(%d) = %.2lf\n", n, H);

// }


// int main() {
//     int sum = 0;

//     for(int i = 100; i <= 300; i++) {
//         if(i % 15 == 0) {
//             sum += i;
//         }
//     }

//     printf("Yig'indi: %d\n", sum);

  
// }


// int main() {
//     int num;
//     int positive_sum = 0;
//     int negative_sum = 0;
//     printf("Butun sonlarni kiriting (0 bilan tugaydi):\n");
//     while(1) {
//         scanf("%d", &num);

//         if(num == 0) {
//             break;
//         }
//         else if(num > 0) {
//             positive_sum += num;
//         }
//         else {
//             negative_sum += num;
//         }
//     }
//     printf("Musbat sonlar yig'indisi: %d\n", positive_sum);
//     printf("Manfiy sonlar yig'indisi: %d\n", negative_sum);
//     return 0;
// }



// int main() {
//     printf("Kichik  ASCII   Katta  ASCII\n");
//     printf("-----------------------------\n");
//     for(int i = 0; i < 26; i++) {
//         char lower = 'a' + i;
//         char upper = 'A' + i;
//         printf("  %c      %3d     %c      %3d\n", 
//                lower, lower, upper, upper);
//     }
// }

// int main() {
//     int rows = 4; 

//     for(int i = 1; i <= rows; i++) {
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     for(int i = rows - 1; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// int main() {
//     int n;

//     printf("n musbat butun sonni kiriting ");
//     scanf("%d", &n);

//     if(n <= 0) {
//         printf("Xatolik! n musbat bo'lishi kerak\n");
//         return 1;
//     }

