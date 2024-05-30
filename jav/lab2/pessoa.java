package jav.lab2;
import java.util.Random;
import java.util.Scanner;
import java.util.random.*;

public class pessoa {
  String Pnome;
  String Snome;
  int NIF;
  int salario;

  public String nome(){
    return Pnome + " " + Snome;
  }

  public int salario(){
    Random  r = new Random();
    int low = 1000;
    int high = 5000;
    salario = r.nextInt(high-low) + low;

    salarioLiquido(salario);
    return salario;
  }
  
  public float salarioLiquido(float salario){
    float salarioL = salario;
    
    if(salario < 1550){
      salarioL = salario;
    }else if(salario == 1550){
      salarioL -= 50;
    }else if(salario > 1550 && salario < 2050){
      salarioL -= (salario * 0.035);
    }else if(salario > 2050 && salario < 2100){
      salarioL -= (salario * 0.038);
    }else if(salario > 2100 && salario < 2150){
      salarioL -= (salario * 0.041);
    }else if(salario > 2150 && salario < 2500){
      salarioL -= (salario * 0.06);
    }else if(salario > 2500 && salario < 3500){
      salarioL -= (salario * 0.08);
    }else if(salario > 3500 && salario < 4200){
      salarioL -= (salario * 0.09);
    }else if(salario >= 4200){
      salarioL -= (0.10 * salario);
    }
    return salarioL;
  }

  public int addnif(){
    NIF = 123456789;

    return NIF;
  }

  public String addname(){
    Pnome = "João";
    Snome = "Ribeiro";

    return Pnome + " " + Snome;
  }

  public String infoP(){
    return "Nome: " + addname() + " \nNIF: "+ addnif() + " \nSalario Bruto: " + salario() + " euros \nSalario Liquido: " + salarioLiquido(salario) + " euros";
  }

  public void addinfoPessoa(){
    System.out.println("Qual o Primeiro Nome: ");
    Pnome = new Scanner(System.in).next();
    System.out.println("Qual o Segundo Nome: ");
    Snome = new Scanner(System.in).next();
    System.out.println("Qual o NIF: ");
    NIF = new Scanner(System.in).nextInt();
    salario = salario();
  }

  public String infoPessoa(){
    return "Nome: " + Pnome + " " + Snome + " \n NIF: " + NIF + " \n Salario Brutos: " + salario + " euros" + " \n Salario Liquido: " + salarioLiquido(salario) + " euros";
  }
}
