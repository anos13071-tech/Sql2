#include<stdio.h>
#include<ctype.h>
int main (){
    // char name [50],second [50],ful_name[100]="";
    // int f_i=0;

    // printf("Ismiz");
    // scanf("%s",name);
    // printf("Familiya");
    // scanf("%s",second);

    // for(int b=0;name[b];b++){
    //     ful_name[f_i]=name[b];
    //     f_i++;
    // }
    // ful_name[f_i]=' ';
    // f_i++;
    // for(int b=0;second[b];b++){
    //     ful_name[f_i]=second[b];
    //     f_i++;
    // }

    // puts(ful_name);


// ----------------------------------

    // int count = 0,green=0;
    // char matn[50];
    // scanf("%[^\n]", matn);

    // for(int i=0; matn[i]; i++){

    //     if(isdigit(matn[i])){
    //         printf("%c-raqam\n",matn[i]);
    //         count++;

    //     }else if(isalpha(matn[i])){
    //         printf("%c-harif\n",matn[i]);
    //         green++;
    //     }
    // }

    // printf("%s da %d ta raqam bor va %d ta harf bor", matn, count,green);



    char matn[100];
    char kichik[100];
    char katta[100];
    int uzunlik = 0;

    printf("Satrni kiriting: ");
    scanf("%[^\n]", matn);

    for(int i = 0; matn[i] != '\0'; i++) {
        kichik[i] = tolower(matn[i]);
        katta[i] = toupper(matn[i]);
        uzunlik++;
    }

    kichik[uzunlik] = '\0';
    katta[uzunlik] = '\0';

    printf("Kichik harf: %s\n", kichik);
    printf("Katta harf: %s\n", katta);
    printf("Kichik harflar uzunligi: %d\n", uzunlik);
    printf("Katta harflar uzunligi: %d\n", uzunlik);

    // return 0;

    // char matin[50];

    // printf("Matin kiriting");
    // scanf("%[^\n]",matin);

    // for(int b=0; matin[b]; b++){
    //     if(isalpha(matin[b])){
    //     printf("%c\n",matin[b]);
    //     }
    // }
}


