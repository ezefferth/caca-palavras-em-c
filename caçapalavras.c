
	
/*
    Author Ezefferth C A Fernandes
    UFMT - VG
    Caça palavras em C

*/

#include <stdio.h>

int main(){
    int i, j, w, p=0, tam, i_inicial, j_inicial, i_final, j_final, ii, jj; /* variaveis = 'p' para o tamanho da palavra a ser buscada
    e 'tam' para o tamanho da matriz */
    scanf("%d",&tam); /* recebe o tamanho da matriz */
    char mat[tam][tam]; /* 'mat declarado como matriz de tamanho 'tam'x'tam' */
    char str[tam]; /* vetor de string onde sera posto a palavra a ser buscada */
    for(i=0;i<tam;i++){ /* um for para colocar as strings linha por linha formando a matriz */
        scanf(" %[^\n]s", mat[i]); /* scanf onde sera posto a string sendo ela com uma fun��o [^\n]
        *//*                           que faz com que o scanf leia letras apos o espa�o do teclado */
    }
    scanf("%s",str); /* str recebera a palavra a ser buscada */
    for(i=0;str[i]!='\0';i++){ /* onde str[i] seja diferente de espa�o vazio p recebe 1 */
        p++; /* um contador para o tamanho da palavra */
    }
    for(ii=0;ii<tam;ii++){ /* matriz para verificacao nas posicoes i e j da matriz */
        for(jj=0;jj<tam;jj++){

            i_inicial=ii; /* salva as posi��es iniciais */
            j_inicial=jj;/*          'i' e 'j'          */
            i=ii;
            j=jj;
            w=0; /* auxiliar w para a contagem de 0 ate o tamanho da palavra */
            while(w<p && mat[i][j]==str[w]){/* procura para direita */
                i_final=i; /* salva as posicoes finais */
                j_final=j; /*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                j++; /* 'j' anda 1 para direita */
                if(j==tam) /* se j for o tamanho matris ele volta para o 0 verificando a borda */
                    j=0;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura para esquerda */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                j--; /* 'j' anda 1 para esquerda */
                if(j<0) /* se j for menor que 0 ele verifica a borda, ou seja o final da matriz, sendo tam-1 */
                    j=tam-1;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura para baixo */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i++; /* 'j' anda 1 para baixo */
                if(i==tam) /* se i for == a tam, ele volta a borda 0 para verificacao  */
                    i=0;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura para cima */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i--; /* 'i' anda 1 para cima */
                if(i<0) /* se i for < 0, ele volta a borda tam-1 para verificacao  */
                    i=tam-1;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura na diagonal direita baixo */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i++; /* 'i' anda 1 para baixo */
                j++; /* 'j' anda ' para direita */
                if(i==tam) /* se i == tam ele volta a borda 0 para verifica�ao  */
                    i=0;
                if(j==tam) /* se j == tam ele volta a borda 0 para verifica�ao  */
                    j=0;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura na diagonal esquerda cima */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i--; /* i anda para cima */
                j--; /* 'j' anda para esquerda */
                if(i<0)     /* se i for < 0, ele volta a borda tam-1 para verificacao  */
                    i=tam-1;
                if(j<0)      /* se j for < 0, ele volta a borda tam-1 para verificacao  */
                    j=tam-1;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura na diagonal esquerda baixo */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i++; /* 'i' anda 1 para baixo */
                j--; /* 'j' anda para esquerda */
                if(i==tam) /* se 'i' for o tamanho matriz ele volta para o 0 verificando a borda */
                    i=0;
                if(j<0)
                    j=tam-1;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }
            i=ii;
            j=jj;
            w=0;
            while(w<p && mat[i][j]==str[w]){/* procura na diagonal direita cima */
                i_final=i;/* salva as posicoes finais */
                j_final=j;/*    i final e j final   */
                w++; /* encremento do w para verificar a proxima casa do vetor da palavra */
                i--; /* anda para cima */
                j++; /* anda para direita */
                if(i<0)  /* se i for < 0, ele volta a borda tam-1 para verificacao  */
                    i=tam-1;
                if(j==tam) /* se j for o tamanho matriz ele volta para o 0 verificando a borda */
                    j=0;
                if(w==p){/* se encremento w for = p(tamanho da palavra) eh pq achou todas as letras da string a ser buscada */
                    printf("(%d,%d) ",i_inicial,j_inicial); /* printa as primeiras posicoes */
                    printf("(%d,%d)\n",i_final,j_final); /* printa as ultimas posicoes da palavra */
                }
            }

        }/* fecha o for do j */

    } /* fecha o for do i */

    return 0;
}

ca�apalavras.c
Exibindo ca�apalavras.c.