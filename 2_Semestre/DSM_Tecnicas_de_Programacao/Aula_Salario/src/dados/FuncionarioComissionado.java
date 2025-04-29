package dados;

public class FuncionarioComissionado extends Funcionario {

    private double valorVendas;
    private double percentualComissao;

    public FuncionarioComissionado(String n, int idFunc, double vv, double pc){
        super(n, idFunc);
        this.setValorVendas(vv);
        this.setPercentualComissao(pc);
    }

    // Getters e Setters
    public void setValorVendas(double valorVendas){
        this.valorVendas = valorVendas;
    }
    public void setPercentualComissao(double percentualComissao){
        this.percentualComissao = percentualComissao;
    }

    public double getValorVendas(){
        return valorVendas;
    }
    public double getPercentualComissao(){
        return percentualComissao;
    }

    @Override
    public double calcularSalario(){
        return this.getPercentualComissao() * this.getValorVendas();
    }
}
