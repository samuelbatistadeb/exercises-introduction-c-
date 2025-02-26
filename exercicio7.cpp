#include <iostream>
using namespace std;

int main() {
    /*ENTRADA
        COMPRIMENTO DA PISTA EM METROS 20KM    | 2KM/VOLTA | 4KM/ABASTECER
        N TOTAL DE VOLTAS               10
        N REABASTECIMENTOS DESEJADOS    5      | 2 VOLTAS E ABASTECE | 2 L ATE PRIMEIRO ABASTECIMENTO
        CONSUMO DE COMBUSTIVE EM KM/L  2KM/L
    */
    int comprimento_pista_metros, n_total_voltas, n_abastecimentos_desejados, consumo_combustivel;

    cout << "Digite o comprimento da pista em metros: ";
    cin >> comprimento_pista_metros;
    cout << "Digite o numero total de voltas: ";
    cin >> n_total_voltas;
    cout << "Digite o numero de abastecimentos desejados: ";
    cin >> n_abastecimentos_desejados;
    cout << "Digite o consumo de combustivel em km/L: ";
    cin >> consumo_combustivel;

    /* PROCESSAMENTO
        CALCULAR O N MINIMO DE LITROS ATE O PRIMEIRO REABASTECIMENTO
     */
    int comprimento_pista_km, qtd_km_volta, qtd_voltas_abastecer, qtd_km_abastecer, n_minimo_litros_abastecer;

    comprimento_pista_km = comprimento_pista_metros/1000;
    qtd_km_volta = comprimento_pista_km/n_total_voltas;
    qtd_voltas_abastecer = n_total_voltas/n_abastecimentos_desejados;
    qtd_km_abastecer = qtd_voltas_abastecer * qtd_km_volta;
    n_minimo_litros_abastecer = qtd_km_abastecer/consumo_combustivel;

     /* SAIDA 
        N MINIMO DE LITROS  ATE O PRIMEIRO REABASTECIMENTO
     */
    cout << "A quantidade minima de litros de combustivel ate o primeiro abastecimento e de: " << n_minimo_litros_abastecer ;
    cout << " Litros";
} 