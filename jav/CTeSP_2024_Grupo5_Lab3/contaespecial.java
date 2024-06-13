package jav.CTeSP_2024_Grupo5_Lab3;

public class contaespecial extends contabancaria{
  private float limite;

  @Override public void RetirarSaldo(float valor){
    if (valor > this.getSaldo() + this.limite){
      System.out.println("Saldo insuficiente");
    }else{
      this.setSaldo(this.getSaldo() - valor);
    }
  }
  
  public contaespecial(String cliente, float saldo, int numConta, float limite){
    super(cliente, saldo, numConta);
    this.limite = limite;
  }
}
