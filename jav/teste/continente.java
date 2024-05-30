package jav.teste;

import java.util.ArrayList;

public class continente {
  private String nomeContinente;
  private ArrayList<pais> paises;

  public String getNomeContinente(){
    return nomeContinente;
  }

  public void setNomeContinente(String nomeContinente){
    this.nomeContinente = nomeContinente;
  }

  public ArrayList<pais> getPaises(){
    return paises;
  }

  public void setPaises(ArrayList<pais> paises){
    this.paises = paises;
  }

  public continente(){
    this.nomeContinente = "Não definido";
    this.paises = new ArrayList<pais>();
  }

  public continente(String nomeContinente){
    this.nomeContinente = nomeContinente;
    this.paises = new ArrayList<pais>();
  }
}
