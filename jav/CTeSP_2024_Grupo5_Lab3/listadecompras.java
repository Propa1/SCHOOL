package jav.CTeSP_2024_Grupo5_Lab3;
import java.util.ArrayList;

public class listadecompras {
  private ArrayList<produto> produtos;
  
  public void adicionaProduto(produto p){
    if(this.produtos.contains(p)){
      for(produto prod : this.produtos){
        if(prod.getNomeProduto().equals(p.getNomeProduto())){
          prod.incrementaQuantidade();
        }
      }
    }else{
      this.produtos.add(p);
    }
  }

  public listadecompras(){
    this.produtos = new ArrayList<produto>();
  }
}
