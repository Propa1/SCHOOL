package jav.exercicio.cidade;

public class cidade{
  
  private String nome;
  private int populacao;
  private float longitude;
  private float latitude;

  public String getNome(){
    return nome;
  }

  public void setNome(String nome){
    this.nome = nome;
  }

  public int getPopulacao(){
    return populacao;
  }

  public void setPopulacao(int populacao){
    this.populacao = populacao;
  }

  public float getlongitude(){
    return longitude;
  }

  public void setlongitude(float longitude){
    this.longitude = longitude;
  }

  public float getlatitude(){
    return latitude;
  }

  public void setlatitude(float latitude){
    this.latitude = latitude;
  }

  public cidade(){
    this.nome = "Não definido";
    this.populacao = 0;
    this.longitude = 0;
    this.latitude = 0;
  }

  public cidade(String nome, int populacao){
    this.nome = nome;
    this.populacao = populacao;
  }
}
