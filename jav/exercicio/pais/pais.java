package jav.exercicio.pais;
import jav.exercicio.cidade.*;
import java.util.ArrayList;

public class pais {
  
  private String nome;
  private int populacao;
  private cidade capital;
  private ArrayList<cidade> cidades;

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
    this.nome = "Não definido";
    this.populacao = 0;
    this.capital = new cidade();
    this.cidades = new ArrayList<cidade>();
  }

  public pais(String nome, int populacao){
    this.nome = nome;
    this.populacao = populacao;
  }
}
