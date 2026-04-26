#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int jami(int a){
//         if(a==1){
//             return 1;
//         }   
//     return a + jami(a-1);  
// }
// int main (){
//     int a;
//     printf("Son kiriting");
//     scanf("%d",&a);

//     int natija=jami(a);

//     printf("%d",natija);
// }

// void teskari(int a,int b){
//     printf("%d ",a);
//     if(a==b){
//         return;
//     }if(a<b){
//         teskari(a+1,b);
//     }else{
//         teskari(a-1,b);
//     }
// }

// int main (){
//     int a,b;
//     printf("2 ta son kiriting");
//     scanf("%d%d",&a,&b);

// teskari(a,b);
// }



void hisob (int a){
    if(a==0){
        return;
    }
    hisob(a/10);
    printf("%d ",a%10);
}

int main (){
    int a;
    printf("Son kiriting");
    scanf("%d",&a);

    hisob(a);
}

