#include<stdio.h>





int main (){
//   int a;
//  printf("Son kiriting");
//  scanf("%d",&a);

//  int ali [a][a];
//  int jojo=0,Dio=0;

//  printf("Sonlar kiriting");

//  for(int b=0;b<a;b++){
//     for(int v=0;v<a;v++){
//         scanf("%d",&ali[b][v]);

//         if (ali [b][v]==0){
//             jojo++;
//         }else{
//             Dio++;
//         }
//     }
//  }

//  if(jojo>Dio){
//     printf("Tog'ri");
//  }else{
//     printf("Hato");
//  }
    

// int a;
// printf("Son kiriting");
// scanf("%d",&a);

// int Zhon [a][a];

// printf("Son kiriting");
// for(int y=0;y<a;y++){
//     for(int r=0;r<a;r++){
//         scanf("%d",&Zhon[y][r]);
//     }
// }
// for(int y=0;y<a;y++){
//     for(int r=0;r<a;r++){
//     printf("%d ",Zhon[y][r]);
//     }
//     puts("");
// }

//    int yu = 0;
// int lp = 0;

//     for(int i=0; i<a; i++){
//         yu += Zhon[i][i];
//         lp += Zhon[i][a-1-i];
//     }

//     printf("Diagonal: %d\n", yu);
//     printf("Teskari: %d\n", lp);

    int a;
    printf("Son kiriting");
    scanf("%d",&a);

    int ilo[a][a];

    printf("Son kiriting");
    for(int i=0;i<a;i++){
        for(int g=0;g<a;g++){
            scanf("%d",&ilo[i][g]);
        }
    }
        for(int i=0;i<a;i++){
            for(int g=0;g<a;g++){
                printf("%d ",ilo[i][g]);
            }
           puts(" "); 
    }

    int max = ilo[0][0];
    int min =ilo[0][0];

    int maxs=0,maxv=0;
    int mins=0,minv=0;

    for(int i=0;i<a;i++){
        for(int g=0;g<a;g++){
            if(ilo[i][g]>max){
                max=ilo[i][g];
                maxs=i;
                maxv=g;
            }
               if(ilo[i][g]<min){
                min=ilo[i][g];
                mins=i;
                minv=g;
            }
        }
    }

    printf("Katta %d Kichik: %d\n",max,min);
}