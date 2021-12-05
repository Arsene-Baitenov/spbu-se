#include <iostream>
#define ll long long

using namespace std;

double point1() {
	int sum42 = 0, all = 0;
	for (int i = 2; i <= 22; i += 2) {
		for (int j = i; j <= 22; j += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
			if (i + j == 42) ++sum42;
			++all;
		}
	}
	return (double)sum42 / all;
}

double point2() {
	int sum_leq_20 = 0, all = 0;
	for (int i = 2; i <= 22; i += 2) {
		for (int j = i; j <= 22; j += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
			if (i + j <= 20) ++sum_leq_20;
			++all;
		}
	}
	return (double)sum_leq_20 / all;
}

double point3() {
	int sum_g_60 = 0, all = 0;
	for (int i = 2; i <= 22; i += 2) {
		for (int j = i; j <= 22; j += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
			for (int k = j; k <= 22; k += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
				if (i + j + k > 60) ++sum_g_60;
				++all;
			}
		}
	}
	return (double)sum_g_60 / all;
}

double point5() {
	int pay_variants = 0, all = 0;
	for (int i = 2; i <= 22; i += 2) {
		for (int j = i; j <= 22; j += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
			for (int ii = 2; ii <= 22; ii += 2) {//выбираем вторую пару
				for (int jj = ii; jj <= 22; jj += 2) {//упорядочим количество пятен коровок чтобы варианты не повторялись
					if (i + j == ii + jj) ++pay_variants;
					++all;
				}
			}
		}
	}
	return (double)pay_variants / all;
}

int main() {
	printf("point #1: %lf\n", point1());
	printf("point #2: %lf\n", point2());
	printf("point #3: %lf\n", point3());
	printf("point #5: %lf\n", point5());
}
