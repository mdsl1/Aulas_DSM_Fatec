package dados;

public class Televisao implements Eletronicos{

    private String marca;
    private float polegadas;
    private String resolucao;
    private int smartTv;
    private int ligado;

    // Construtor
    public Televisao(String m, float p, String r, int s) {
        this.setMarca(m);
        this.setPolegadas(p);
        this.setResolucao(r);
        this.setSmartTv(s);
        this.ligado = 0;
    }

    //Getters e setters
    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public float getPolegadas() {
        return polegadas;
    }
    public void setPolegadas(float polegadas) {
        this.polegadas = polegadas;
    }
    public String getResolucao() {
        return resolucao;
    }
    public void setResolucao(String resolucao) {
        this.resolucao = resolucao;
    }
    public int getSmartTv() {
        return smartTv;
    }
    public void setSmartTv(int smartTv) {
        this.smartTv = smartTv;
    }

    @Override
    public void ligar(){
        if (this.ligado == 1) {
            System.err.println("A TV já está ligada!");
        }
        else {
            this.ligado = 1;
            System.out.println("TV ligada com sucesso.");
        }
    }

    @Override
    public void desligar(){
        if (this.ligado == 0) {
            System.err.println("A TV já está desligada!");
        }
        else {
            this.ligado = 0;
            System.out.println("TV desligada com sucesso.");
        }
    }

    @Override
    public String exibirInformacoes() {
        String info;
        info = "Marca da TV = " + this.getMarca() + "\n";
        info += "Polegadas = " + Float.toString(this.polegadas) + "\n";
        info += "Resolução = " + this.getResolucao() + "\n";
        if(this.getSmartTv() == 1) {
            info += "É uma SmartTv.\n";
        }
        else {
            info += "Não é uma SmartTv.\n";
        }

        if(this.ligado == 0) {
            info += "A TV está desligada.\n";
        }
        else {
            info += "A TV está ligada.\n";
        }
        
        return info;
    }
}
