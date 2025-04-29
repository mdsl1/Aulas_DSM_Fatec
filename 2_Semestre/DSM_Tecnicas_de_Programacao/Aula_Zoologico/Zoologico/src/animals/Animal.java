package animals;

public class Animal {

	private String nome;
	private boolean fome;
	private String classe;
	private boolean terrestre;
	
	// Getters e setters
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public boolean isFome() {
		return fome;
	}
	public void setFome(boolean fome) {
		this.fome = fome;
	}
	public String getClasse() {
		return classe;
	}
	public void setClasse(String classe) {
		this.classe = classe;
	}
	public boolean isTerrestre() {
		return terrestre;
	}
	public void setTerrestre(boolean terrestre) {
		this.terrestre = terrestre;
	}

	// Metodo construtor
	public Animal(String n, boolean f, String c, boolean t) {
		this.setNome(n);
		this.setFome(f);
		this.setClasse(c);
		this.setTerrestre(t);

	}
	
	// metodo
	public String fazSom() {
		return null;
	}
}
