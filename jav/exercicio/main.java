package jav.exercicio;
import jav.exercicio.cidade.*;
import jav.exercicio.continente.*;
import jav.exercicio.pais.*;
import java.util.ArrayList;

public class main {
  public static void main(String[] args) {
    cidade novCidade = new cidade("Lisboa", 1000000);
    novCidade.setlatitude(38.736946f);
    novCidade.setlongitude(-9.142685f);

    pais novPais = new pais("Portugal", 10000000);
    novPais.setCapital(novCidade);
    novPais.getCidades().add(novCidade);


  }
}
