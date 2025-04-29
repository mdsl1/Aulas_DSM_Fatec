package sistema;

import dados.Funcionario;
import dados.FuncionarioAssalariado;
import dados.FuncionarioComissionado;
import dados.FuncionarioPorHora;

public class MainSystem {
    public static void main(String[] args) {
        
        Funcionario f1 = new FuncionarioAssalariado("Joao", 1, 1500.25);
        Funcionario f2 = new FuncionarioComissionado("Josue", 2, 2200, 0.10);
        Funcionario f3 = new FuncionarioPorHora("Jonas", 3, 10, 23.50);

        FolhaDePagamento fp = new FolhaDePagamento();

        System.out.println("\n===+===+===+===");
        System.out.println(fp.imprimirSalario(f1));
        System.out.println("\n- - - - - - - - -\n");
        System.out.println("\n===+===+===+===");
        System.out.println(fp.imprimirSalario(f2));
        System.out.println("\n- - - - - - - - -\n");
        System.out.println("\n===+===+===+===");
        System.out.println(fp.imprimirSalario(f3));
        System.out.println("\n- - - - - - - - -\n");
    }
}
