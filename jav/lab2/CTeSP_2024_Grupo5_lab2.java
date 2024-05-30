package jav.lab2;
import jav.lab2.pessoa;

import java.util.ArrayList;
import java.util.Scanner;
import java.math.BigDecimal;

public class CTeSP_2024_Grupo5_lab2 {
  public static void main(String[] args) {
    pessoa p = new pessoa(); 
    int n = 0;

    System.out.println("\n\n" + p.nome());
    System.out.println("\n" + p.infoP());

    System.out.println("\nQuantas pessoas deseja criar: ");
    n = new Scanner(System.in).nextInt();

    pessoa[] arrayP = new pessoa[n];

    System.out.println("\n\n");

    for(int i = 0; i < arrayP.length; i++){
      arrayP[i] = new pessoa();
      arrayP[i].addinfoPessoa();
    }

    for(int i = 0; i < arrayP.length; i++){
      System.out.println("\n" + arrayP[i].infoPessoa());
    }

    
  }
}