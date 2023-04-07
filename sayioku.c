#include <stdio.h>
#include <conio.h>
//conio kapanmadan önce bir tuşa basmayı sağlıyor.
 int main() {
printf("bir sayi giriniz : ");
int a;
scanf("%d", &a);
printf("girdiğiniz sayi : %d", a);
return 0;
getch();

 }