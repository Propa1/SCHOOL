package jav.CTeSP_2024_Grupo5_Lab3;

public class main {
  public static void main(String[] args) {
    // simular cinco contas bancárias
    System.out.println("\n------------------------ Simulação de Contas Bancárias ------------------------");
    // conta bancária 1
    contabancaria conta1 = new contabancaria("João", 1000, 1);
    System.out.println("\n\n------------------------ Conta 1 ------------------------");
    System.out.println("Conta 1: " + conta1.getCliente() + " - Saldo: " + conta1.getSaldo());
    conta1.AdicionarSaldo(500);
    System.out.println("------ Adicionado 500 ao saldo ------");
    System.out.println("Conta 1: " + conta1.getCliente() + " - Saldo: " + conta1.getSaldo());
    conta1.RetirarSaldo(200);
    System.out.println("------ Retirado 200 do saldo ------");
    System.out.println("Conta 1: " + conta1.getCliente() + " - Saldo: " + conta1.getSaldo());

    // conta bancária 2
    contabancaria conta2 = new contabancaria("Maria", 2000, 2);
    System.out.println("\n\n------------------------ Conta 2 ------------------------");
    System.out.println("Conta 2: " + conta2.getCliente() + " - Saldo: " + conta2.getSaldo());
    conta2.AdicionarSaldo(1000);
    System.out.println("------ Adicionado 1000 ao saldo ------");
    System.out.println("Conta 2: " + conta2.getCliente() + " - Saldo: " + conta2.getSaldo());
    conta2.RetirarSaldo(500);
    System.out.println("------ Retirado 500 do saldo ------");
    System.out.println("Conta 2: " + conta2.getCliente() + " - Saldo: " + conta2.getSaldo());

    // conta poupança 1
    contapoupanca contaPoupanca1 = new contapoupanca("José", 3000, 3, 1);
    System.out.println("\n\n------------------------ Conta Poupança 1 ------------------------");
    System.out.println("Conta Poupança 1: " + contaPoupanca1.getCliente() + " - Saldo: " + contaPoupanca1.getSaldo());
    contaPoupanca1.AdicionarSaldo(1500);
    System.out.println("------ Adicionado 1500 ao saldo ------");
    System.out.println("Conta Poupança 1: " + contaPoupanca1.getCliente() + " - Saldo: " + contaPoupanca1.getSaldo());
    contaPoupanca1.calcularNovoSaldo(1);
    System.out.println("------ Calculado novo saldo com taxa de 1% ------");
    System.out.println("Conta Poupança 1: " + contaPoupanca1.getCliente() + " - Saldo: " + contaPoupanca1.getSaldo());

    // conta especial 1
    contaespecial contaEspecial1 = new contaespecial("Ana", 4000, 4, 1000);
    System.out.println("\n------------------------ Conta Especial 1 ------------------------");
    System.out.println("Conta Especial 1: " + contaEspecial1.getCliente() + " - Saldo: " + contaEspecial1.getSaldo());
    contaEspecial1.AdicionarSaldo(2000);
    System.out.println("------ Adicionado 2000 ao saldo ------");
    System.out.println("Conta Especial 1: " + contaEspecial1.getCliente() + " - Saldo: " + contaEspecial1.getSaldo());
    contaEspecial1.RetirarSaldo(3000);
    System.out.println("------ Retirado 3000 do saldo ------");
    System.out.println("Conta Especial 1: " + contaEspecial1.getCliente() + " - Saldo: " + contaEspecial1.getSaldo());

    // conta especial 2
    contaespecial contaEspecial2 = new contaespecial("Carlos", 5000, 5, 2000);
    System.out.println("\n\n------------------------ Conta Especial 2 ------------------------");
    System.out.println("Conta Especial 2: " + contaEspecial2.getCliente() + " - Saldo: " + contaEspecial2.getSaldo());
    contaEspecial2.AdicionarSaldo(2500);
    System.out.println("------ Adicionado 2500 ao saldo ------");
    System.out.println("Conta Especial 2: " + contaEspecial2.getCliente() + " - Saldo: " + contaEspecial2.getSaldo());
    contaEspecial2.RetirarSaldo(8000);
    System.out.println("------ Retirado 8000 do saldo ------");
    System.out.println("Conta Especial 2: " + contaEspecial2.getCliente() + " - Saldo: " + contaEspecial2.getSaldo());
  }
}
