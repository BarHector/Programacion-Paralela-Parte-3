#include <stdio.h>
#include <omp.h>

int main(){
	int i, j, k, NRA=4 , NCB=3, NCA=2;
	int a[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b[2][3] = {9, 10, 11, 12, 13, 14};
	int c[4][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	printf("ARREGLO A\n");
	for(int x=0; x<4; x++){
		for(int y=0; y<2; y++){
			printf("a[%i][%i] = %i\n", x, y, a[x][y]);
		}
	}

	printf("\nARREGLO B\n");
	for(int x=0; x<2; x++){
		for(int y=0; y<3; y++){
			printf("b[%i][%i] = %i\n", x, y, b[x][y]);
		}
	}

	printf("\nARREGLO C\n");
	#pragma omp parallel for private (j,k)
	for(i= 0; i<NRA; i++){
		for(j= 0; j<NCB; j++){
			for(k=0; k<NCA; k++){
				c[i][j] += a[i][k] * b[k][j];
				printf("c[%i][%i] = %i\t", i, j, c[i][j]);
			}
			printf("\n");
		}
	}
}
