package dados;

public abstract class Funcionario {
    private String nome;
    private int id;

    public Funcionario(String n, int idFunc){
        this.setId(idFunc);
        this.setNome(n);
    }

    // Getters e Setters
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setId(int id){
        this.id = id;
    }
    public String getNome(){
        return nome;
    }
    public int getId(){
        return id;
    }

    public abstract double calcularSalario();
}
