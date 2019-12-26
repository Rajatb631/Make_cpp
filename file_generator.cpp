#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fil;
	fil=fopen("data.txt","w");
	for(int i=0; i<50;i++){

		fprintf(fil,"%d,%d,%d",i+1,rand()%100,rand()%100);
	}
	fclose(fil);
	return 0;

}
