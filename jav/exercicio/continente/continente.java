package jav.exercicio.continente;
import jav.exercicio.pais.pais;
import java.util.ArrayList;

public class continente {
  private String nome;
  private ArrayList<pais> paises;

  public String getNome(){
    return nome;
  }

  public void setNome(String nome){
    this.nome = nome;
  }

  public ArrayList<pais> getPaises(){
    return paises;
  }

  public void setPaises(ArrayList<pais> paises){
    this.paises = paises;
  }

  public continente(){
    this.nome = "Não definido";
    this.paises = new ArrayList<pais>();
  }

  public continente(String nome){
    this.nome = nome;
  }
}
