package jav.lab1;
import java.math.BigDecimal;
import java.util.Scanner;

public class CTeSP_2024_Grupo5_Lab1 {
  public static int[] array(){
    int[] valores = {11, 31, 55, 76, 91, 111, 3, 1, 118, 199};

    return valores;
  }

  public static float calcmedia(int[] array){
    float media = 0;

    for(int i = 0; i < array.length; i++){
      media += array[i];
    }

    media = media / array.length;

    return media;
  }

  public static int parimpar(int[] array, int n){
    int[] impar_par = new int[array.length];
    int count = 0;

    for(int i = 0; i < array.length; i++){
      if(n == 0){
        if(array[i] % 2 == 0){
          impar_par[i] = array[i];
          count++;
        }
      }else{
        if(array[i] % 2 != 0){
          impar_par[i] = array[i];
          count++;
        }
      }
    }

    return count;
  }

  public static int nmaior(int[] array){
    int maior = 0;

    for(int i = 0; i < array.length; i++){
      if(array[i] > maior){
        maior = array[i];
      }
    }

    return maior;
  }

  public static int nmenor(int[] array){
    int menor = array[0];

    for(int i = 0; i < array.length; i++){
      if(array[i] < menor){
        menor = array[i];
      }else if(array[i] == menor){
        menor = array[i];
      }
    }

    return menor;
  }

  public static int[] inserir(int[] array){
    int pos1, pos2;

    do{
      int count = 0;

      if(count == 1){
        System.out.println("Os numeros são iguais, insira numeros diferentes e que estejam dentro do array.");
      }
      System.out.printf("\nInsira uma posicão de 1 a %d : ", array.length);
      pos1 = new Scanner(System.in).nextInt();

      System.out.printf("\nInsira outra posicão de 1 a %d : ", array.length);
      pos2 = new Scanner(System.in).nextInt();

    }while(pos1 == pos2 || (pos1 < 1 || pos1 > array.length) || (pos2 < 1 || pos2 > array.length));

    pos1 = array[pos1 - 1];
    pos2 = array[pos2 - 1];

    int[] posicoes = {pos1, pos2};

    return posicoes;
  }

  public static int[] trocar(int[] array, int[] posicoes){
    int[] troca = new int[array.length];

    System.out.println("\nArray antes da troca: ");
    for(int i = 0; i < array.length; i++){
      System.out.print(" " + array[i]);
    }

    for(int i = 0; i < array.length; i++){
      if(array[i] == posicoes[0]){
        troca[i] = posicoes[1];
      }else if(array[i] == posicoes[1]){
        troca[i] = posicoes[0];
      }else{
        troca[i] = array[i];
      }
    }

    return troca;
  }

  public static void main(String[] args) {
    int valores[] = array();

    System.out.println("\nArray de numeros: ");
    for(int i = 0; i < valores.length; i++){
      System.out.print(" " + valores[i]);
    }

    calcmedia(valores);

    float media = calcmedia(valores);

    System.out.println("\nA media dos numeros é: " + media);

    for(int i = 0; i < 2; i++){
      int impares = parimpar(valores, i);

      if(i == 0){
        System.out.println("\nNumeros pares: " + impares + "\n");
      }else{
        System.out.println("\nNumeros impares: " + impares + "\n");
      }
    }

    int maior = nmaior(valores);

    System.out.println("O maior numero é: " + maior);

    int menor = nmenor(valores);

    System.out.println("O menor numero é: " + menor);

    int[] posicoes = inserir(valores);

    System.out.println("Os numeros inseridos são: " + posicoes[0] + " e " + posicoes[1]);

    int[] troca = trocar(valores, posicoes);

    System.out.println("\nArray com a troca dos numeros: ");
    for(int i = 0; i < troca.length; i++){
      System.out.print(" " + troca[i]);
    }
  }
}