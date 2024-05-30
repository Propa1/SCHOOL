package jav.teste;
import java.util.ArrayList;

public class pais {
  private String nomePais;
  private int populacao;
  private cidade capital;
  private ArrayList<cidade> cidades;

  public String getNomePais(){
    return nomePais;
  }

  public void setNomePais(String nomePais){
    this.nomePais = nomePais;
  }

  public int getPopulacao(){
    return populacao;
  }

  public void setPopulacao(int populacao){
    this.populacao = populacao;
  }

  public cidade getCapital(){
    return capital;
  }

  public void setCapital(cidade capital){
    this.capital = capital;
  }

  public ArrayList<cidade> getCidades(){
    return cidades;
  }

  public void setCidades(ArrayList<cidade> cidades){
    this.cidades = cidades;
  }

  public pais(){
    this.nomePais = "Não definido";
    this.populacao = 0;
    this.capital = new cidade();
    this.cidades = new ArrayList<cidade>();
  }

  public pais(String nomePais, int populacao, cidade capital, ArrayList<cidade> cidades){
    this.nomePais = nomePais;
    this.populacao = populacao;
    this.capital = capital;
    this.cidades = cidades;
  }
}
