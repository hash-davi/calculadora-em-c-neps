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
            "===============================\n"
            "Selecione uma opera��o:\n"
            "1. Adi��o\n"
            "2. Subtra��o\n"
            "3. Multiplica��o\n"
            "4. Divis�o\n"
            "5. Sair\n"
            "Op��o:"
            );

    operationChoice();
}

void operationChoice() {
    int operation;

    choice:
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
            printf("Voc� digitou uma op��o inv�lida!\nPor favor, tente novamente.\n");
            goto choice;
            break;
    }

    anotherOperation();
}

void add() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &number1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &number2);

    double resultado = number1 + number2;

    printf("Resultado: %.2lf + %.2lf = %.2lf\n", number1, number2, resultado);
}

void subtract() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &number1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &number2);

    double resultado = number1 - number2;

    printf("Resultado: %.2lf - %.2lf = %.2lf\n", number1, number2, resultado);
}

void multiply() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &number1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &number2);

    double resultado = number1 * number2;

    printf("Resultado: %.2lf * %.2lf = %.2lf\n", number1, number2, resultado);
}

void divide() {
    double number1 = 0;
    double number2 = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &number1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &number2);

    if (number2 == 0) {
        printf("Erro: Divis�o por zero n�o � permitida.\n");
        mainMenu();
    }

    double resultado = number1 / number2;

    printf("Resultado: %.2lf / %.2lf = %.2lf\n", number1, number2, resultado);
}

void anotherOperation() {
    char choice;

    printf("Deseja realizar outra opera��o? (s/n):");
    scanf("%c", &choice);

    switch(tolower(choice)) {
        case 's':
            system("cls");
            mainMenu();
            break;
        case 'n':
            leave();
            break;
        default:
            printf("Resposta inv�lida. Por favor, digite 's' para sim ou 'n' para n�o.\n");
            anotherOperation();
            break;
    }
}

void leave() {
    printf("Obrigado por usar a calculadora! At� a pr�xima.");
    exit(0);
}
