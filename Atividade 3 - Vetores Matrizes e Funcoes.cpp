#include <iostream>

using namespace std;

void questao1(){
	cout << "01. Jogo do 'PIM'. Realize a implementacao de um jogo que imprima na tela os valores de 1 a 50.\n"
			"    No entanto, os multiplos de 4 devem ser substituidos pela palavra PIM (resto da divisao por 4 e 0)." << endl;
	for (int i = 1; i <= 50; ++i) {
        if (i % 4 == 0) {
            cout << "PIM! " << endl;
        } else {
            cout << i << endl;
        }
    }
    
    cout << endl;
}

void questao2(){
	cout << "02. Solicite 20 valores inteiros e calcule as suas medias." << endl;
	int quantidadeDeNumeros = 20;
	int numeros[quantidadeDeNumeros];
	float soma = 0;

	for (int i = 0; i < quantidadeDeNumeros; i++) {
		cout << "Digite um numero: ";
		cin >> numeros[i];
		soma += numeros[i];
	}
	
	float media = soma/quantidadeDeNumeros;
	
	cout << "A media eh: " << media << endl << endl;
}

void questao3(){
	cout << "03. Realize a implementacao de um programa que solicite ao usuario o tanto de numeros que\n"
			"    ele quer informar. Apos isso realize a soma de todos os numeros pares que ele informou e imprima ao final." << endl;
	int quantidadeDeNumeros;
	int numero;
	int soma = 0;
	
    cout << "Quantos numeros deseja inserir? ";
    cin >> quantidadeDeNumeros;	
	
	for (int i = 0; i < quantidadeDeNumeros; i++){
        cout << "Digite um numero: ";
        cin >> numero;
        
        if (numero % 2 == 0){
			soma += numero;
			}
	}
	
	cout << "A soma dos numeros pares eh " << soma << endl << endl;
}

void questao4(){
    cout << "04. Joao aplicou seu dinheiro na poupanca que rende 0,5% ao mes. Maria preferiu um fundo\n"
			"    de renda fixa, que rende 1% ao mes. Sabendo que Joao aplicou R$ 1000,00 e maria comecou\n"
			"    seu investimento com R$ 100,00, calcule quantos meses sao necessarios para Maria ter mais\n"
			"    dinheiro que Joao." << endl;
    float joao = 1000;
    float maria = 100;
    int meses = 0;
    
    while (joao > maria){
    	joao = joao * 1.005;
    	maria = maria * 1.01;
    	meses += 1;
	}
	
	cout << "A quantidade de meses necessaria para Maria ultrapassar o valor de Joao eh de " << meses << endl << endl;
}

void questao5(){
	cout << "05. Construa um programa que realize o calculo de fatorial de um numero informado pelo usuario. " << endl;
    float numero;
    cout << "Insira um numero: ";
    cin >> numero;
    int resultado = 1;
    
    for (int i = numero; i > 0; i--){
    	cout << i << " ! " ;
    	resultado*= i;
	}
	
	cout << "\nA fatoracao tem resultado " << resultado << endl << endl;
}

void questao6(){
    cout << "06. Construa um algoritmo que recebera 30 valores inteiros. Ao final, seu algoritmo devera\n"
			"    apresentar os numeros pares em uma linha e na linha seguinte os numeros impares, na ordem\n"
			"    em que foram lidos." << endl;
	int quantidadeDeNumeros = 30;
	int numeros[quantidadeDeNumeros];

	for (int i = 0; i < quantidadeDeNumeros; i++) {
		cout << "Digite um numero: ";
		cin >> numeros[i];
	}
	
	cout << "Numeros pares: ";
	
	for (int i = 0; i < quantidadeDeNumeros; i++){
		if (numeros[i] % 2 == 0){
			cout << numeros[i] << " ";
		}
	}
	
	cout << "\nNumeros impares: ";
	
	for (int i = 0; i < quantidadeDeNumeros; i++){
		if (numeros[i] % 2 != 0){
			cout << numeros[i] << " ";
		}
	}

	cout << endl;
}

void questao7(){
	cout << "07. Crie um programa que receba 100 valores e armazena-os em um vetor. Em seguida, o\n"
			"    programa devera apresentar todas as posicoes do vetor em que ha um valor menor ou igual a\n"
			"    10 armazenado, informando o indice da posicao." << endl;
	int quantidadeDeNumeros = 100;
	int vetor[quantidadeDeNumeros];
	
	for (int i = 0; i < quantidadeDeNumeros; i++) {
		cout << "Digite um numero: ";
		cin >> vetor[i];
	}
	
	cout << "\nVetores que armazenam valores maior que 10: "<< endl;
	
	for (int i = 0; i < quantidadeDeNumeros; i++){
		if (vetor[i] > 10){
			cout << "V["<< i << "] = " << vetor[i] << endl;
		}
	}
	cout << endl;
}

void questao8(){
	cout << "08. Crie um programa que receba elementos para preencher uma matriz de 5 linhas e 10\n"
			"    colunas. Apos preencher a matriz, o programa recebera um numero inteiro de 0 a 9 que indicara\n"
			"    qual coluna devera ter os valores somados. Por fim o programa devera imprimir a matriz\n"
			"    resultante e o valor da soma dos numeros da coluna escolhida." << endl;
	int linha = 5;
    int coluna = 10;
	int matriz[linha][coluna];
	int colunaASomar= -1;
	int soma = 0;
	int i;
	int j;
	
	for (i = 0; i < linha; i++){
		for (j = 0; j < coluna; j++){
			matriz[i][j] = 3*i + 2*j; //criei essa lei de matriz pq nao to ficando doida de pedir pra preencher 50 numeros
		}
	}
	
	cout << "A matriz formada eh: \n"
			"[A] = \n";
	
	for (i = 0; i < linha; i++){
		for (j =0; j < coluna; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	while (colunaASomar <0 || colunaASomar > 9){
		cout << "Digite o numero da coluna que deseja somar os numeros: ";
		cin >> colunaASomar;
	}
	
	for (i = 0; i < 5; i++){
		soma = soma + matriz[i][colunaASomar];
	}
	cout << "A soma da coluna " << colunaASomar << " eh " << soma << endl << endl;
}

void questao9(){
	cout << "09. Construa um algoritmo que recebera valores inteiros em quantidade suficiente para montar\n"
			"    uma matriz de 10x10. Ao final, o algoritmo escrevera o maior valor encontrado. Alem dele,\n"
			"    serao apresentados, tambem, todos os elementos presentes na linha e coluna em que se encontra o maior valor." << endl;
    int linha = 10;
    int coluna = 10;
	int matriz[linha][coluna];
	int maiorValor= -9999999;
	int colunaDoMaior;
	int linhaDoMaior;
	int i;
	int j;
	
	for (i = 0; i < linha; i++){
		for (j = 0; j <coluna; j++){
			matriz[i][j] = i*j;
		}
	}

	cout << "A matriz formada eh: \n"
			"[A] = \n";
	for (i = 0; i < linha; i++){
		for (j =0; j <coluna; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	
	for (i = 0; i < linha; i++){
		for (j = 0; j <coluna; j++){
			if (matriz[i][j] > maiorValor){
				maiorValor = matriz[i][j];
				linhaDoMaior = i;
				colunaDoMaior = j;	
			}
		}
	}
	
	cout << endl;
	cout << "O maior valor: " << maiorValor << endl;
	cout << "Esta na linha: " << linhaDoMaior << endl;
	cout << "E na coluna: " << colunaDoMaior << endl << endl;
	
	//PASSEI MEIA HORA NESSA PARTE FINAL. QUE ODIO!
	
	cout << "A linha do maior numero eh: \n";
	for (i = linhaDoMaior; i < 10; i++){
		for (j =0; j <10; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	
	cout << endl;
	
	cout << "A coluna do maior numero eh: \n";
	for (i = 0; i < 10; i++){
		for (j =colunaDoMaior; j <10; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}	
	
	cout << endl;	
}

void questao10(float numero1, float numero2, float numero3){
	cout << "10. Construa uma funcao que receba 3 parametros (Numeros) e calcular a media." << endl;
	double media = (numero1 + numero2 + numero3)/3;
	
	cout << "A media dos numeros eh: " << media << endl << endl;
}
	
void questao11(){
	cout << "11. Construa uma funcao com retorno 'VOID' que realize o mesmo resultado da anterior e\n"
			"    exiba na tela o valor." << endl;
	float numero1 = 12;
	float numero2 = 15;
	float numero3 = 20;
	double media = (numero1 + numero2 + numero3)/3;
	
	cout << "A media dos numeros eh: " << media << endl << endl;		
}

int main() {
    int questao;
    questao = -1;

    while (questao != 0) {
        cout << " -> Digite um numero de 1 a 11 para ir a questao ou 0 para sair: ";
        cin >> questao;

		switch (questao){
			case 1:
				questao1();
				break;
				
			case 2:
				questao2();
				break;
				
			case 3:
				questao3();
				break;
				
			case 4:
				questao4();
				break;
			
			case 5:
				questao5();
				break;
				
			case 6:
				questao6();
				break;
				
			case 7:
				questao7();
				break;
				
			case 8:
				questao8();
				break;
				
			case 9:
				questao9();
				break;
				
			case 10:
				questao10(12, 15, 20);
				break;
			
			case 11:
				questao11();
				break;
			
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;
		}
	}
	return 0;
}
