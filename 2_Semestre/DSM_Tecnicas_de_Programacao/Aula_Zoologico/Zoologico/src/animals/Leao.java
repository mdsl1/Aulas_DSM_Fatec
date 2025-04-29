package animals;

public class Leao extends Animal{
	
	public Leao(String n, boolean f, String c, boolean t) {
		super(n,f,c,t);
	}
	
	@Override
	public String fazSom() {
		return "ROAAAAAAR";
	}
}
