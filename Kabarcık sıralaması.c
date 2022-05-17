#include <stdio.h>
void kabarciksiralama(int sdizi[], int n){
	int gecici;
	
	for(int i=0; i<n; i++){
		for(int k=0; k<n-1-i; k++){
			if(sdizi[k]>sdizi[k+1]){
				gecici=sdizi[k];
				sdizi[k]=sdizi[k+1];
				sdizi[k+1]=gecici;
			}
		}
	}
}

int main(){
	int i=0;
	int sdizi[5];
	
	printf("Lutfen siralamak istediginiz 5 sayiyi giriniz:\n");
	while(i<5){
		scanf("%d", &sdizi[i]);
		i++;
	}
	i=0;
	kabarciksiralama(sdizi, 5);
	
	while(i<5){
		printf("%d", sdizi[i]);
		i++;
	}
	return 0;
}

