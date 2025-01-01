# Atividades de Programação em C - Faculdade

Este repositório contém as atividades realizadas na disciplina de Programação em C da faculdade. As atividades abordam conceitos fundamentais da linguagem C, como manipulação de variáveis, controle de fluxo (condicionais e loops), uso de funções, manipulação de strings, ponteiros e structs.

## Atividades

### 1. **Atividade 1 - Manipulação de Ponteiros**
   - **Descrição:** Nesta atividade, foi utilizado ponteiros para manipular valores em memória e realizar operações de atribuição de variáveis.
   - **Código:**
     ```c
     #include <stdio.h>
     #include <stdlib.h>

     int main () {
         int x;
         int *y;

         printf("Informe um número:\n");
         scanf("%d", &x);

         y = &x;
         *y = 12;

         y = y + 1;
         *y = *y + 5;

         printf("O valor de x é %d\n", x);
         return 0;
     }
     ```
   - **Objetivo:** Demonstrar o uso de ponteiros para modificar o valor de uma variável através de seu endereço de memória.

### 2. **Atividade 2 - Agendamento de Consultas**
   - **Descrição:** Criamos um sistema simples de agendamento de consultas em uma clínica. O programa permite que o usuário agende consultas, verificando a disponibilidade de horários e listando os agendamentos.
   - **Código:**
     ```c
     #include <stdio.h>
     #include <stdlib.h>
     #include <locale.h>
     #include <stdbool.h>

     struct Consulta {
         char nome[100];
         int dia;
         int hora;
     };

     struct Consulta agenda[300];
     int qtdAgendamento;

     bool verificarDisponibilidade(int diaAgenda, int horaAgenda) {
         if(horaAgenda < 8 || horaAgenda >20){
             printf("Clínica fechada neste horário\n");
             return false;
         }
         return true;
     }

     void agendarConsulta() {
         int diaAgenda;
         printf("Qual dia do mês você quer agendar?\n");
         fflush(stdin);
         scanf("%d", &diaAgenda);

         int horaAgenda;
         printf("Qual hora do dia você quer agendar?\n");
         fflush(stdin);
         scanf("%d", &horaAgenda);

         if(verificarDisponibilidade(diaAgenda, horaAgenda)) {
             printf("Horário disponível\n");
             printf("Vamos confirmar seu agendamento\n");
             agenda[qtdAgendamento].dia = diaAgenda;
             agenda[qtdAgendamento].hora = horaAgenda;
             printf("Qual seu nome?\n");
             fflush(stdin);
             gets(agenda[qtdAgendamento].nome);
             qtdAgendamento++;
             printf("Agendamento realizado!\n");
         } else {
             printf("Horário não disponível\n");
         }
     }

     void listarConsulta() {
         int i;
         for(i = 0; i < qtdAgendamento; i++) {
             printf("==============================\n");
             printf("Nome: %s\n", agenda[i].nome);
             printf("Dia: %d\n", agenda[i].dia);
             printf("Hora: %d\n", agenda[i].hora);
         }
     }

     void main() {
         setlocale(LC_ALL, "");
         int opcao;
         qtdAgendamento = 0;

         do {
             printf("Deseja uma opção desejada?\n");
             printf("1 - Agendar\n");
             printf("2 - Listar\n");
             printf("3 - Sair\n");
             fflush(stdin);
             scanf("%d", &opcao);

             switch(opcao) {
                 case 1:
                     agendarConsulta();
                     break;
                 case 2:
                     listarConsulta();
                     break;
                 case 3:
                     printf("Saindo do programa...\n");
                     break;
                 default:
                     printf("Opção inválida\n");
                     break;
             }
         } while (opcao != 3);
     }
     ```
   - **Objetivo:** Desenvolver um sistema de agendamento de consultas com verificação de horários e listagem dos agendamentos realizados.

### 3. **Atividade 3 - Controle de Idade e Condicionais**
   - **Descrição:** Este programa solicita a idade do usuário e exibe mensagens baseadas em condições especificadas, utilizando estruturas `if`, `else`, e `switch`.
   - **Código:**
     ```c
     #include <stdio.h>
     #include <stdlib.h>
     #include <locale.h>

     int main() {
         int idade = 0;
         setlocale(LC_ALL,"");

         printf("Olá, mundo!\n");

         printf("Digite a sua idade\n");
         scanf("%d", &idade);

         printf("A idade digitada foi %d\n", idade);

         if(idade >=18 && idade <25) {
             printf("Você é maior de idade, mas tem menos que 25 anos\n");
         } else {
             if (idade >= 25) {
                 printf("Você tem mais que 25\n");
             } else {
                 printf("Você é menor de idade");
             }
         }

         switch(idade) {
         case 1:
             printf("Idade é um");
             break;
         case 10:
             printf("Idade é dez");
             break;
         default:
             printf("Valor inválido");
             break;
         }

         printf("\n");
         return 0;
     }
     ```
   - **Objetivo:** Demonstrar o uso de condicionais para verificar faixas de idade e fornecer respostas apropriadas.

## Como rodar o código

1. **Pré-requisitos:**
   - Um compilador C, como o GCC, deve estar instalado no seu sistema.
   
2. **Compilação:**
   - Para compilar os códigos, use o seguinte comando:
     ```bash
     gcc nome_do_arquivo.c -o nome_do_programa
     ```

3. **Execução:**
   - Após compilar, execute o programa com:
     ```bash
     ./nome_do_programa
     ```

## Licença

Este repositório está sob a licença MIT. Consulte o arquivo `LICENSE` para mais detalhes.
