#include <iostream>

using namespace std;

int main() {
	long long res = 0;
	int m[12];// первые 12 знаков РНК
	int pos = 0;
	for (int i = 0; i < 4; ++i) {//кодируем числами от 0 до 3 и перебираем первые 12 знаков
		m[pos] = i;
		++pos;
		for (int i = 0; i < 4; ++i) {
			m[pos] = i;
			++pos;
			for (int i = 0; i < 4; ++i) {
				m[pos] = i;
				++pos;
				for (int i = 0; i < 4; ++i) {
					m[pos] = i;
					++pos;
					for (int i = 0; i < 4; ++i) {
						m[pos] = i;
						++pos;
						for (int i = 0; i < 4; ++i) {
							m[pos] = i;
							++pos;
							for (int i = 0; i < 4; ++i) {
								m[pos] = i;
								++pos;
								for (int i = 0; i < 4; ++i) {
									m[pos] = i;
									++pos;
									for (int i = 0; i < 4; ++i) {
										m[pos] = i;
										++pos;
										for (int i = 0; i < 4; ++i) {
											m[pos] = i;
											++pos;
											for (int i = 0; i < 4; ++i) {
												m[pos] = i;
												++pos;
												for (int i = 0; i < 4; ++i) {
													m[pos] = i;
													++pos;
													int f = 1;
													for (int i = 0; i < 10; ++i) {
														if ((m[i] == 0) && (m[i + 1] == 0) && (m[i + 2] != 0)) { //сопостовляем стоп-кодонам 3 варианта 001, 002, 003
															f = 0; //не считаем РНК если встретился стоп-кодон не в конце
															break;
														}
													}
													res += f;
													--pos;
												}
												--pos;
											}
											--pos;
										}
										--pos;
									}
									--pos;
								}
								--pos;
							}
							--pos;
						}
						--pos;
					}
					--pos;
				}
				--pos;
			}
			--pos;
		}
		--pos;
	}
	cout << res * 3; //умножаем на количество вариантов стоп-кодонов в конце
}