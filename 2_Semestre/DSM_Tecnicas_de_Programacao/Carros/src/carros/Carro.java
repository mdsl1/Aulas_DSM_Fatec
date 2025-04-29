package carros;

public class Carro {
	private String marca;
	private String modelo;
	private int ano;
	private String cor;
	static private int qtdeCriados = 0;
	
	public Carro(String m, String t, int a, String c) {
		this.setMarca(m);
		this.setModelo(t);
		this.setAno(a);
		this.setCor(c);
	}
	
	
	
	// Getters e setters
	public String getMarca() {
		return marca;
	}
	public void setMarca(String marca) {
		this.marca = marca;
	}
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public static int getqtdeCriados() {
		return Carro.qtdeCriados;
	}
	
	public Carro() {
		Carro.qtdeCriados += 1;
	}
	
	@Override
	public String toString() {
		String desc = "Marca: " + this.getMarca() + "\n";
		desc += "Modelo: "+ this.getModelo() + "\n";
		desc += "Ano: "+ this.getAno() + "\n";
		desc += "Cor: "+ this.getCor() + "\n";
		
		return desc;
	}
	
	@Override
	public boolean equals(Object obj) {
		
		Carro outro = Carro.class.cast(obj);
		
		if((outro.getAno()== this.getAno()) && this.getMarca().equals(outro.getMarca())) {
			return true;
		}
		else {
			return false;
		}
	}
}
