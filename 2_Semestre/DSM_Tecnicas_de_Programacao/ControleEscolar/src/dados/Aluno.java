package dados;

import java.sql.DriverManager;

public class Aluno {

    private int RA;
    private String nome;
    private String email;
    private String telefone;

    public boolean salvar() {
        try {
            Class.forName("org.mariadb.jdbc.Driver");
            Connection cn = DriverManager.getConnection(
                "jdbc:mariadb://localhost:3306/controleescolar",
                "mdsl",
                "100ViruZ"
            );
        }
        catch {
            
        }
        return true;
    }

    public Aluno(int ra, String n, String e, String t) {
        this.setRA(ra);
        this.setNome(n);
        this.setEmail(e);
        this.setTelefone(t);
    }

    // Getters e setters
    public int getRA() {
        return RA;
    }
    public void setRA(int rA) {
        RA = rA;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    public String getTelefone() {
        return telefone;
    }
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
}
