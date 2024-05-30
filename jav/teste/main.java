package jav.teste;
import jav.teste.*;
import java.util.ArrayList;

public class main {
  public static void main(String[] args) {
    pais p = new pais();
    p.setNomePais("Brasil");
    p.setPopulacao(200000000);
    p.setCapital(new cidade("Brasília", 3000000));
    p.setCidades(new ArrayList<cidade>());

    System.out.println("Nome do pais: " + p.getNomePais());
    System.out.println("Populacao: " + p.getPopulacao());
    System.out.println("Capital: " + p.getCapital().getNomeCidade());
    System.out.println("Populacao da capital: " + p.getCapital().getPopulacao());
    

    continente c = new continente();

    c.setNomeContinente("America do Sul");
    c.getPaises().add(p);

    System.out.println("Nome do continente: " + c.getNomeContinente());
    System.out.println("Paises: " + c.getPaises().get(0).getNomePais());
  }
}
