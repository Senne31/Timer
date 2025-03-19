#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void){
	int min, seg;
	
	//pedir para usuario informar os dados (min/segs)
	printf("Informe os minutos e os segundos nesta ordem. \n");
	scanf("%d %d", &min, &seg);
	
	//tratar a entrada
	if(min<0 || seg<0 || min>59 || seg>59 || (min==0 && seg==0)){
		printf("Valores invalidos. tente novamente.\n");
	}
	else{
		do{
			system("cls");
	//imprimir os valores no formato mm:ss
	if(min<10){
		if(seg<10){
			printf("0%d:0%d\n", min, seg);
		}else{
			printf("0%d:%d\n", min, seg);
		}
	}else if(seg<10){
		printf("%d:0%d\n", min, seg);
	}else{
		printf("%d:%d\n", min, seg);
	}
	
	//atualizar os valores a cada segundo
	Sleep(1000); //1 segundo
	if(seg==0){
		min--;
		seg=59;
	}else{
		seg--;
	}
	}while(min!=0 || seg!=0);
		system("cls"); 
		printf("%d:%d", min, seg);//Tempo zerado
		printf("\nTEMPO ESGOTADO.");
		
	}
	gcc timer.c -o timer.exe
./timer.exe > saida.txt

	return 0;
	
	
}
