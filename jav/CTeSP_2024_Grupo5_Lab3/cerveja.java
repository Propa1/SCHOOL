package jav.CTeSP_2024_Grupo5_Lab3;

public class cerveja extends produto{

  private float teorAlcoolico;

  public float getTeorAlcoolico(){
    return teorAlcoolico;
  }

  public void setTeorAlcoolico(float teorAlcoolico){
    this.teorAlcoolico = teorAlcoolico;
  }

  public cerveja(){
    super("Cerveja");
    super.setIVA(0.23f);
    this.teorAlcoolico = 5.0f;
  }

  public cerveja(float IVA){
    super("Cerveja");
    super.setIVA(IVA);
  }
  
}
