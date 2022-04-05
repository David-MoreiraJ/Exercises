/*
Instituição: Cefet - Unidade Maracanã
Aluno: João Vitor dos Santos Soares
Professora: Carolina Aguilar
Exercício 5 - Cadastro de funcionários
*/

#include <stdio.h>

typedef struct { // Declaração da Struct que armazenará os dados dos funcionários.
    int departamento; // Departamento no qual o funcionário trabalha, valores possíveis: (1 - 20).
    int idade; // Idade do funcionário.
} Funcionarios; // Nome da estrutura.

typedef struct { // Declaração da Struct que armazenará os dados da contagem sobre quais funcionários possuem idade superior ou inferior à 45 anos.
    int maior; // Variável que será utilizada para contar quantos funcionários tem mais de 45 anos.
    int menor; // Variável que será utilizada para contar quantos funcionários tem idades menores ou iguais à 45 anos.
} Status; // Nome da estrutura.

void zera_vetor(Status pessoas[], int n){ // FUNÇÂO AUXILIAR Zera_vetor, usada para zerar o valor de maior e menor da Struct "Status".
    for (int i = 0; i < n; i++){
        pessoas[i].maior = 0;
        pessoas[i].menor = 0;
    }
    // Fim da função Zera_Vetor.
}

void inicializa(Funcionarios funcionario[], int qtde) { // FUNÇÃO OBRIGATÓRIA "inicializa", preenche o array de struct Funcionários.
    for (int i = 0; i < qtde; i++) {
        printf("i = %d. Qual o departamento do trabalhador em questao? (1 - 20)\n",i);
        scanf("%d", &funcionario[i].departamento); // Recebe o departamento no qual o funcionário trabalha.

        printf("i = %d. Qual a idade do trabalhador em questao?\n",i);
        scanf("%d", &funcionario[i].idade); // Recebe a idade do funcionário.
    }
    //Fim da Função Inicializa.
}

void exibe(Funcionarios funcionario[], int qtde){ // FUNÇÃO OBRIGATÓRIA "Exibe", conta quantos funcionários tem idades maiores ou menores do que 45 anos, para posteriormente exibir o resultado na saída padrão.
    
    Status pessoas[20]; // Declara um array da Struct "Status" com 19 posições.
    zera_vetor(pessoas,20); // Limpa o array, substituindo o lixo de memória por 0 nas váriaveis.

    for(int i = 0; i < qtde; i++){ // Loop que percorre todos os funcionários cadastrados e acrescenta ao vetor maior caso: idade > 45 e acrescenta ao vetor maior caso: idade <= 45.
        if(funcionario[i].idade > 45){
            pessoas[funcionario[i].departamento - 1].maior++; // Atribui à posição "Departamento - 1", pois arrays se iniciam com 0, enquanto a leitura de departamento é contada a partir do 1.
        }
        else{
            pessoas[funcionario[i].departamento - 1].menor++;
        }
    }

    printf("\n====== EXIBINDO RESULTADOS ======\n");
    for(int i = 0; i < 20; i++){
        if(pessoas[i].maior > 0 || pessoas[i].menor > 0){ // Exibe as informações sobre o departamento caso haja pelo menos um membro nele.
            printf("Departamento %d: Possui %d funcionario(s) com até 45 anos e %d funcionario(s) acima dos 45 anos.\n",i + 1, pessoas[i].menor, pessoas[i].maior);
        }
    }
    // Fim da função Exibe.
}

int main(void) {
    int qtde; // Quantidade de funcionários.

    printf("Insira a quantidade de funcionarios que serão cadastrados:");
    scanf("%d", &qtde);

    Funcionarios funcionario[qtde]; // Declara o Vetor de Struct com o tamanho da quantidade de funcionários.

    inicializa(funcionario, qtde); // Chama a função "Inicializa".
    exibe(funcionario,qtde); // Chama a função "Exibe".
    printf("====== FIM DO PROGRAMA ======\n");

    return 0;
}
