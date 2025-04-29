package dados;

public class Smartphone implements Eletronicos {
    
    private String marca;
    private String modelo;
    private String capacidadeBateria;
    private boolean cincoG;
    private int ligado;

    // Construtor
    public Smartphone(String ma, String mo, String cb, boolean g) {
        this.setMarca(ma);
        this.setModelo(mo);
        this.setCapacidadeBateria(cb);
        this.setCincoG(g);
        this.ligado = 0;
    }
    
    // Getters e Setters
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
    public String getCapacidadeBateria() {
        return capacidadeBateria;
    }
    public void setCapacidadeBateria(String capacidadeBateria) {
        this.capacidadeBateria = capacidadeBateria;
    }
    public boolean isCincoG() {
        return cincoG;
    }
    public void setCincoG(boolean cincoG) {
        this.cincoG = cincoG;
    }

    @Override
    public void ligar(){
        if (this.ligado == 1) {
            System.err.println("O Smartphone já está ligado!");
        }
        else {
            this.ligado = 1;
            System.out.println("Smartphone ligado com sucesso.");
        }
    }

    @Override
    public void desligar(){
        if (this.ligado == 0) {
            System.err.println("O Smartphone já está desligado!");
        }
        else {
            this.ligado = 0;
            System.out.println("Smartphone desligado com sucesso.");
        }
    }

    @Override
    public String exibirInformacoes() {
        String info;
        info = "Marca do Smartphone = " + this.getMarca() + "\n";
        info += "Modelo do Smartphone = " + this.getModelo() + "\n";
        info += "Capacidade da Bateria = " + this.getCapacidadeBateria() + "\n";
        if(this.isCincoG()) {
            info += "O aparelho suporta 5g.\n";
        }
        else {
            info += "O aparelho não suporta 5g.\n";
        }

        if(this.ligado == 0) {
            info += "O smartphone está desligado.\n";
        }
        else {
            info += "O smartphone está ligado.\n";
        }
        
        return info;
    }
}
