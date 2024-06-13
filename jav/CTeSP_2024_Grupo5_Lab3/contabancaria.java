package jav.CTeSP_2024_Grupo5_Lab3;

public class contabancaria {
  private String cliente;
  private float saldo;
  private int numConta;

  public String getCliente(){
    return cliente;
  }

  public void setCliente(String cliente){
    this.cliente = cliente;
  }

  public float getSaldo(){
    return saldo;
  }

  public void setSaldo(float saldo){
    this.saldo = saldo;
  }

  public int getNumConta(){
    return numConta;
  }

  public void setNumConta(int numConta){
    this.numConta = numConta;
  }

  public contabancaria(String cliente, float saldo, int numConta){
    this.cliente = cliente;
    this.saldo = saldo;
    this.numConta = numConta;
  }

  public void AdicionarSaldo(float valor){
    this.saldo += valor;
  }

  public void RetirarSaldo(float valor){
    if (valor > this.saldo){
      System.out.println("Saldo insuficiente");
    }else{
      this.saldo -= valor;
    }
  }



}
