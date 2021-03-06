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

La formula di Black-Scholes deriva dall'equazione omonima che è una equazione differenziale alle derivate parziali. 

![BSF](https://github.com/riccardobastiani/Progetto-PadO/blob/master/BSF.PNG)

dove:
V: prezzo dell'opzione in funzione del prezzo delle azioni S.

La formula di Black-Scholes fornisce una soluzione analitica all'equazione sopra citata e un metodo di calcolo per le opzioni call e put di tipo europeo, in particolare senza payout (dividendo, la parte che viene pagata da parte di un'azione), nella formula originaria.

Inoltre i due economisti hanno dimostrato che le informazioni necessarie sono:
1) il tasso di interesse r;
2) la variabilità del sottostante, misurata attraverso la deviazione standard sigma del logaritmo dei cambiamenti del prezzo (distribuzione log-normale);
3) data di scadenza in anni. 


La formula per il calcolo di una call è:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	c = s * N(d1) - k * exp(-r * t)*N(d2);
	
Dove ricordiamo:
- s: sottostante.
- k: prezzo di esercizio.
- r: tasso di interesse composto.
- t: tempo.
- σ: Deviazione standard del sottostante.

per la put invece:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	p = k * exp(-r * t)*N(-d2) - s * N(-d1)



# Obiettivo del progetto date le specifiche

L'obiettivo del progetto è di sfruttare la struttura ad oggetti del c++ per il calcolo delle opzioni call e put partendo da una classe OptionBase.

# Miglioramenti

**Calcolo di diverse opzioni**

Il primo miglioramento naturale è stato quello di utilizzare la formula di Black-Scholes, non solamente per il calcolo delle European Base Option ma anche di altre comuni tipologie.

**1) European option with continous payout from an underlying.**

In questo caso, poiché la formula originaria non comprende il calcolo dei dividendi, esso è stato la prima estensione della formula. Normalmente, oltre alle stock option comuni, bisogna tenere in considerazione il fatto che il sottostante può avere dei dividendi multipli durante il tempo di possesso dell'azione. 

La possibilità più semplice è quella di dividendi continui.
	

		double OptionContPay::getQ() const {return q;} 
		void OptionContPay::setCall() {
		double d1 = (log(getS() / getK()) + (getR() - getQ() + 0.5*pow(getSigma(), 2))*getTime()) / 	(getSigma()*sqrt(getTime()));`
		double d2 = d1 - (getSigma()*sqrt(getTime()));
		c = getS() * exp(-getQ()*getTime())* N(d1) - getK() * exp(-getR()*getTime()) * N(d2);

la differenza rispetto alla formula principale è data dal return del rendimento del sottostante (yield on underlying, denominato con "q") 
	
**2) European option on futures** 

La seconda estensione più comune della formula è quella che comprende i futures, ovvero contratti in cui ci si impegna a comprare a una determinata data e a un predeterminato prezzo. In particolare ci si sposta dalla formula classica e si viene ad utilizzare la formula di Black. 
	
		void OptionFutures::setCall() { //Set Call Option Price
		double d1 = (log(getS() / getK()) + 0.5 * pow(getSigma(), 2) * getTime()) / (getSigma() * sqrt(getTime()));`
		double d2 = d1 - getSigma() * sqrt(getTime());
		c = exp(-getR()*getTime())*(getS() * N(d1) - getK() * N(d2));
	
	
Il normale sottostante, in questo caso, è il prezzo di un futures/forward. (Un forward è un future su un mercato non regolamentato). 


**3) European option with foreign currency**

Una terza modifica alla formula è data quando un sottostante è data da un tasso di cambio di una valuta. 

		double OptionForCurr::getRF() const { return r_f; } dove **r_f è il foreign interest rate**


**Esempio di schermata principale**

![](https://github.com/riccardobastiani/Progetto-PadO/blob/master/form1%20nuovo.PNG)

**Apparato grafico e GUI**

La parte grafica, creata utilizzando le Windows Form, ha portato un miglioramento per l'esperienza dell'utente rispetto a quello che poteva essere l'utilizzo da terminale.
Creando una semplice interfaccia grafica 

**Salvataggio dei dati**

Parlando dell'ambito finanziario i file di tipo excel/.csv sono quelli più importanti e utilizzati, quindi l'idea di creare un salvataggio dei valori calcolati in un file di tipo .csv è sembrata la scelta più efficente. 
 
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

Il grafico per le opzioni di tipo europeo può aiutare l'utente a visualizzare variazioni di guadagno rispetto ai dati immessi e dunque a valutare i prezzi delle call e delle put in modo più semplice e più efficace rispetto solamente ai valori numerici. 

![](https://github.com/riccardobastiani/Progetto-PadO/blob/master/Graph1.png)


# Use Cases

Abbiamo tre possibili casi d'uso che un utente può avere:

- Calcolo delle quattro tipologie di prezzi di call e put.
- Salvataggio dei dati su un file .csv (comma separated value).
- Lettura dei risultati e visualizzazione dell'andamento attraverso un grafico per le base option. 

# Diagrammi UML

![diagramma UML](https://github.com/riccardobastiani/Progetto-PadO/blob/master/ClassDiagram15.png)

![Option Base](https://github.com/riccardobastiani/Progetto-PadO/blob/master/OptionBase.png)

![Option Div](https://github.com/riccardobastiani/Progetto-PadO/blob/master/OptionDiv.png)

# Esempi di GUI


![Esempio di schermata di calcolo](https://github.com/riccardobastiani/Progetto-PadO/blob/master/form2.png)





