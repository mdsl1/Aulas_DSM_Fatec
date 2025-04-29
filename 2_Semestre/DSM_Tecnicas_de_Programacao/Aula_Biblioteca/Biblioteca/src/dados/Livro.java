package dados;

public class Livro {
	
	private String titulo;
	private String autor;
	private int nPags;
	
	public Livro(String t, String a, int n) {
		this.setTitulo(t);
		this.setAutor(a);
		this.setnPags(n);
	}
	
	
	// Getters e Setters
	public String getTitulo() {
		return titulo;
	}
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	public String getAutor() {
		return autor;
	}
	public void setAutor(String autor) {
		this.autor = autor;
	}
	public int getnPags() {
		return nPags;
	}
	public void setnPags(int nPags) {
		this.nPags = nPags;
	}
	
	@Override
	public String toString() {
		String rep = "";
		rep += "Título:" + this.getTitulo() + "\n";
		rep += "Autor:" + this.getAutor() + "\n";
		rep += "Número de Páginas: " + Integer.toString(this.getnPags()) + "\n";
		
		return rep;
	}
	
	
}
