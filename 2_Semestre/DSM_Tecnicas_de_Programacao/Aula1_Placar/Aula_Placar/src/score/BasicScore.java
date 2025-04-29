package score;

// Objeto do placar básico
public class BasicScore {
	
	private String nameA;
	private String nameB;
	private int scoreA;
	private int scoreB;
	
	public BasicScore(String ta, String tb) {
		this.setNameA(ta);
		this.setNameB(tb);
		this.scoreA = 0;
		this.scoreB = 0;
	}
	
	// Recebe o parâmetro do time e adiciona a pontuação referente ao mesmo
	public void addPoint(int t) {
		if(t==1) {
			this.scoreA += 1;
		}
		else {
			this.scoreB += 1;
		}
	}
	
	// Recebe o parâmetro do time e remove a pontuação referente ao mesmo
	public void rmvPoint(int t) {
		if(t==1) {
			this.scoreA -= 1;
		}
		else {
			this.scoreB -= 1;
		}
	}
	
	// Monta a estrutura do placar e retorna à função o texto
	public String show() {
		String showScore;
		showScore = this.nameA + " X " + this.nameB + "\n";
		showScore += Integer.toString(this.scoreA) + "   " + Integer.toString(this.scoreB) + "\n";
		return showScore;
	}
	
	// Recebe o parâmetro e define o nome do time A
	public void setNameA(String nameA) {
		this.nameA = nameA;
	}
	// Recebe o parâmetro e define o nome do time B
	public void setNameB(String nameB) {
		this.nameB = nameB;
	}
		
	public int getScoreA() {
		return scoreA;
	}

	public void setScoreA(int scoreA) {
		this.scoreA = scoreA;
	}

	public int getScoreB() {
		return scoreB;
	}

	public void setScoreB(int scoreB) {
		this.scoreB = scoreB;
	}

	public String getNameA() {
		return nameA;
	}

	public String getNameB() {
		return nameB;
	}
}
