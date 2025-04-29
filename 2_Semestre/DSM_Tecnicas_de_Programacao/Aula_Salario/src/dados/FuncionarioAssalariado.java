package dados;

public class FuncionarioAssalariado extends Funcionario {
    
    public FuncionarioAssalariado(String n, int idFunc, double sal){
        super(n,idFunc);
        this.setSalarioFixo(sal);
    }
    
    private double salarioFixo;

    @Override
    public double calcularSalario(){
        return this.salarioFixo;
    }

    public void setSalarioFixo(double s){
        this.salarioFixo = s;
    }
}
