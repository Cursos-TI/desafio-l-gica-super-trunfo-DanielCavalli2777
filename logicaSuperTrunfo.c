#include <stdio.h>
int main() {
    printf ("SUPERTRUNFO!\n");
    git commit -m "Primeiro commit do programa Super Trunfo"
    
    }

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Definindo a estrutura Cidade
    struct Cidade {
    char nome[50];
    char estado[30];
    int populacao;
    float area;


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    //São paulo corresponde a letra A
    //Minas Gerais corresponde a letra B
    //Rio Grande do sul corresponde a letra C
    //Bahia corresponde a letra D
    //Rio de janeiro corresponde a letra E
    //Maranhão corresponde a letra F
    //Piauí corresponde a letra G
    //Amazonas corresponde a letra H

    //São paulo Estados vai ser letra A

    //cada numero vai corresponder uma cidade 
    //cidade São Paulo vai ser 01
    //cidade de Campinas vai ser 02
    //cidade de Sumaré vai ser 03
    //cidade de Hortolandia vai ser 04

    //Estado: A
    //Código da Carta: A01
    //Nome da Cidade: São Paulo
    //População: 12325000
    //Área: 1521.11 km²
    //PIB: 699.28 bilhões de reais
    //Número de Pontos Turísticos: 50

    //Estado: A
    //Código da Carta: A02
    //Nome da Cidade: Campinas
    //População: 1223237	
    //Área: 795.697 km²
    //PIB: 46.68 bilhões de reais
    //Número de Pontos Turísticos: 35

    //Estado: A
    //Código da Carta: A03
    //Nome da Cidade: Sumaré
    //População: 288245	
    //Área:  153.470 km²
    //PIB: 8.89 bilhões de reais
    //Número de Pontos Turísticos: 20

    //Estado: A
    //Código da Carta: A04
    //Nome da Cidade: Hortolândia
    //População: 222186	
    //Área:  62.420 km²
    //PIB: 7.31 bilhões de reais
    //Número de Pontos Turísticos: 15

    //Minas Gerais Estados vai ser letra B

    //cada numero vai corresponder uma cidade 
    //cidade Belo Horizonte vai ser 01
    //cidade Uberlândia vai ser 02
    //cidade Juiz de Fora vai ser 03
    //cidade Montes Claros vai ser 04



    //Código da Carta: B01
    //Nome da Cidade: Belo Horizonte
    //População: 2153600
    //Área: 331.401  km²
    //PIB: 56.34 bilhões de reais
    //Número de Pontos Turísticos: 40

    //Estado: B
    //Código da Carta: B02
    //Nome da Cidade: Uberlândia 
    //População: 759000	
    //Área: 4168.8  km²
    //PIB: 22.45 bilhões de reais
    //Número de Pontos Turísticos: 25

    //Estado: B
    //Código da Carta: B03
    //Nome da Cidade: Juiz de Fora 
    //População: 540756	
    //Área: 1455.8  km²
    //PIB: 10.12 bilhões de reais
    //Número de Pontos Turísticos: 30

    //Estado: B
    //Código da Carta: B04
    //Nome da Cidade: Montes Claros
    //População: 414240	
    //Área: 3569.1  km²
    //PIB: 8.76 bilhões de reais
    //Número de Pontos Turísticos: 20

    //Estados Rio Grande do sul vai ser letra C

    //cada numero vai corresponder uma cidade 
    //cidade Porto Alegre vai ser 01
    //cidade Caxias do Sul vai ser 02
    //cidade Pelotas vai ser 03
    //cidade Santa Maria vai ser 04

    //Estado: C
    //Código da Carta: C01
    //Nome da Cidade: Porto Alegre 
    //População: 1484952	
    //Área: 496.684  km²
    //PIB: 72.21 bilhões de reais
    //Número de Pontos Turísticos:45


    //Estado: C
    //Código da Carta: C02
    //Nome da Cidade: Caxias do Sul
    //População: 517451	
    //Área: 1645.6 km²
    //PIB: 27.85 bilhões de reais
    //Número de Pontos Turísticos: 25

    //Estado: C
    //Código da Carta: C03
    //Nome da Cidade: Pelotas
    //População: 343132	
    //Área: 1609.7  km²
    //PIB: 12.56 bilhões de reais
    //Número de Pontos Turístico: 20

    //Estado: C
    //Código da Carta: C04
    //Nome da Cidade: Santa Maria
    //População: 282223	
    //Área: 1811.4 km²
    //PIB: 9.45 bilhões de reais
    //Número de Pontos Turísticos: 18

    //cada numero vai corresponder uma cidade 
    //cidade Salvador vai ser 01
    //cidade Feira de Santana vai ser 02
    //cidade Vitória da Conquista vai ser 03
    //cidade Camaçari vai ser 04


    //Estado: D
    //Código da Carta: D01
    //Nome da Cidade: Salvador 
    //População: 2886698	
    //Área: 693.8  km²
    //PIB: 83.43 bilhões de reais
    //Número de Pontos Turísticos: 55

    //Estado: D
    //Código da Carta: D02
    //Nome da Cidade: Feira de Santana
    //População:627477 	
    //Área: 1376.56  km²
    //PIB: 17.33 bilhões de reais
    //Número de Pontos Turísticos: 30

    //Estado: D
    //Código da Carta: D03
    //Nome da Cidade: Vitória da Conquista
    //População: 338480	
    //area: 3204.2  km²
    //PIB:10.54  bilhões de reais
    //Número de Pontos Turísticos: 25

    //Estado: D
    //Código da Carta: D04
    //Nome da Cidade: Camaçari
    //População: 293723	
    //Área: 784.658  km²
    //PIB: 9.89 bilhões de reais
    //Número de Pontos Turísticos: 20
    
    //cada numero vai corresponder uma cidade 
    //cidade Rio de Janeiro vai ser 01
    //cidade Niterói vai ser 02
    //cidade Petrópolis vai ser 03
    //cidade Campos dos Goytacazes vai ser 04

    //Estado: E
    //Código da Carta: E01
    //Nome da Cidade: Rio de janeiro
    //População: 6747815 	
    //Área: 1.200.278  km²
    //PIB: 364.17 bilhões de reais
    //Número de Pontos Turísticos: 70

    //Estado: E
    //Código da Carta: E02
    //Nome da Cidade: Niterói
    //População: 513584	
    //Área: 133.9  km²
    //PIB: 21.04 bilhões de reais
    //Número de Pontos Turísticos: 35

    //Estado: E
    //Código da Carta: E03
    //Nome da Cidade: Petrópolis
    //População: 305134	
    //Área: 778.4  km²
    //PIB: 12.78 bilhões de reais
    //Número de Pontos Turísticos: 20

    //Estado: E
    //Código da Carta: E04
    //Nome da Cidade: Campos dos Goytacazes 
    //População: 503424	
    //Área: 4031.0  km²
    //PIB: 15.43 bilhões de reais
    //Número de Pontos Turísticos: 30

    //Estados Maranhão vai ser letra F


    //cada numero vai corresponder uma cidade 
    //cidade São Luís vai ser 01
    //cidade Imperatriz vai ser 02
    //cidade Caxias vai ser 03
    //cidade Timon vai ser 04


    //Estado: F
    //Código da Carta: F01
    //Nome da Cidade: São Luís
    //População: 1108975	
    //Área: 831.7  km²
    //PIB: 25.82 bilhões de reais
    //Número de Pontos Turísticos: 25

    //Estado: F
    //Código da Carta: F02
    //Nome da Cidade: Imperatriz
    //População: 259053	
    //Área: 1.368.988  km²
    //PIB: 9.42 bilhões de reais
    //Número de Pontos Turísticos: 15

    //Estado: F
    //Código da Carta: F03
    //Nome da Cidade:Caxias 
    //População: 165525	
    //Área:  5182.7 km²
    //PIB: 6.78 bilhões de reais
    //Número de Pontos Turísticos: 20

    //Estado: F
    //Código da Carta: F04
    //Nome da Cidade: Timon
    //População: 170456	
    //Área: 1763.8  km²
    //PIB: 5.91 bilhões de reais
    //Número de Pontos Turísticos: 18
					
    //Estados Piauí vai ser letra G

    //cada numero vai corresponder uma cidade 
    //cidade Teresina vai ser 01
    //cidade Parnaíba vai ser 02
    //cidade Picos vai ser 03
    //cidade Piripiri vai ser 04


    //Estado: G
    //Código da Carta: G01
    //Nome da Cidade: Teresina
    //População: 864845	
    //Área: 1391.98  km²
    //PIB: 21.54 bilhões de reais
    //Número de Pontos Turísticos: 30

    //Estado: G
    //Código da Carta: G02
    //Nome da Cidade: Parnaíba
    //População: 153322 	
    //Área: 435.5  km²
    //PIB: 7.65 bilhões de reais
    //Número de Pontos Turísticos: 25

    //Estado: G
    //Código da Carta: G03
    //Nome da Cidade: Picos
    //População: 78377 	
    //Área: 535.6  km²
    //PIB: 4.32 bilhões de reais
    //Número de Pontos Turísticos: 15

    //Estado: G
    //Código da Carta: G04
    //Nome da Cidade: Piripiri 
    //População: 62130	
    //Área: 498.158  km²
    //PIB: 3.14 bilhões de reais
    //Número de Pontos Turísticos: 10

			
			

    //Estados Amazonas vai ser letra H


    //cada numero vai corresponder uma cidade 
    //cidade Manaus vai ser 01
    //cidade Parintins vai ser 02
    //cidade Itacoatiara vai ser 03
    //cidade Manacapuru vai ser 04



    //Estado: H
    //Código da Carta: H01
    //Nome da Cidade: Manaus
    //População:2193741 	
    //Área: 11.401.058  km²
    //PIB: 66.58 bilhões de reais
    //Número de Pontos Turísticos: 50

    //Estado: H
    //Código da Carta: H02
    //Nome da Cidade: Parintins
    //População: 113168	
    //Área: 4358.1  km²
    //PIB: 5.78 bilhões de reais
    //Número de Pontos Turísticos: 20

    //Estado: H
    //Código da Carta: H02
    //Nome da Cidade: Itacoatiara
    //População: 101337 	
    //Área: 8608.2  km²
    //PIB: 3.21 bilhões de reais
    //Número de Pontos Turísticos: 18

    //Estado: H
    //Código da Carta: H02
    //Nome da Cidade: Manacapuru
    //População: 96828	
    //Área: 7368.32  km²
    //PIB: 2.65 bilhões de reais
    //Número de Pontos Turísticos: 15






 
 
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
