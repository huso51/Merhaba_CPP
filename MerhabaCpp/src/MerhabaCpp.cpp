//============================================================================
// Name        : MerhabaCpp.cpp
// Author      : Huseyin_Aydin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Kereste.h"
using namespace std;

int main() {
	/*FILE *dosya = fopen("C:\\Users\\Public\\Documents\\abc.dat", "a+");
	int dizi[12];
	bool durum = false;
	int sayi = 0;
	for (int i = 0; i < 12; i++) {
		durum = false;
		while (!durum) {
			sayi = rand() / 90000000;
			for (int j = 0; j < 12; j++) {
				if (dizi[j] == sayi)
					break;
				if (j == 12 - 1)
					durum = true;
			}
		}
		dizi[i] = sayi;
	}
	for (int i = 0; i < 12; i++) {
		cout << dizi[i] << endl;
		fprintf(dosya, "%d-", dizi[i]);
	}
	fprintf(dosya," -- ");
	int yedek = 0;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (dizi[i] > dizi[j]) {
				yedek = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yedek;
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		cout << dizi[i] << endl;
		fprintf(dosya, "%d-", dizi[i]);
	}
	fprintf(dosya," -- ");
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (dizi[i] < dizi[j]) {
				yedek = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yedek;
			}
		}
	}
	for (int i = 0; i < 12; i++) {
			cout << dizi[i] << endl;
			fprintf(dosya, "%d-", dizi[i]);
		}
	fclose(dosya);*/
	Kereste* krst = new Kereste();
	krst->setYaprakSayisi(33);
	krst->yaprakSayisiniYaz();
	return 0;
}
