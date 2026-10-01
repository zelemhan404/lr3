#define      D       2.54
#define      M       2.32166
#define		 S 2.7076
#include <stdio.h>
#include <locale.h>
int task1() {
	setlocale(LC_CTYPE, "RUS");
	float num, num2;
	puts("введите число А");
	scanf("%f", &num);
	puts("введено число А\n");
	puts("введите число В");
	scanf("%f", &num2);
	puts("введено число В\n");
	printf("сумма %f и %f равна %f\n\n", num, num2, num + num2);
	printf("разность %f и %f равна %f\n\n", num, num2, num - num2);
	printf("произведение %f и %f равно %f\n\n", num, num2, num * num2);
	printf("частное и остаток от деления %.2f на %.2f равна %.2f\n\n", num, num2, num / num2);

}

int task2() {
	setlocale(LC_CTYPE, "RUS");
	int dym, pul, stl;
	float result, result2, result3;
	printf("введите значение для расчёта\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("% d дюймов – это % .1f см\n\n" , dym, result);
	printf("введите значение для расчёта\n");
	scanf("%d", &pul);
	result2 = M * pul;
	printf("% d исп дюймов – это % .1f см\n\n", pul, result2);
	printf("введите значение для расчёта\n");
	scanf("%d", &stl);
	result3 = S * stl;
	printf("% d стрл дюймов – это % .1f см\n", stl, result3);

}



int main() {
	task2();
}