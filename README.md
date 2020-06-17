# Progetto-PadO

TODO
[] mettere codice per le altre 3 formule
[] codice per il salvataggio e i csv
[] codice per il grafico


# **Descrizione**

Il progetto in questione parte dalla celebre formula di Black-Scholes per il calcolo del prezzo di non arbitraggio di un'opzione
call (put) di tipo europeo.

# Cosa significa la formula di Black-Scholes ?

Un'opzione è un "security derivative", ovvero è un titolo (security) che ottiene il proprio valore o prezzo da un altro asset finanziario oppure da un indice detto sottostante (underlying).

In generale abbiamo che con "s" si denota il valore o il prezzo di questo sottostante (spot underlying price). Dobbiamo allora tenere traccia del prezzo del tempo nel queale questo prezzo viene osservato.
Una opzione call ( o put) garantisce al proprietario, il diritto ma non l'obbligo di comprare (o vendere) alcuni sottostanti ad un dato prezzo k, chiamato prezzo di esercizio (Strike/Exercise price) a una determinata data di scadenza (t), oppure prima. 

Se l'opzione è di tipo europeo, può essere esercitata solamente alla data di scadenza (time to maturity) dell'opzione.

In caso contrario, viene chiamata di tipo americano e può esserce esercitata in ogni momento fino alla data di scadenza inclusa. Se viene esercitata al tempo t allora l'opzione prevede profitto. 

La formula di Black-Scholes fornisce una soluzione analitica per le opzioni call e put di tipo europeo. E in particolare senza payout, per quando concerne la formula orignale. 
Inoltre i due matematici hanno dimostrato che le informazioni necessarie sono
1) il tasso di interesse r
2) la variabilità del sottostante, misurata attraverso la deviazione standard sigma del logaritmo dei cambiamenti del prezzo 
3) data di scadenza in anni. 


La formula risulta essere per la call:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	c = s * N(d1) - k * exp(-r * t)*N(d2);
	

per la put:

	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	p = k * exp(-r * t)*N(-d2) - s * N(-d1)



# Obiettivo del progetto date le specifiche

L'obiettivo del progetto è di sfruttare la struttura ad oggetti del c++ per il calcolo delle opzioni call e put. 

# Miglioramenti

**Calcolo di diverse opzioni**

Il primo miglioramento è stato quello di utilizzare la formula di Black-Scholes, non solamente per il calcolo delle European Base Option ma anche di altre comuni tipologie.

1) European option with continous payout from an underlying

	`double OptionContPay::getQ() const { return q; } 
		`void OptionContPay::setCall() {
		`double d1 = (log(getS() / getK()) + (getR() - getQ() + 0.5*pow(getSigma(), 2))*getTime()) / 	(getSigma()*sqrt(getTime()));`
		`double d2 = d1 - (getSigma()*sqrt(getTime()));
		`c = getS() * exp(-getQ()*getTime())* N(d1) - getK() * exp(-getR()*getTime()) * N(d2);
		
	la differenza rispetto alla formula principale è data dal return del rendimento del sottostante (yield on underlying) 
	
2) European option on futures 
	la questione dei futures invece si deve alla formula di Black che deriva dalla formula di Black-Scholes
	
	`void OptionFutures::setCall() { //Set Call Option Price
	`double d1 = (log(getS() / getK()) + 0.5 * pow(getSigma(), 2) * getTime()) / (getSigma() * sqrt(getTime()));`
	`double d2 = d1 - getSigma() * sqrt(getTime());
	`c = exp(-getR()*getTime())*(getS() * N(d1) - getK() * N(d2));
	
la differenza è che il normale sottostante è invece il prezzo di un futures/forward. (Un forward è un future su un mercato non regolamentato) 


3) European option with foreign currency

	`double OptionForCurr::getRF() const { return r_f; } dove **r_f è il foreign interest rate**

![Esempio di schermata principale](https://github.com/riccardobastiani/Progetto-PadO/blob/master/form1%20nuovo.PNG)

**Apparato grafico e GUI**

La parte grafica, creata utilizzando le Windows Form ha portato un miglioramento per l'esperienza dell'utente rispetto a quello che poteva essere l'utilizzo da terminale. 

**Salvataggio dei dati**

Il salvataggio dei dati in un file di tipo .csv per quanto riguarda i risultati ottenuti è risultato essere una miglioria efficace. 

**Grafico**

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

# Esempio di grafico

![](https://github.com/riccardobastiani/Progetto-PadO/blob/master/Graph1.png)




