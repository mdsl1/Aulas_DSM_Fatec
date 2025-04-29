package sistema;

import java.util.ArrayList;
import java.util.Scanner;
import animals.Animal;
import animals.Capivara;
import animals.Leao;
import animals.Pinguim;

public class Principal {
	
	public static void main(String args[]) {
		// ArrayList<tip> nomeVar = new ArrayList<>();
		ArrayList<Animal> criaturas = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			System.out.println("O que você quer fazer?");
			System.out.println("1 - Registrar Animal\n2- Visitar Zoológico");
			int op = sc.nextInt();
			if(op == 1) {
				Animal obj = null;
					sc.nextLine();
				System.out.println("Qual o nome do animal?");
					String n = sc.nextLine();
				System.out.println("O animal tem fome?");
					boolean f = sc.nextBoolean();
					sc.nextLine();
				System.out.println("Qual a classe do animal?");
					String c = sc.nextLine();
				System.out.println("O animal é terrestre?");
					boolean t = sc.nextBoolean();
				System.out.println("O que é o animal?");
				System.out.println("\n1- Leão\n2- Capivara\n3- Pinguim");
					int animalTipo = sc.nextInt();	
				
				if(animalTipo == 1) {
					obj = new Leao(n, f, c, t);
				}
				else if(animalTipo == 2) {
					obj = new Capivara(n,f,c,t);
				}
				else if(animalTipo == 3) {
					obj = new Pinguim(n,f,c,t);
				}
				criaturas.add(obj);
			} 
			else {
				for(int i = 0; i < criaturas.size(); i+=1) {
					System.out.println("O" + criaturas.get(i).getNome() + " faz " + criaturas.get(i).fazSom());
				}
			}
		}
	}
}
