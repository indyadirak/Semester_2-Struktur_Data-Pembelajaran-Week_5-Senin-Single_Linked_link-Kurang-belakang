#include <iostream>
#include <conio.h>
//#include <std>
#include <stdio.h>
using namespace std;

struct simpul {
	int data;
	simpul* next;
};


int main() 
{
	simpul* awal = NULL, * akhir = NULL, * baru, * bantu;
	int data1, tekan, jawab, hapus;
	do {
		cout << "Masukkan data = "; cin >> data1;

		baru = new simpul;
		baru->data = data1;
		baru->next = NULL;

		if (akhir == NULL) {
			awal = baru;
			akhir = baru;
		}
		else {
			baru->next = awal;
			awal = baru;
		}
		cout << "Ingin Menambah Depan lagi? (Tekan 1): "; cin >> tekan;
	} while (tekan == 1);

	bantu = awal;
	while (bantu != NULL) {
		cout << bantu->data << " ";
		bantu = bantu->next;
	}

	cout << "ingin hapus depan tekan 1 = "; 
	cin >> jawab;

	if (jawab == 1)
	{
		do
		{
			if (awal == NULL)
			{
				cout << "maaf list kosong";
			}
			else if (awal == akhir)
			{
				awal = NULL;
				akhir = NULL;
			}
			else
			{
				bantu = awal;
				bantu = bantu->next;
				bantu->next = NULL;
			}
			cout << "ingin hapus lagi tekan 1 = ";
			cin >> hapus;
		} while (hapus == 1);
	}
	bantu = awal;
	while (bantu != NULL)
	{
		cout << bantu->data << " ";
		bantu = bantu->next;
	}
	
}
