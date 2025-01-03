// #include <stdio.h>
// int main(){
//     int idade;
//     float peso;
//     char nome[]= "camila";
//     idade= 15;
//     peso = 80.1;
//     printf("a idade da %s é %d anos e seu peso é %1.f kg.",nome,idade,peso);
//     return 0;
// }

// #include <stdio.h>
// int main (){
//     int numero;
//     printf("insira um número inteiro:\n");
//     scanf("%d", &numero);
//     printf("o valor informado foi %d\n",numero);
//     return 0;
// }

// #include <stdio.h>
// int main(){
// float dividendo, divisor;
// printf("Entre com dois numeros reais:\n");
// scanf("%f %f", &dividendo, &divisor);
// printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);
// return 0;
// }

// #include <stdio.h>
// int main(){
// char ch1, ch2;
// printf("Entre com duas letras:\n");
// scanf("%c", &ch1);
// scanf("%c", &ch2);
// printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
// return 0;
// }

// #include <stdio.h>
// int main(){
// char inicial;
// int idade;
// printf("Entre com a sua idade e a sua inicial:\n");
// scanf(" %d %c", &idade, &inicial);
// fflush(stdin); 
// printf("Voce tem %d anos e seu nome comeca com %c\n",idade, inicial);
// return 0;
// }

// #include <stdio.h>
// int main(){
//     int idade;
//     char inicial;
//     printf("digite a sua idade e a sua inicial\n");
//     scanf("%d", &idade);
//     scanf(" %c", &inicial);
//     printf("sua idade é %d anos e sua inicial é %c\n", idade,inicial);
//     return 0;
// }

#include <stdio.h>

int main(){
    char nome[100];           // Para armazenar o nome completo do usuário
    int idade;                // Para armazenar a idade
    float altura, pesoIdeal;  // Para armazenar a altura e o cálculo do peso ideal

    // Solicita o nome completo
    printf("digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);  // Usa fgets para ler uma linha inteira, incluindo espaços

    // Solicita a idade
    printf("digite sua idade: ");
    scanf("%d", &idade);   // Lê um número inteiro e armazena em 'idade'

    // Solicita a altura
    printf("digite a sua altura (em metros): ");
    scanf("%f", &altura);  // Lê um número de ponto flutuante e armazena em 'altura'

    // Cálculo do peso ideal (fórmula: Peso Ideal = 22 * (altura)^2)
    pesoIdeal = 22 * altura * altura;

    // Exibe as informações formatadas
    printf("Olá! seu nome é %s\n", nome);  // Exibe o nome (com a quebra de linha)
    printf("Sua idade é de %d anos, e sua altura é %.2f metros e seu peso ideal é aproximadamente de %.2f kg.\n", idade, altura, pesoIdeal);  // Exibe a idade, altura e peso ideal formatados

    return 0;   // Finaliza o programa
}

// #include <stdio.h>

// int digitoRaiz (int n){ //recebe o argumento do tipo inteiro + nome da variavel (n)
//     while(n>=10){  //enquanto a variável for maior ou igual a 10 (numero de um digito, de 10 em diante) faça as somas. Continua enquanto o número tiver mais de um dígito.
//     int sum=0;   // Inicializa a soma dos dígitos. A variável sum é inicializada em 0 a cada iteração.
//     while (n > 0){ // Loop para extrair e somar os dígitos
//     sum += n%10; // Adiciona o último dígito à soma
//     n /=10; // Remove o último dígito do número
//     }
//     n = sum; // Atualiza o número com a soma calculada. Após a soma de todos os dígitos, n é atualizado para sum, e o processo se repete até que n seja um único dígito.
//     }
//     return n; // Retorna o dígito raiz. Quando n é menor que 10, o loop para, e n (o dígito raiz) é retornado.
// }

// int main(){
//     int n;
//      while (1) { //O loop while (1) permite ler entradas indefinidamente.  Lê números até que n seja igual a 0
//         scanf("%d", &n); // Lê um número inteiro
//         if (n == 0) break;  // A condição if (n == 0) break; interrompe o loop quando 0 for lido.

//         printf("%d\n", digitoRaiz(n));  // Imprime o dígito raiz
//     }

//     return 0;
// }