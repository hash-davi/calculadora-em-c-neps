#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void mainMenu();
void operationChoice();
void add();
void subtract();
void multiply();
void divide();
void anotherOperation();
void leave();

int main(){
    setlocale(LC_ALL, "portuguese");

    mainMenu();
    leave();

	return 0;
}

void mainMenu() {
    printf ("===============================\n"
            "   Calculadora Simples\n"
            "===============================\n");


    operationChoice();
}

void operationChoice() {
    int operation;
    printf("Selecione uma operação:\n"
            "1. Adição\n"
            "2. Subtração\n"
            "3. Multiplicação\n"
            "4. Divisão\n"
            "5. Sair\n"
            "Opção:"
            );

    scanf("%d", &operation);

    switch(operation){
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            leave();
            break;
        default:
            printf("Você digitou uma opção inválida!\nPor favor, tente novamente.\n");
            operationChoice();
            break;
    }

    anotherOperation();
}

void add() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%lf", &number1);
    printf("Digite o segundo número: ");
    scanf("%lf", &number2);

    double resultado = number1 + number2;

    printf("Resultado: %.2lf + %.2lf = %.2lf\n", number1, number2, resultado);
}

void subtract() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%lf", &number1);
    printf("Digite o segundo número: ");
    scanf("%lf", &number2);

    double resultado = number1 - number2;

    printf("Resultado: %.2lf - %.2lf = %.2lf\n", number1, number2, resultado);
}

void multiply() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%lf", &number1);
    printf("Digite o segundo número: ");
    scanf("%lf", &number2);

    double resultado = number1 * number2;

    printf("Resultado: %.2lf * %.2lf = %.2lf\n", number1, number2, resultado);
}

void divide() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%lf", &number1);
    printf("Digite o segundo número: ");
    scanf("%lf", &number2);

    if (number2 == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        operationChoice();
    }

    double resultado = number1 / number2;

    printf("Resultado: %.2lf / %.2lf = %.2lf\n", number1, number2, resultado);
}

void anotherOperation() {
    char choice;

    while((choice = getchar()) != '\n' && choice != EOF);

    printf("Deseja realizar outra operação? (s/n):");
    choice = getchar();

    switch(tolower(choice)) {
        case 's':
            system("cls");
            mainMenu();
            break;
        case 'n':
            leave();
            break;
        default:
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            anotherOperation();
            break;
    }
}

void leave() {
    printf("Obrigado por usar a calculadora! Até a próxima.");
    exit(0);
}
