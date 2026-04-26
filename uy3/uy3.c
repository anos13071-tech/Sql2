#include <stdio.h>

// int main(){
//     int a;
//     printf("Bal kiriting");
//     scanf("%d",&a);

//     switch(a){
//         case 60 ... 100:
//         printf("Utiz");
//         break;
//         default:
//         case 1 ... 59:
//         puts("Utolmadiz");
//         break;
//     }
// }


// int main (){
//     int a;
//     printf("Son kiriting");
//     scanf("%d",&a);

//     switch(a){
//         case 1 ... 10:
//         puts("Yaxshi");
//         break;
//         default:
//         case 11 ... 100:
//         puts("oshib keti");
//     }
// }


int main (){
    int a;
    puts("Bahoni kiriting");
    scanf("%c",&a);

    switch(a){
        case 'a':
        case 'A':
        puts("Alo");
        break;

        case 'e':
        case'E':
        puts("Yaxshi");
        break;
        default:
        puts("Noto'g'ri");
    }
}


// int main(){
//     int a;
//     printf("Amaldi kiriting");
//     scanf("%c",&a);

//     switch(a){
//         case '+' :
//         puts("Qushish");
//         break;
//         case '/' :
//         puts("Buluv");
//         break;
//         case '-' :
//         puts("Ayiruv");
//         break;
//         case '*' :
//         puts("Kupaytiruv");
//         break;
//         default:
//         puts("Hato amal kiritiz");
//     }
// }


// --------------------------------------------------------------------------------------


// #include <stdio.h>


// struct Result {
//     float multiply;
//     float divide;
// };


// struct Result calculation(float a, float b) {
//     struct Result res;

//     res.multiply = a * b;

//     if (b != 0)
//         res.divide = a / b;
//     else
//         res.divide = 0; 

//     return res;
// }

// int main() {
//     float x, y;

//     printf("Ikki son kiriting: ");
//     scanf("%f %f", &x, &y);

//     struct Result result = calculation(x, y);

//     printf("Ko'paytma: %.2f\n", result.multiply);
//     printf("Bo'lish natijasi: %.2f\n", result.divide);

//     return 0;
// }









// void show_student(char name[], float gpa) {
//     printf("Student name: %s\n", name);

//     if (gpa < 0) {
//         printf("GPA: Available emas\n");
//     } else {
//         printf("GPA: %.2f\n", gpa);
//     }
// }

// int main() {
   
//     show_student("Ali", 3.75);

//     printf("\n");

    
//     show_student("Vali", -1);

//     return 0;
// }









// float compute_pay(float hours, float rate) {
//     float pay;

//     if (hours <= 40) {
//         pay = hours * rate;
//     } else {
//         float overtime = hours - 40;
//         pay = (40 * rate) + (overtime * rate * 1.5);
//     }

//     return pay;
// }

// int main() {
//     float hours, rate, total_pay;

//     printf("Ishlangan soatlarni kiriting: ");
//     scanf("%f", &hours);

//     printf("Soatlik stavkani kiriting: ");
//     scanf("%f", &rate);

//     total_pay = compute_pay(hours, rate);

//     printf("Yalpi ish haqi: %.2f\n", total_pay);

//     return 0;
// }






// void compute_grade(int score) {
//     if (score < 0 || score > 100) {
//         printf("Xato: Ball 0 dan 100 gacha bo'lishi kerak!\n");
//     } 
//     else if (score >= 90) {
//         printf("Baho: A\n");
//     } 
//     else if (score >= 80) {
//         printf("Baho: B\n");
//     } 
//     else if (score >= 70) {
//         printf("Baho: C\n");
//     } 
//     else if (score >= 60) {
//         printf("Baho: D\n");
//     } 
//     else {
//         printf("Baho: F\n");
//     }
// }

// int main() {
//     int score;

//     printf("Ballni kiriting (0-100): ");
//     scanf("%d", &score);

//     compute_grade(score);

//     return 0;
// }




// #include <math.h>

// int main() {
//     double result;

//     result = sqrt(124590);

//     printf("%f\n", result);

//     return 0;
// }





// int main() {
//     double x;
//     double y1, y2, y3;

//     printf("x qiymatini kiriting: ");
//     scanf("%lf", &x);

//     y1 = sin(x);

  
//     y2 = exp(fabs(cos(x))) + (log(tan(x)) / log(3));

   
//     y3 = sqrt(pow(x, 3)) + log(x) - sqrt(x);

//     printf("\nNatijalar:\n");
//     printf("1) y = sin(x) = %lf\n", y1);
//     printf("2) y = e^{|cos(x)|} + log_3(tan(x)) = %lf\n", y2);
//     printf("3) y = sqrt(x^3) + log(x) - sqrt(x) = %lf\n", y3);

//     return 0;
// }






// #include <math.h>


// double distance(double x1, double y1, double x2, double y2) {
//     return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
// }

// int main() {
//     double x1, y1, x2, y2;
//     double d;

//     printf("x1 va y1 ni kiriting: ");
//     scanf("%lf %lf", &x1, &y1);

//     printf("x2 va y2 ni kiriting: ");
//     scanf("%lf %lf", &x2, &y2);

//     d = distance(x1, y1, x2, y2);

//     printf("Ikki nuqta orasidagi masofa: %lf\n", d);

//     return 0;
// }




// #include <math.h>


// void sphere(double radius) {
//     double pi = 3.141592653589793; 
//     double area, volume;

//     area = 4 * pi * pow(radius, 2);
//     volume = (4.0 / 3.0) * pi * pow(radius, 3);

//     printf("Sharning radiusi: %.2lf\n", radius);
//     printf("Sharning maydoni: %.2lf\n", area);
//     printf("Sharning hajmi: %.2lf\n", volume);
// }

// int main() {
//     double r;

//     printf("Sharning radiusini kiriting: ");
//     scanf("%lf", &r);

//     if (r < 0) {
//         printf("Xato: Radius manfiy bo'lishi mumkin emas!\n");
//     } else {
//         sphere(r);
//     }

//     return 0;
// }







