#include <stdio.h>

// struct Talaba{
//     char ismi[44];
//     int yosh;
//     float stipendiya;
//     int baho[5];
// };

// int main(){
    // int a;
    // printf("Talabalar soni? ");
    // scanf("%d",&a);

    // struct Talaba t[a];

    // for(int b=0;b<a;b++){

    //     printf("Ismi: ");
    //     scanf("%s", t[b].ismi);

    //     printf("Yoshi: ");
    //     scanf("%d", &t[b].yosh);

    //     printf("Stipendiya: ");
    //     scanf("%f", &t[b].stipendiya);

    //     printf("5 ta baho kiriting: ");
    //     for (int i=0;i<5;i++){
    //         scanf("%d",&t[b].baho[i]);
    //     }
    // }

    // for (int i=0;i<a;i++){
    //     int jami = 0;
    //     for (int y=0;y<5;y++){
    //         jami += t[i].baho[y];
    //     }
    //     float urtacha = jami / 5;

    //     if (urtacha >= 4){
    //         printf("\nIsmi: %s\n", t[i].ismi);
    //         printf("Yoshi: %d\n", t[i].yosh);
    //         printf("Stipendiya: %s\n", t[i].stipendiya);
    //         printf("O'rtacha baho: %s\n", urtacha);
    //     }
    // }   
// }


// struct Ayeraport{
//     char turi[44];
//     int sanasi;
//     char shaxri [44];
//     int soat;
// };

// int main (){
//     struct Ayeraport t[5];

//     for (int i=0;i<5;i++){
//         printf("Turi: ");
//         scanf("%s",t[i].turi );

//         printf("Sanasi yani oy: ");
//         scanf("%d",&t[i].sanasi );

//         printf("Shaxri: ");
//         scanf("%s",t[i].shaxri );

//         printf("Soat: ");
//         scanf("%d",&t[i].soat );
//     }

//     for(int i=0;i<5;i++){
//         if(t[i].sanasi >=6 && t[i].sanasi <=8){
//             printf("\nTuri: %s\n", t[i].turi);
//             printf("Uchish shaxri: %s\n", t[i].shaxri);
//             printf("Soat: %d\n", t[i].soat);
//         }
//     }
// }



struct Ayeraport{
    char turi[44];
    int sanasi;
    char shaxri [44];
    int soat;
};

int main (){
    struct Ayeraport t[5];

    for (int i=0;i<5;i++){
        printf("Turi: ");
        scanf("%s",t[i].turi );

        printf("Sanasi yani oy: ");
        scanf("%d",&t[i].sanasi );

        printf("Shaxri: ");
        scanf("%s",t[i].shaxri );

        printf("Soat: ");
        scanf("%d",&t[i].soat );
    }

    for(int i=0;i<5;i++){
          if ((t[i].soat >= 2 && t[i].soat <= 3) && (strcmp(t[i].shaxri, "Toshkent") == 0)) {
            printf("\nTuri: %s\n", t[i].turi);
            printf("Uchish shaxri: %s\n", t[i].shaxri);
            printf("Soat: %d\n", t[i].soat);
        }
    }
}


