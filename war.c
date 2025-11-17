/**
 * Desafio: Nível Novato - Jogo War Estruturado (Etapa 1)
 * Objetivo: Implementar o cadastro de territórios usando structs em C.
 *
 * Este programa permite ao usuário cadastrar 5 territórios, informando
 * nome, cor do exército e quantidade de tropas. Ao final, exibe
 * uma lista com todos os territórios cadastrados.
 */

// 1. Bibliotecas necessárias
// stdio.h: Para funções de entrada e saída (printf, scanf)
// string.h: Incluída conforme requisito (embora não estritamente usada nesta
// solução com scanf)
#include <stdio.h>
#include <string.h>

// 2. Definição da struct
// Documentação: Criação da estrutura 'Territorio'.
// Esta estrutura agrupa os dados de um território do jogo.
struct Territorio {
    char nome[30];  // Nome do território (ex: "Brasil")
    char cor[10];   // Cor do exército que o ocupa (ex: "Verde")
    int tropas;     // Quantidade de tropas no território
};

// --- Função Principal ---
int main() {
    
    // 3. Declaração de vetor de structs
    // Documentação: Cria um vetor (array) chamado 'territorios' capaz de
    // armazenar 5 elementos do tipo 'struct Territorio'.
    struct Territorio territorios[5];

    // Variável de controle para os laços (loops)
    int i;

    // --- 4. Entrada dos dados ---
    // Documentação: Laço 'for' para preencher os dados dos 5 territórios.
    // O laço executa 5 vezes (de i=0 até i=4).
    printf("--- Cadastro de Territorios (War) ---\n");
    printf("Por favor, insira os dados dos 5 territorios.\n");

    for (i = 0; i < 5; i++) {
        // Mensagem clara para o usuário (Usabilidade)
        printf("\n--- Territorio %d ---\n", i + 1);

        // Documentação: Leitura do Nome.
        // Usamos " %[^\n]" para ler strings com espaços usando scanf.
        // O espaço antes do '%' é crucial para consumir o '\n' (Enter)
        // deixado pela leitura anterior (do scanf de 'tropas').
        printf("Digite o nome: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Documentação: Leitura da Cor.
        // Como 'cor' é uma palavra única (ex: "Azul"), usamos "%s".
        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        // Documentação: Leitura do número de Tropas.
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // --- 5. Exibição dos dados ---
    // Documentação: Laço 'for' para percorrer o vetor e exibir os
    // dados de cada território cadastrado.
    printf("\n\n--------------------------------------");
    printf("\n--- Territorios Cadastrados ---\n");
    printf("--------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor: %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
    }

    return 0; // Indica que o programa terminou com sucesso
}