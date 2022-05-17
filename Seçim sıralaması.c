#include <stdio.h>
void secimsiralamasi(int sdizi[], int x){
	int i, j;
	int index, enkucuk;
	
	for(i=0; i<x-1; i++){
	    enkucuk=sdizi[x-1];
		index=x-1;
		for(j=i; j<x; j++){
			enkucuk=sdizi[j];
			index=j;
		}
	}
	sdizi[index]=sdizi[i];
	sdizi[i]=enkucuk;
	
}

int main(){
	int i;
	int sdizi[5];
	
	printf("Lutfen siralamak istediginiz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &sdizi[i]);
		i++;
	}
	i=0;
secimsiralamasi(sdizi, 5);
	
	while(i<5){
		printf("%d", sdizi[i]);
		i++;
	}
	return 0;
}
