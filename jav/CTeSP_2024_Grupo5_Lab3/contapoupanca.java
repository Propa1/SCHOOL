package jav.CTeSP_2024_Grupo5_Lab3;

public class contapoupanca extends contabancaria{
  private int diaReceberRendimento;

  public float getDiaReceberRendimento(){
    return diaReceberRendimento;
  }

  public void setDiaReceberRendimento(int diaReceberRendimento){
    this.diaReceberRendimento = diaReceberRendimento;
  }

  public void calcularNovoSaldo(float taxa){
    this.setSaldo(this.getSaldo() + (this.getSaldo() * (taxa / 100)));
  }

  public contapoupanca(String cliente, float saldo, int numConta, int diaReceberRendimento){
    super(cliente, saldo, numConta);
    this.diaReceberRendimento = diaReceberRendimento;
  }
}
