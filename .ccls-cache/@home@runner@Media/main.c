#include <stdio.h>

int main(void) {
  float nota1, nota2, media, maiorn, nf;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  
  media = (nota1 + nota2) / 2;
  printf("A média: %.0f", media);


  if(media >= 7){
    printf("\nAprovado");
  }
    
  else{
    printf("\nAbaixo da média,");
    
    if(media >= 5 && media <= 6){
      printf("está de recuperação, digite a nota da recuperação: ");
      scanf("%f", &nf);
      
      if (nota1 > nota2) 
        maiorn = nota1;
      
      else
        maiorn = nota2;
            
      media= (nf+maiorn)/2;
      
      if(media >= 7)
        printf("Media final: %.0f, aluno aprovado", media);
      
      else
        printf("Media final: %.0f, aluno reprovado", media);
        
    }
    else{
      printf("reprovado");
    }
  }
}