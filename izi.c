#include <stdio.h>
#define TAM 50
#define MAX_STRING 100



typedef struct Pessoa {
char nome[MAX_STRING];
int id;
int cpf;
int datans;
}TPessoa;


    TPessoa pessoas[TAM]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};





void menu(TPessoa pessoas[], int pe_pessoas) {





}





void cadastro(TPessoa pessoas[], int pe_pessoas) {
int i;
int j;














     for (i=0; i<pe_pessoas; i++) {



     printf(" se vc quiser parar de cadastrar alunos digite 0, se quer continuar digite 1:\n");
     fflush(stdin);
     scanf("%d",&j);

	     if(j==0)
	    {
	      return main();
		}


   printf("Entre com o nome:\n");
   scanf( "%s", &pessoas[i].nome);
   getchar();





   printf("Entre com a identidade:\n");
   fflush(stdin);
   scanf(" %d", &pessoas[i].id);



   printf("Entre com o cpf:\n");
   fflush(stdin);
   scanf(" %d", &pessoas[i].cpf);



   printf("Entre com a data de nascimento:\n");
   fflush(stdin);
   scanf(" %d", &pessoas[i].datans);

   printf("parabens cadastro concluido\n");


   }


}



void listar(TPessoa pessoas[]){

int i,j;


              for(i=0;i<TAM;i++)
			{
		      if(pessoas[i].cpf>0){
			        printf("nome:%s\n  identidade:%d\n cpf:%d\n data de nascimento:%d\n",pessoas[i].nome, pessoas[i].id, pessoas[i].cpf , pessoas[i].datans);

				}

			else{
                printf("nenhum usuario cadastrado:\n");



			}


			}

             printf(" para voltar para o menu digite 0:\n");
             fflush(stdin);
             scanf("%d",&j);

	            if(j==0)
	          {
	             return main();
		         }









}










void pesquisa(TPessoa pessoas[]){


       char w[TAM];
	int r,i,j;
		printf("digite o nome do aluno que vc quer pesquisar\n");
		fflush(stdin);
		gets(w);
			for(i=0;i<TAM;i++)
				{

				r=strcmp(w,pessoas[i].nome);
				if( r==0){
					printf("nome:%s\n  identidade:%d\n cpf:%d\n data de nascimento:%d\n",pessoas[i].nome, pessoas[i].cpf,pessoas[i].id,pessoas[i].datans);

					}
				else{


				printf("nao existe nenhum cadastro com esse nome.\n");

				}

				}


                   printf(" se vc quiser voltar para o menu digite 0,para continuar a pesquisa 1:\n");
                   fflush(stdin);
                   scanf("%d",&j);

	                    if(j==0)
	                {
	                  return main();
		             }

                    if(j==1)
                    {
                        return  pesquisa( pessoas);
                    }
}


void atualizar(TPessoa pessoas[]){


        int x[TAM],i,v,j;
		printf("digite o id do estudante");
		scanf("%d",&v);
			for(i=0;i<TAM;i++)
				{
				if(v==pessoas[i].id){
				printf("digite o novo nome do estudante\n");
				fflush(stdin);
				gets(pessoas[i].nome);
				printf("digite o novo cpf do estudante\n");
				fflush(stdin);
				scanf("%d",&pessoas[i].cpf);
				printf("digite a nova data de nascimento  do estudante\n");
				fflush(stdin);
				scanf("%d",&pessoas[i].datans);
				printf("cadastro atualizado!\n");
				}
     }

             printf(" se vc quiser voltar para o menu digite 0:\n");
             fflush(stdin);
             scanf("%d",&j);

	            if(j==0)
	          {
	             return main();
		         }

               if(j==1)
                    {
                        return  atualizar( pessoas);
                    }






}









void remover(TPessoa pessoas[]){

int i,j,v;

		printf("digite o cpf do estudante");
		scanf("%d",&v);
			for(i=0;i<TAM;i++)
				{
				if(v==pessoas[i].cpf){
					pessoas[i].cpf=0;



						}
				}
		printf("cadastro apagado\n");




             printf(" se vc quiser voltar para o menu digite 0:\n");
             fflush(stdin);
             scanf("%d",&j);

	            if(j==0)
	          {
	             return main();
		         }

               if(j==1)
                    {
                        return  remover( pessoas);
                    }




}




int main(){

    int i;
    int escolha;
    int pe_pessoas=50;



       while(escolha!=6){
       printf("CADASTRO DE PESSOAS(limite-50):\n");
       printf("\n1-Cadastrar\n");
       printf("\n2-Listar\n");
       printf("\n3-Pesquisar\n");
       printf("\n4-Atualizar\n");
       printf("\n5-Remover\n");
       printf("\n6-Sair\n");
       printf("\ndigite qual opcao voce deseja:\n");
       scanf("%d", &escolha);

          if(escolha==1){



             cadastro( pessoas, pe_pessoas);


          }


         if(escolha  ==2){
	           listar( pessoas);
         }

            if(escolha ==3){

                 pesquisa( pessoas);

                  }

            if(escolha==4){

                atualizar( pessoas);

               }

           if(escolha==5){

            remover( pessoas);

           }


}
    return 0;
}
