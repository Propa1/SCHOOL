package jav.CTeSP_2024_Grupo5_Lab3;

public class produto {
  private String nomeProduto;
  private int quantidade;
  private float IVA;

  public String getNomeProduto() {
    return nomeProduto;
  }

  public void setNomeProduto(String nomeProduto) {
    this.nomeProduto = nomeProduto;
  }

  public int getQuantidade() {
    return quantidade;
  }

  public void setQuantidade(int quantidade) {
    this.quantidade = quantidade;
  }

  public float getIVA() {
    return IVA;
  }

  public void setIVA(float IVA) {
    this.IVA = IVA;
  }

  public void incrementaQuantidade(){
    this.quantidade += 1;
  }

  public void decrementaQuantidade(){
    this.quantidade -= 1;
  }

  public produto(String nomeProduto){
    this.nomeProduto = nomeProduto;
    this.quantidade = 1;
    this.IVA = 0.23f;
  }
}
