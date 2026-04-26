#include <stdio.h>

void Kod(int arr[],int *a,int katak) {
    if (katak<0||katak>= *a) {
        printf("Notogri index");
        return;
    }

    for (int i=katak;i<*a-1;i++) {
        arr[i]=arr[i+1];
    }
    (*a)--;
}

int main() {
    int arr[100]={10,20,30,40,50};
    int a=5;
    int katak=3;

    Kod(arr,&a,katak);

    for (int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}


// void Kod(int arr[],int *a,int katat){
//     arr[*a]=katat;
//     (*a)++;
// }

// int main (){
//     int arr[100]={10,20,30,40};
//     int a=4;
//     int katak=80;
    
//     Kod(arr,&a,katak);

//     for (int i=0;i<a;i++){
//         printf("%d ",arr[i]);
//     }
// }