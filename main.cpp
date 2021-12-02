//@fatec - Victor Gabriel Gonçalves de Castro
//2840482113039
//Veja meu código no Repl: https://replit.com/@VictorCastro10/Atividadeee#main.cpp

#include <iostream>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>


using namespace std; 


int crip();
int descrip();
int exibir(); 

int main(void)
{

  int op; 

  do{
    
  cout << "\n\n- M E N U -\n";
  cout << "1 - Criptografar\n";
  cout << "2 - Descriptografar\n";
  cout << "3 - Exibir\n";
  cout << "9 - Sair\n";
  cout << "\nSelecione uma opção: "; 
  cin >> op; 

    switch(op)
    {
      case 1 : system("clear");crip(); 
      break; 
      case 2 : system("clear");descrip();
      break;
      case 3 : system("clear");exibir();
      break; 
      case 9 : system("clear");system("exit"); 
    }
  }while(op!=9);

  return 0; 
}




int crip(){

  FILE *arq; 
  arq = fopen("texto.txt","r"); 
  if(arq == NULL)
  {
    printf("Não foi possível ler o arquivo.\n");
    getchar();
  }
  char texto[100], c_texto[100], tam_texto; 
  fscanf(arq,"%s", texto);
  //printf("%s",texto);
  fclose(arq); 
  //...
  tam_texto = strlen(texto); 
  for(int i=0; i<tam_texto; i++)
  {
    c_texto[i] = texto[i] + 3; 
  }

  arq = fopen("texto.txt","w");
  fprintf(arq,"%s",c_texto);
  fclose(arq); 
  //printf("\n%s", c_texto);  
  printf("\n[i] - Arquivo criptografado com sucesso!!!\n\n");
  return 0; 
} 

int descrip()
{
  FILE *arq; 
  arq = fopen("texto.txt","r"); 
  if(arq == NULL)
  {
    printf("Não foi possível ler o arquivo.\n");
    getchar();
  }
  char texto[100], c_texto[100], tam_texto; 
  fscanf(arq,"%s", texto);
  printf("%s",texto);
  fclose(arq); 
  //...
  tam_texto = strlen(texto); 
  for(int i=0; i<tam_texto; i++)
  {
    c_texto[i] = texto[i] - 3; 
  }

  //printf("\n%s", c_texto);  
  arq = fopen("texto.txt","w");
  fprintf(arq,"%s",c_texto);
  fclose(arq); 
  printf("\n[i] - Arquivo descriptografado com sucesso!!!\n\n");
  return 0; 
}

int exibir()
{
  FILE *arq; 
  arq = fopen("texto.txt","r"); 
  if(arq == NULL)
  {
    printf("Não foi possível ler o arquivo.\n");
    getchar();
  }
  char texto[999];
  fscanf(arq,"%s", texto);
  printf("\n%s\n\n",texto);
  return 0; 
}