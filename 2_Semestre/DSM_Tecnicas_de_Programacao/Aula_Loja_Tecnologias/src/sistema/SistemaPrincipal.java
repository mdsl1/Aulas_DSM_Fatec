package sistema;

import dados.Eletronicos;
import dados.Smartphone;
import dados.Televisao;

public class SistemaPrincipal {
    public static void main(String[] args) {
        Eletronicos tv = new Televisao("Samsung", 50.8f, "4K", 0);

        System.out.println("\n---------------+ Televisores +---------------\n");

        System.out.println(tv.exibirInformacoes());
        tv.ligar();
        System.out.println("------------------------------------\n");
        System.out.println(tv.exibirInformacoes());

        System.out.println("\n---------------+ Smartphones +---------------\n");
        
        Eletronicos celu = new Smartphone("Xiaomi", "Redmi Note 12", "3.885 mAh", true);
        System.out.println(celu.exibirInformacoes());
        celu.ligar();
        System.out.println("------------------------------------\n");
        System.out.println(celu.exibirInformacoes());

    }
}
