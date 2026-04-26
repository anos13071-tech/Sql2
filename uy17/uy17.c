#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    // int arr[5]={1,2,-9,-8,4};
    // FILE *f=fopen("Musbat.txt","w");
    // FILE *n=fopen("Manfiy.txt","w");

    // for (int i=0;i<5;i++){
    //     if(arr[i]>0){
    //         fprintf(f,"%d ",arr[i]);
    //     }else if(arr[i]<0){
    //         fprintf(n,"%d ",arr[i]);
    //     }else{
    //         fprintf(f,n,"Bu son manfiy va musbat ham emas");
    //     }
    // }
    // -----------------------------------------------------------------
    // FILE *f = fopen("Matin.txt", "w");  
    // char word[44];
    // char max[44];
    // int n;

    // printf("Qancha so'z kiritasiz? ");
    // scanf("%d",&n);

    // printf("Matin kiriting:\n");
    // scanf("%s",max);  

    // for(int i=1;i<n;i++) {  
    //     scanf("%s",word);
    //     if(strcmp(word,max)>0) {
    //         strcpy(max,word);
    //     }
    // }
    // fprintf(f,"Eng katta soz: %s\n",max);  
    // printf("Eng katta soz: %s\n",max);

    // fclose(f);

    // FILE *f=fopen("Matin.txt", "w");
    // char mat[44];

    // printf("Matin kiriting: ");
    // scanf("%s",mat);

    // strrev(mat);
    // fprintf(f,"%s",mat);

    FILE *f=fopen("Unli.txt","w");

    char mat[44];
    char unli[44];
    int b=0;

    printf("Matin kiriting");
    scanf("%s",mat);

   for(int i = 0; mat[i] != '\0'; i++){
        if(mat[i]=='a'||mat[i]=='e'||mat[i]=='i'||
           mat[i]=='o'||mat[i]=='u'||
           mat[i]=='A'||mat[i]=='E'||mat[i]=='I'||
           mat[i]=='O'||mat[i]=='U') 
        {
            unli[b++]=mat[i];
        }
    }
    unli[b] = '\0';
    
    fprintf(f,"Unlisiz matn: %s\n", unli);   
}

