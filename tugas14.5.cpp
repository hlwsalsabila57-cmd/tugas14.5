#include <stdio.h>
int main(){
	int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12], C[12];
	int i, sum = 0;
	float rata;
	int indexB = 0, indexC = 0;
	
	//hitung jumlah dan rata-rata
	for (i = 0; i<12; i++) {
		sum += A[i];
	}
	rata = sum / 12.0;
	
	//pindahkan nilai ke array B dan C
	for (i = 0; i<12; i++) {
		if (A[i] > rata) {
			B[indexB] = A[i]; indexB++;
		} else if (A[i] < rata) {
			C[indexC] = A[i]; indexC++;
		}
	}
	
	//tampilkan hasil
	printf("Array A: \n");
	for (i = 0; i<12; i++) {
		printf("%d ", A[i]);
	}
	printf("\n\nRata-rata: %2f\n", rata);
	printf("\nArray B (nilai di atas rata-rata):\n");
	for (i = 0; i < indexB; i++) {
		printf("%d ", B[i]);
	}
	printf("\n\nArray C (nilai di bawah rata-rata):\n");
	for (i = 0; i < indexC; i++) {
		printf("%d ", C[i]);
	}
	return 0;
	
}
