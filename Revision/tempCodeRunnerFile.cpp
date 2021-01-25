#include<stdio.h>
//Bismillah Isok
int main() {
	int times, aksi1, aksi2;
	scanf("%d",&times);
	int matriks[times];
	for(int i=0; i<times; i++){
		matriks[i]=0;
		scanf("%d %d",&aksi1,&aksi2);
		char theMap[aksi1][n];
		for(int i_m = 0; i_m < aksi1; i_m++){
			scanf("%s",theMap[i_m]);}
		for(int i_m = 0; i_m < aksi1; i_m++){
		for(int i_n = 0; i_n < n; i_n++){
			if(theMap[i_m][i_n] == 'X'){
				for(int j_m = i_m - 1; j_m < i_m + 2; j_m++){
				for(int j_n = i_n - 1; j_n < i_n + 2; j_n++){
					if((j_m >= 0 && j_n >= 0 ) && (j_m < aksi1 && j_n < aksi2)){if(theMap[j_m][j_n] == 'O'){matriks[i] += 1;}}}}}	
		}
		}	
	}
	for(int i = 0; i < times; i++){
		printf("Case #%d: %d\n",i + 1,matriks[i]);}
	return 0;
}
