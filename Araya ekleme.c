#include <stdio.h>
void arayaekleme(int sdizi[], int n){
	int ekle, k, i;
	for(i=1; i<n; i++){
		ekle=sdizi[i];
		for(k=i-1; k>=0 && ekle<= sdizi[k]; k--)
			sdizi[k+1]=sdizi[k];
			sdizi[k+1]= ekle;
		
	}}

	
int main() {
	int i=0;
	int sdizi[5];
	
	printf("Lutfen siralamak istediginiz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &sdizi[i]);
		i++;
	}
	i=0;
	arayaekleme(sdizi, 5);
	
	while(i<5){
		printf("%d", sdizi[i]);
		i++;
	}
	return 0;
}
