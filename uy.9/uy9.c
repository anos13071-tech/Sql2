#include <stdio.h>
// int main (){
//     // int a;
//     // int arr[a];

//     // printf("Qancha son kiritasiz");
//     // scanf("%d",&a);

//     // for (int b=0;b<a;b++){
//     //     scanf("%d",&arr[b]);
//     //     // printf("%d ",arr[b]);

//     //     if(arr[b]>0){
//     //         printf("1 ");
//     //     }else{
//     //         printf("0 ");
//     //     }
//     // }


//     // int a;
//     // int arr[4];
//     // printf("4 ta son kiriting");

//     // for(int b;b<4;b++){
//     //     scanf("%d",&arr[b]);
//     //     if(arr[0]%2==0){
//     //         if(arr[1]%2==1){
//     //            if(arr[2]%2==0){
//     //                 if(arr[3]%2==1){
//     //                 printf("Tugri");
//     //             }
//     //            } 
//     //         }
//     //     }else{
//     //         printf("Hato");
//     //         return 0;
//     //     }
//     // }
// }
  


// void jojo(int a[], int n) {
//     int ka, b;
//     for(int i=0;i<n;i++){
//         if(a[i]>ka){ 
//             b=ka; ka=a[i]; 
//         }
//         else if(a[i]>b && a[i]!=ka){
//             b=a[i];
//         }
//     }
//     if(b==-101) printf("Ikkinchi eng katta yuq\n");
//     else printf("Ikkinchi eng kattasi %d\n",b);
// }

// int main() {
//     int a[10] = {3, 7, -2, 7, 0, 5, 7, -10, 1, 4}; 


//     for(int i=0;i<10;i++){
//      printf("%d ",a[i]);
//     }  
//     printf("\n");
//     jojo(a,10);
// }



// void Kichikson(int arr[], int b) {
//     int kichik = arr[0];
//     int kichikIndex = 0;

//     for (int d = 1; d < b; d++) {
//         if (arr[d] < kichik) {
//             kichik = arr[d];
//             kichikIndex = d; 
//         }
//     }

//     printf("Kichik son: %d\n", kichik);
//     printf(" %d ta son bor\n", kichikIndex);
// }

// int main() {
//     int b;
//     printf("Qancha son kiritasiz: ");
//     scanf("%d", &b);

//     int arr[b];
//     for (int u = 0; u < b; u++) {
//         scanf("%d", &arr[u]);
//     }

//     Kichikson(arr, b);
// }



// void Z(int arr[], int n) {
//     int s; 
//     int a = 0;         

//     for (int i = 0; i < n; i++) {
//         if (arr[i]%2==0 ) {
//             if (!a || arr[i] < s) {
//                 s = arr[i];
//                 a = 1;
//             }
//         }
//     }

//     if (a) {
//         printf("Eng kichik musbat son %d\n", s);
//     } else {
//         printf("Musbat son yoq\n");
//     }
// }

// int main() {
//     int n;
//     printf("Nechta son kiritasiz");
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) {
    
//         scanf("%d", &arr[i]);
//     }

//     Z(arr, n);

  
// }

