package animais;

public class Principal {
	public static void main(String[] args) {
		Animal an = new HomemMacaco();
		Animal an2 = new Quati();
		
		System.out.println(an.som());
		System.out.println(an2.som());
	}
}
