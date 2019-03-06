#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*

//---EX1---

int main()
{
    int i, n[5];
    for(i=0;i<5;i++){
        printf("Digite um numero: \n");
        scanf("%d",&n[i]);
        printf("O quadrado de %d = %d\n",n[i],n[i]*n[i]);
    }
    return 0;
}

//---EX2---

int main()
{
    int i;
    for(i=1;i<11;i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
}

//---EX3---

int main()
{
    int i;
    for(i=1;i<201;i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
}

//---EX4---

int main()
{
    int i=0;
    do{
        i=i+5;
        printf("%d\n",i);
    }while(i!=500);
}

//---EX5---

int main()
{
    int i,contador=0;
    for(i=1;i<101;i++){
        contador = contador+i;
        printf("Numero: %d Soma: %d\n",i,contador);
    }
}

//---EX6---

int main()
{
    int i;
    float n[10];
    for(i=0;i<10;i++){
        printf("Digite um numero: \n");
        scanf("%f",&n[i]);
        printf("Ametade de %.1f = %.1f\n",n[i],n[i]/2);
    }
    return 0;
}

//---EX7---

int main()
{
    int i, n[10];
    for(i=0;i<10;i++){
        printf("Digite um numero: \n");
        scanf("%d",&n[i]);
        printf("O quadrado de %d = %d\n",n[i],n[i]*n[i]);
    }
    return 0;
}

//---EX8---

int main()
{
    int i;
    float n[15];
    for(i=0;i<15;i++){
        printf("Digite um numero: \n");
        scanf("%f",&n[i]);
        printf("A raiz de %.2f = %.2f\n",n[i],sqrt(n[i]));
    }
    return 0;
}

//---EX9---

int main()
{
    int i;
    float c = 0;
    printf("| Centimetro     | Polegada \n");
    printf("----------------------------\n");
    for(i=1;i<21;i++){
        c = c + 2.54;
        printf("| %.2f\t\t | %d\n", c,i);
    }
    printf("----------------------------\n");
}

//---EX10---

int main()
{
    float i,inf,sup,f;

    printf("Digite o limite inferior: ");
    scanf("%f",&inf);
    printf("Digite o limite Superior: ");
    scanf("%f",&sup);
    printf("-------------------------------\n");
    printf("| Celsius        | Fahrencheit \n");
    printf("-------------------------------\n");
    for(i=inf;i<sup;i++){
        f = (i * 9/5)+32;
        printf("| %.1f\t\t | %.2f\n", i,f);
    }
     printf("-------------------------------\n");
}

//---EX11---

int main()
{
    int vet[6],n,i;
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
    }
    for(n=0;n<5;n++){
        for(i=1;i<5;i++){
            if(vet[n]<=vet[i]){
                vet[n]= vet[i];
            }
        }
    }
    printf("Maior Valor: %d\n",vet[0]);
}

//---EX12---

int main()
{
    int x,n,i,maior,menor;
    printf("Quantos numeros voce deseja digitar: \n");
    scanf("%d",&x);
    printf("Digite um numero: ");
        scanf("%d",&n);
        maior=n;
        menor=n;
    for(i=0;i<x-1;i++){
        printf("Digite outro numero: ");
        scanf("%d",&n);
        if(n>maior){
            maior=n;}
        if(n<menor){
            menor=n;}
    }
    printf("Maior Numero: %d\nMenor Numero: %d\n", maior, menor);
}

//---EX13---

int main()
{
    int i,n,soma=0;
    for(i=0;i<20;i++){
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(n*n<=225){
            soma=soma+n;
        }
    }
    printf("A soma dos numeros e = %d",soma);
}

//---EX14---

int main()
{
    int i;
    char nome[20];
    printf("Qual seu nome? ");
    gets(nome);
    for(i=0;i<strlen(nome);i++){
        printf("%d - %s\n", i+1, nome);
    }
}

//---EX15---

main()
{
    int x,i;
    char nome[20];
    printf("Digite uma palavra: ");
    gets(nome);
    x=strlen(nome);
    for(i=x;i>=0;i--){
        printf("%s\n", &nome[i]);
    }
}

//---EX16---

main()
{
    int i;
    char frase[50];
    printf("Digite qualquer coisa: \n");
    gets(frase);
    for(i=0;i<50;i++){
        if(frase[i]=='a'){
            frase[i]='x';
        }
        if(frase[i]=='e'){
            frase[i]='y';
        }
        if(frase[i]=='i'){
            frase[i]='w';
        }
        if(frase[i]=='o'){
            frase[i]='k';
        }
        if(frase[i]=='u'){
            frase[i]='z';
        }
    }
    printf("%s",frase);
}

//---EX17---

int main()
{
    int a=0,b=0,c=0,d=0,soma4=0,soma3=0,soma2=0,soma1=0,idade,i,peso,d1a10[20],d11a20[20],d21a30[20],maisd30[20];
    for(i=0;i<5;i++){
        printf("Qual sua idade: ");
        scanf("%d",&idade);
        printf("Seu peso: ");
        scanf("%d",&peso);
        if(idade<=10){
            a=a+1;
            d1a10[i]=peso;
        }
        if(idade<=20){
            b=b+1;
            d11a20[i]=peso;
        }
        if(idade<=30){
            c=c+1;
            d21a30[i]=peso;
        }
        else{
            d=d+1;
            maisd30[i]=peso;
        }
    soma1=soma1+d1a10[i];
    soma2=soma2+d11a20[i];
    soma3=soma3+d21a30[i];
    soma4=soma4+maisd30[i];
    }
    printf("A media do peso de 1 a 10 anos e: %d\n",soma1/a);
    printf("A media do peso de 11 a 20 anos e: %d\n",soma2/b);
    printf("A media do peso de 21 a 30 anos e: %d\n",soma3/c);
    printf("A media do peso de mais que 30 anos e: %d\n",soma4/d);
}

//---EX18---

int main()
{
    int n,contador=0;
    do{
        printf("Digite um numero: ");
        scanf("%d",&n);
        contador=contador+1;
        if(n<0){
            n=-1;
        }
    }while(n!=-1);
    printf("Foram digitados %d numero positivos!",contador-1);
}

//---EX19---

int main()
{
    int n,contador=0;
    do{
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(n>=100 && n<200){
            contador=contador+1;
        }
    }while(n!=0);
    printf("Foram digitados %d entre 100 e 200!",contador);
}

//---EX20---

int main()
{
    int i,x=0,n;
    float vet[10];
    do{
        printf("Digite um numero: \n");
        scanf("%d",&n);
        if(n>=0){
            vet[x]=n;
            x=x+1;
        }
        else{
            printf("Apenas numeros Positivos!!!\n");
        }
    }while(x!=10);
    for(i=0;i<10;i++){
        printf("A raiz de %.0f e %.1f\n",vet[i],sqrt(vet[i]));
    }
    return 0;
}

//---EX21---

int main()
{
    int x,n;
    while(x!=1){
        printf("Digite um numero: \n");
        scanf("%d",&n);
        if(n<=1){
            x=1;
            system("CLS");
        }
        else{
            printf("O fatorial de %d e %d\n",n,fatorial(n));
        }
    }
    printf("Fim de programa!");
}
int fatorial(int num) {
    if (num >= 0) {
        int fat = 1;
        while (num > 0) {
            fat *= num;
            num--;
        }
        return fat;
    } else {
        return -1;
    }
}

//---EX22---

int main()
{
    int n,i,resp=0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            resp++;
            break;
        }
    }
    if(resp==0)
        printf("%d e um numero primo\n", n);
    else
        printf("%d nao e um numero primo\n", n);
 return 0;
}

//---EX23---

int main()
{
	char nome1[50], nome2[50];
	int cont = 0, i = 0, j = 0, k = 0, flag = 0;
	printf("Digite algo: \n");
	gets(nome1);
	printf("Digite novamente: \n");
	gets(nome2);
    for(i=0;i<strlen(nome1);i++){
        printf(" %c %d\n",nome1[i],&nome1[i]);
	}
	printf("\n\n");
	for(i=0;i<strlen(nome2);i++){
        printf(" %c %d\n",nome2[i],&nome2[i]);
	}
	while(nome1[i] != '\0'){
		if(nome1[i] == nome2[0]){
			for(j=0,k=i;j<=strlen(nome2)-1;j++,k++){
                if(nome1[k] == nome2[j]){
                    cont = cont + 1;
                    if (cont == strlen(nome2)){
                        printf("\n\nCONTEM - ENDERECO: %d",&nome1[k]-cont+1);
                        flag=flag+1;
                        break;
                    }
                }
            }
		}
		if (cont == strlen(nome2))
            break;
		cont=0;
		i++;
	}
    if(flag==0)
        printf("NULL");
}

//---EX24---

*strpos(char x,char *frase){
	char *ptr1 = frase;
	while(*ptr1 != x){
		ptr1++;
	}
	return ptr1;
}
int main()
{
    int i;
    char *ptr;
	char letra;
	char frase[20];
	printf("Digite uma String ");
	gets(frase);
	printf("Digite uma letra: ");
	scanf("%c",&letra);
    for(i=0;i<strlen(frase);i++){
        printf(" %c %d\n",frase[i],&frase[i]);
    }
	printf("\nA letra: (%c) esta na posicao: %d\n",letra,strpos(letra,frase));
}

//---EX25---

char *strcpy(char* origem,char *destino){
	int i;
	for(i=0;origem[i]!='\0';i++)
		destino[i] = origem[i];
	destino[i] = '\0';
	return destino;
}
int main(int argc, char *argv[]) {
	char origem[50];
	char destino[50];
	printf("\nDigite uma palavra:");
	gets(origem);
	printf("\nDigite a palavra que sera substituida: ");
	gets(destino);
	printf("\nANTES: %s",destino);
	printf("\nDEPOIS: %s",strcpy(origem,destino));
}

*/
