package system;

import java.util.Scanner;
import java.util.ArrayList;
import carros.Carro;

public class TelaPrincipal {
	public static void main(String args[]) {
		
		ArrayList<Carro> veiculos = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			System.out.println("O que você quer fazer?");
			System.out.println("1 - Cadastrar Veículo\n2 - Listar Veículo\n3 - Comparar Veículos");
			int op = Integer.parseInt(sc.nextLine());
			
			if(op == 1) {
				Carro obj = null;
				System.out.println("===== Cadastro de Veículos =====\n");
				
				System.out.println("- Marca do Veículo:");
					String m = sc.nextLine();
				System.out.println("- Modelo do Veículo:");
					String t = sc.nextLine();
				System.out.println("- Ano do Veículo:");
					int a = Integer.parseInt(sc.nextLine());
				System.out.println("- Cor do Veículo:");
					String c = sc.nextLine();
					
				obj = new Carro(m,t,a,c);
				veiculos.add(obj);
			}
			else if (op == 2) {
				System.out.println("===== Veículos Cadastrados =====\n");
				
				for(int i = 0; i<veiculos.size(); i+=1) {
					System.out.println(veiculos.get(i));
				}
			}
			else if (op == 3) {
				System.out.println("===== Comparação de Veículos =====\n");
				
				System.out.println("1º Carro a comparar: ");
					int n1 = Integer.parseInt(sc.nextLine())-1;
				System.out.println("2º Carro a comparar: ");
					int n2 = Integer.parseInt(sc.nextLine())-1;
				
				if(veiculos.get(n1).equals(veiculos.get(n2))){
					System.out.println("\nOs veículos são iguais.\n");
				}
				else {
					System.out.println("\nOs veículos são diferentes.\n");
				}
			}
		}
	}
}