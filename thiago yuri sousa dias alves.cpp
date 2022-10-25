#include <stdio.h>
#include <math.h>

int main(){

char questao;
char nome[15];
float catetoOposto, catetoAdjascente, hipotenusa, oposto, adjascente;
int ano;

printf("Disciplina : Algoritimo e Programaçao \n ");
printf("Professor : joyce Siqueria \n ");
printf("Aluno : Thiago Yuri Sousa Dias Alves \n");
printf("Matricula ; uc22200046 \n");
printf("Software : VScode \n");

printf("Ola, escolha uma questao entre A, B ou C. \n");
scanf("%c", &questao);

switch (questao){
    case 'A': 
printf(" Vamos aos calculos! digite o valor do cateto oposto: \n ");      
scanf("%f", &catetoOposto);    
 printf("Agora digite o valor do cateto adjascente: \n ");     
  scanf("%f", &catetoAdjascente);
       
adjascente = pow(catetoAdjascente,2);
 oposto = pow(catetoOposto, 2);
 hipotenusa = sqrt(oposto + adjascente ); 

  printf("O trinagulo de cateto oposto %.3f e catetO adjascente %.3f os seguintes valores \n", oposto, adjascente);      
  
  printf("Hipotenusa: %.3f", hipotenusa);
  break;

  case 'B' : 
  printf("vamos descobrir de voce nasceu em um ano bissexto? digite seu nome: \n");     
   scanf("%s", &nome);     
    printf("Agora %s, digite o ano de seu nascimeto! Com 4 digitos: \n");     
    scanf("%d", &ano);
  if (ano % 4 == 0 && ano % 100 !=0)  
	{ 
     printf("Olha que coisa boa %s, voce nasceu em %i um ano bissexto", nome, ano);  
	}   
      else if( ano % 4 == 0 && ano % 100 == 0 & ano % 400 == 0)
        
        printf("Temos uma noticia boa para voce %s, voce nasceu em um ano bissexto:", nome);
        
        else if ( ano % 4 != 0)   
        printf("O ano de seu nascimento nao e bissexto");   
    
        break;

case 'C': printf("Em manutençao, tente novamente mais tarde. \n");  break; 

default: printf("Opçao ivalida, escolha uma opçao entre A, B ou C \n");  break;


}

}
