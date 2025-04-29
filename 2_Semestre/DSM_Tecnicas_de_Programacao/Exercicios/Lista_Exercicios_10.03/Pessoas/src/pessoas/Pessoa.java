package pessoas;

public class Pessoa {
	private String nome;
	private int idade;
	private String cpf;
	
	// Metodo construtor
	public Pessoa(String n, int i, String c) {
		this.setNome(n);
		this.setIdade(i);
		this.setCpf(c);
	}
	
	// Sobrecarga do método construtor
	public Pessoa(String n, int i) {
		this.setNome(n);
		this.setIdade(i);
		this.setCpf(null);
	}
	
	//Getters e Setters
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		if(idade < 0) {
			System.err.println("Erro: A idade não pode ser negativa.");
			this.idade = 0;
		}
		else {
			this.idade = idade;
		}
		
	}
	public String getCpf() {
		return cpf;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	
	@Override
	public String toString() {
		String text = "Olá, meu nome é "+ this.getNome() + ", tenho " + Integer.toString(this.getIdade()) + "e meu CPF é " + this.getCpf() + ".\n";
		return text;
	}
}

