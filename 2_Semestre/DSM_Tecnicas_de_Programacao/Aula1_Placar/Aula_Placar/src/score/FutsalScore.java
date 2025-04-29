package score;

public class FutsalScore extends BasicScore{
	
	private int qCardA;
	private int qCardB;
	
	public int getqCardA() {
		return qCardA;
	}
	public void setqCardA(int qCardA) {
		this.qCardA = qCardA;
	}
	public int getqCardB() {
		return qCardB;
	}
	public void setqCardB(int qCardB) {
		this.qCardB = qCardB;
	}
	
	public FutsalScore(String ta, String tb) {
		super(ta,tb);
		this.setqCardA(0);
		this.setqCardB(0);
	}
	
	public void giveCard(int t){
		if(t==1) {
			this.setqCardA(this.getqCardA()+1);
		}
		else {
			this.setqCardB(this.getqCardB()+1);
		}
	}
	public void removeCard(int t){
		if(t==1) {
			this.setqCardA(this.getqCardA()-1);
		}
		else {
			this.setqCardB(this.getqCardB()-1);
		}
	}
	
	@Override
	public String show() {
		String showScore = "Times:   " + this.getNameA() + " X " + this.getNameB() + "\n";
		showScore += "Placar:  ";
		showScore += Integer.toString(this.getScoreA()) + "   " + Integer.toString(this.getScoreB()) + "\n";
		showScore += "Cartões: ";
		showScore += Integer.toString(this.getqCardA()) + "   " + Integer.toString(this.getqCardB()) + "\n";
		return showScore;

	}
}
