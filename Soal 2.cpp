#include <stdio.h>

void sort(int[], int);
int main () {
	int N, coin_list[100], X[100], i, uang;
 
	printf("Masukkan berapa mainan: ");
	scanf("%d", &N);
	
	printf("\nMasukkan nomor mainan : \n");
	for(i=0; i<N; i++) {
		scanf("%d", &coin_list[i]);
	}
	sort(coin_list, N);
	
	printf("\nMasukkan uang: ");
	scanf("%d", &uang);
	
	for(i=0; i<N; i++) {
		X[i] = uang / coin_list[i];
		uang %= coin_list[i];
	}
	
	printf("\nSolution: \n");
	for(i=0; i<N; i++) {
		printf("\n%d : %d", coin_list[i], X[i]);
	}
}

void sort(int Array[], int Size) {
	int i, j, temp;
	for(i=0; i<Size; i++) {
		for (j=i+1; j<Size; j++) {
			if(Array[i] < Array[j]) {
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}		
		}
	}
}
