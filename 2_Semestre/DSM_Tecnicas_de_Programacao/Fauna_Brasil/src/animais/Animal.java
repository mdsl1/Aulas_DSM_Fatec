package animais;

public abstract class Animal {
	private String nome;
	
	public abstract String som();

	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
}