# Progetto-PadO


# **Descrizione**

Il progetto in questione parte dalla celebre formula di Black-Scholes per il calcolo del prezzo di non arbitraggio di un'opzione
call (put) di tipo europeo.

# Considerazioni sul significato dei termini finanziari necessari.

Innanzitutto dobbiamo comprendere cosa sia un'opzione.
In finanza un'opzione è un "security derivative", ovvero è un titolo (security) che ottiene (derivate) il proprio valore o prezzo da un altro asset finanziario oppure da un indice detto sottostante (underlying) che normalmente viene denotato con la lettera "s".

Una opzione call (o put) garantisce al proprietario il diritto, ma non l'obbligo, di comprare (o vendere) alcuni sottostanti ad un dato prezzo k, chiamato prezzo di esercizio (Strike/Exercise price) a una determinata data di scadenza (t), oppure prima. 

Se l'opzione è di tipo europeo, può essere esercitata solamente alla data di scadenza (time to maturity) dell'opzione.

In caso contrario, viene chiamata di tipo americano e può essere esercitata in ogni momento fino alla data di scadenza inclusa. Se viene esercitata al tempo t allora l'opzione prevede profitto. 

# Cos'è e a cosa serve la formula di Black-Scholes.

La formula di Black-Scholes fornisce una soluzione analitica per le opzioni call e put di tipo europeo e in particolare senza payout (dividendo, la parte che viene pagata da parte di un'azione), per quanto concerne la formula orignale. 

Inoltre i due economisti hanno dimostrato che le informazioni necessarie sono:
1) il tasso di interesse r;
2) la variabilità del sottostante, misurata attraverso la deviazione standard sigma del logaritmo dei cambiamenti del prezzo;
3) data di scadenza in anni. 


La formula per il calcolo di una call è:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	c = s * N(d1) - k * exp(-r * t)*N(d2);
	
Dove ricordiamo:
s: sottostante
k: prezzo di esercizio
r: tasso di interesse composto
t: tempo
σ: Deviazione standard del sottostante

per la put invece:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	p = k * exp(-r * t)*N(-d2) - s * N(-d1)



# Obiettivo del progetto date le specifiche

L'obiettivo del progetto è di sfruttare la struttura ad oggetti del c++ per il calcolo delle opzioni call e put. 

# Miglioramenti

**Calcolo di diverse opzioni**

Il primo miglioramento è stato quello di utilizzare la formula di Black-Scholes, non solamente per il calcolo delle European Base Option ma anche di altre comuni tipologie.

1) European option with continous payout from an underlying


		double OptionContPay::getQ() const { return q; } 
		void OptionContPay::setCall() {
		double d1 = (log(getS() / getK()) + (getR() - getQ() + 0.5*pow(getSigma(), 2))*getTime()) / 	(getSigma()*sqrt(getTime()));`
		double d2 = d1 - (getSigma()*sqrt(getTime()));
		c = getS() * exp(-getQ()*getTime())* N(d1) - getK() * exp(-getR()*getTime()) * N(d2);

la differenza rispetto alla formula principale è data dal return del rendimento del sottostante (yield on underlying) 
	
2) European option on futures 
	la questione dei futures invece si deve alla formula di Black che deriva dalla formula di Black-Scholes
	
		void OptionFutures::setCall() { //Set Call Option Price
		double d1 = (log(getS() / getK()) + 0.5 * pow(getSigma(), 2) * getTime()) / (getSigma() * sqrt(getTime()));`
		double d2 = d1 - getSigma() * sqrt(getTime());
		c = exp(-getR()*getTime())*(getS() * N(d1) - getK() * N(d2));
	
	
la differenza è che il normale sottostante è invece il prezzo di un futures/forward. (Un forward è un future su un mercato non regolamentato) 


3) European option with foreign currency

		double OptionForCurr::getRF() const { return r_f; } dove **r_f è il foreign interest rate**


**Esempio di schermata principale**

![](https://github.com/riccardobastiani/Progetto-PadO/blob/master/form1%20nuovo.PNG)

**Apparato grafico e GUI**

La parte grafica, creata utilizzando le Windows Form ha portato un miglioramento per l'esperienza dell'utente rispetto a quello che poteva essere l'utilizzo da terminale. 

**Salvataggio dei dati**

Il salvataggio dei dati in un file di tipo .csv per quanto riguarda i risultati ottenuti è risultato essere una miglioria efficace. 
Qui di seguito un esempio di codice nel calcolo delle call(o put) europee

	private: System::Void save_data2_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV file(*.csv)|*.csv";
		saveFileDialog1->Title = "Save a CSV File";
		saveFileDialog1->ShowDialog();
		StreamWriter^ outfile = gcnew StreamWriter(saveFileDialog1->FileName, std::ios::app);
		String ^s = s_textbox2->Text;
		String ^k = k_textbox2->Text;
		String ^r = r_textbox2->Text;
		String ^sigma = sigma_textbox2->Text;
		String ^t = t_textbox2->Text;
		String ^call = call_textbox2->Text;
		String ^put = put_textbox2->Text;
		String ^etichette = "Spot Price; Strike Price ; Interest Rate; Sigma; Time; Call Result; Put Result";
		String ^out = s + ";" + k + ";" + r + ";" + sigma + ";" + t + ";" + call + ";" + put;

**Grafico**

![](https://github.com/riccardobastiani/Progetto-PadO/blob/master/Graph1.png)


# Use Cases

Abbiamo tre possibili casi d'uso che un utente può avere:

- Calcolo delle quattro tipologie di prezzi di call e put.
- Salvataggio dei dati su un file .csv (comma separated value).
- Lettura dei risultati e visualizzazione dell'andamento attraverso un grafico per le base option. 

# Diagrammi UML

![diagramma UML](https://github.com/riccardobastiani/Progetto-PadO/blob/master/Image.png)

![Option Base](https://github.com/riccardobastiani/Progetto-PadO/blob/master/OptionBase.png)

![Option Div](https://github.com/riccardobastiani/Progetto-PadO/blob/master/OptionDiv.png)

# Esempi di GUI


![Esempio di schermata di calcolo](https://github.com/riccardobastiani/Progetto-PadO/blob/master/form2.png)





