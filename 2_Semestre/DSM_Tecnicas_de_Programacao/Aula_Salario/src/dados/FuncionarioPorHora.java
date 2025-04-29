package dados;

public class FuncionarioPorHora extends Funcionario {

    public FuncionarioPorHora(String n, int idFunc, int ht, double vh) {
        super(n, idFunc);
        this.setHorasTrabalhadas(ht);
        this.setValorHora(vh);
    }

    private int horasTrabalhadas;
    private double valorHora;

    // Getters e Setters
    public void setHorasTrabalhadas(int horasTrabalhadas){
        this.horasTrabalhadas = horasTrabalhadas;
    }
    public void setValorHora(double valorHora){
        this.valorHora = valorHora;
    }
    public int getHorasTrabalhadas(){
        return horasTrabalhadas;
    }
    public double getValorHora(){
        return valorHora;
    }

    @Override
    public double calcularSalario(){
        return this.getValorHora() * this.getHorasTrabalhadas();
    }

}
