package jav.CTeSP_2024_Grupo5_Lab3;
import jav.CTeSP_2024_Grupo5_Lab3.*;

public class fraldas extends produto{
  private float peso;

  public float getPeso(){
    return peso;
  }

  public void setPeso(float peso){
    this.peso = peso;
  }

  public fraldas(){
    super("Fraldas");
    super.setIVA(0.23f);
    this.peso = 0.200f;
  }

  public fraldas(float IVA){
    super("Fraldas");
    super.setIVA(IVA);
  }
}
