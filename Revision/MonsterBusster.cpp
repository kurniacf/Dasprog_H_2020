#include<iostream>
using namespace std;

int is_valid(int posisi_bom[],int size){
	int diagonal_turun, diagonal_naik, vertical_check;
	for(int i = 0; i < size - 1; i++){
		if(posisi_bom[i] == -1){break;}
		diagonal_turun = posisi_bom[i];
		diagonal_naik = posisi_bom[i];
		for(int j = i + 1; j < size; j++){
			if(posisi_bom[j] == -1){break;}
			diagonal_turun = diagonal_turun + size + 1;
			diagonal_naik = diagonal_naik + size - 1;
			if(diagonal_turun == posisi_bom[j]){return 0;}
			if(diagonal_naik == posisi_bom[j]){return 0;}
			vertical_check = posisi_bom[i] % size - posisi_bom[j] % size;
			if(vertical_check == 0){return 0;}
			}
	}
	return 1;
}
int counter = 0,recurs = 0;
void count_possible_position(int posisi_bom[], int size,int start,int end,int index,int r){
	recurs += 1;
	if(index == r){
		if(is_valid(posisi_bom,size)){
			counter += 1;}
		return;}
	for(int i = start; i < end; i++){
		posisi_bom[index] = i;
		for(int j = index + 1; j < size; j++){posisi_bom[j] = -1;}
		if(!is_valid(posisi_bom,size)){continue;}
		count_possible_position(posisi_bom, size, size * (index + 1), size * (index + 2), index + 1, r);}
}
void make_map(int size){
	int posisi_bom[size];
	for(int i = 0; i < size; i++){
		posisi_bom[i] = -1;}
	count_possible_position(posisi_bom, size, 0,size, 0, size);
}
int main(){
	int N;
	scanf("%d",&N);
	make_map(N);
	printf("%d\n",counter);
	return 0;
}