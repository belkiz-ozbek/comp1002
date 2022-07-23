#include<stdio.h>

int main(){
	
	int i, j, bosluk_sayisi, yildiz_sayisi;
	int num_of_lines;
	int yildiz_sayisi2;
	
	scanf("%d", &num_of_lines);
	
	bosluk_sayisi = 2*num_of_lines-2;
	yildiz_sayisi = 3;

	// first part	
	for(i = 1; i <= num_of_lines; i++){
		
		for(j = 1; j <= bosluk_sayisi; j++){
			printf(" ");
		}
	
		
		for(j = 1; j <= yildiz_sayisi; j++){
			printf("*");
		}
		
		bosluk_sayisi -= 2;
		yildiz_sayisi += 4;
		printf("\n");
	}
	
	yildiz_sayisi = num_of_lines - 1;
	yildiz_sayisi2 = 2 * (num_of_lines-1) -1;
	bosluk_sayisi = 2;
	
	for(i = 1; i <= (num_of_lines-1); i++){
		
		for(j = 1; j <= yildiz_sayisi; j++)
			printf("*");
		
		for(j = 1; j <= bosluk_sayisi; j++)
			printf(" ");
		
		for(j = 1; j <= yildiz_sayisi2; j++)
			printf("*");
			
		for(j = 1; j <= bosluk_sayisi; j++)
			printf(" ");
			
		for(j = 1; j <= yildiz_sayisi; j++)
			printf("*");
			
			
		bosluk_sayisi += 2;
		yildiz_sayisi--;
		yildiz_sayisi2 -= 2; 
		printf("\n");
	}
	
		return 0;	
}
	
	

	

