#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
int n = 10;
  while(n!=0){
      printf("digite um numero de 1 a 9\n");
      scanf("%d", &n);
      switch(n){
        case 0:
        	printf("erro \n");
        	return 0;
			break;
        case 1:{		
        	int fat = 0;
			int num = 0;	
			printf("digite um valor para saber seu fatorial\n");
			scanf("%d", &num);
			int novo_n = num;
			for(fat = 1; num > 1; num = num - 1)
			fat = fat * num;
			printf("o fatorial de %d e %d\n", novo_n, fat);
        	return 0;
			break;
		}
        case 2:{
        	int n = 0;
  			printf("digite um numero inteiro positivo para saber se ele e primo2\n");
  			scanf("%d",&n);
			if(n<0){
  			printf("numero invalido.");
  			return 0;
			}
			if(n==2){
  			printf("O numero %d e primo" , n);
  			return 0;
			}
			if(n==1 && n==0){
  			printf("O numero %d nao e primo." , n);
  			return 0;
			}
			int div = n % 2;
			if(div == 1)
   			printf("O numero %d e primo." , n);
			else
   			printf("O numero %d nao e primo." , n); 
			return 0;
			break;
		}
        case 3:
    		printf("nao fiz*-*\n");
        	return 0;
			break;
        case 4:{
			int a;
 			float b;
 			printf("digite um numero inteiro para a base\n");
 			scanf("%d" ,&a);
 			printf("digite um numero fracionado para o expoente\n");
 			scanf("%f" ,&b);
 			float pot = (pow(a,b));
 			printf("%.1e" ,pot);
			return 0;
			break;
		}
          
        case 5:
          printf("nao fiz *-*\n");
          return 0;
		  break;
        case 6:{
			int ano = 0;
			printf("digite o ano para saber se ele e bissexto\n");
			scanf("%d", &ano);
			int ano_b = ano % 4;
			if (ano_b == 0){
			printf("O ano e bissexto");
			}
			else
			printf("O ano nao e bissexto");
			return 0;
			break;        	        	
		}
        case 7:
        	float nota1;
			float nota2;
			float media;
			printf("digite a primeira nota\n");
			scanf("%f", &nota1);
			if(nota1<0 || nota1>10){
			printf("erro primeira nota invalida");	
			return 0;
			}
			printf("digite a segunda nota\n");
			scanf("%f", &nota2);
			if(nota2<0 || nota2>10){
			printf("erro segunda nota valida");	
			return 0;
			}	
			media = (nota1 + nota2)/2;
			printf("%.1f", media);
	
			return 0;
			break;
        case 8:{
			float n1;
			float n2;
			float n3;
			printf("media do aluno\n");
			printf("digite a primeira nota\n");
			scanf("%f", &n1);
			if(n1<0){
			printf("erro");
			return 0;
			}
			printf("digite a segunda nota\n");
			scanf("%f", &n2);
			if(n2<0){
			printf("erro");
			return 0;
			}	
			printf("digite a terceira nota\n");
			scanf("%f", &n3);
			if(n3<0){
			printf("erro");
			return 0;
			}
			float m = ((n1 + n2)+n3)/2;
			printf("a media e %.1f\n", m);
			if(m>60){
			printf("aprovado");
			}
			else
			printf("reprovado");
			return 0;
			break;
		}
        case 9:{
			char nome[50];
			int ma = 0;
			char mH[10];
			printf("digite o nome do aluno\n");
			scanf("%s" , &nome);
			printf("digite a matricula do aluno\n");
			scanf("%d" , &ma);
			printf("aluno:%s",nome);
			sprintf(mH,"%X",ma);
			printf("\nmatricula:%s" ,mH);	
			return 0;
			break;
		}
        default :
          printf("erro\n");
          return 0;

      }
    
  }
  return 0;
}
