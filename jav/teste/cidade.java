package jav.teste;

public class cidade {
  private String nomeCidade;
  private int populacao;

  public String getNomeCidade(){
    return nomeCidade;
  }

  public void setNomeCidade(String nomeCidade){
    this.nomeCidade = nomeCidade;
  }

  public int getPopulacao(){
    return populacao;
  }

  public void setPopulacao(int populacao){
    this.populacao = populacao;
  }

  public cidade(){
    this.nomeCidade = "Não definido";
    this.populacao = 0;
  }

  public cidade(String nomeCidade, int populacao){
    this.nomeCidade = nomeCidade;
    this.populacao = populacao;
  }
}
