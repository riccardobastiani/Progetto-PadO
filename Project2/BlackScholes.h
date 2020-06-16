
#include <vector>
#include <cmath>
#ifndef BLACKSCHOLES_H
#define BLACKSCHOLES_H

/*
Class relatives the Base Option with
  S: Spot (underlying) Price
  K: Strike (exercise) Price
  r: Interest Rate
  sigma: Volatility
  t: Time to Maturity
*/

class OptionBase {
public:
	OptionBase(double,double,double,double,double); // Constructor
	//~OptionBase(); // Destructor
	virtual double getS() const;
	double getK() const;
	double getR() const;
	double getSigma() const;
	double getTime() const;
	virtual void setCall();
	virtual void setPut();
	virtual double getCall() const;
	virtual double getPut() const;
protected:
	double c; // Call Price
	double p; // Put Price
private:
	double s;
	double k;
	double r;
	double sigma;
	double t;
};

/*
Class relatives the Option with Continous Payout from Underlying
  S: Spot Price
  K: Strike (exercise) Price
  r: Interest rate
  q: Yield on Underlying
  sigma: Volatility
  t: Time to Maturity
*/

class OptionContPay : public OptionBase {
public:
	OptionContPay(double,double,double,double,double,double);
	//~OptionContPay();
	double getQ()const;
	virtual void setCall();
	virtual void setPut();
	virtual double getCall() const;
	virtual double getPut() const;
private:
	double q;
};

/*
Class relatives the Foreign Currency Option
  S: Exhange Rate
  K: Exercise
  r: domestic interest rate
  r_f: foreign interest rate
  sigma: Volatility
  t: Time to Maturity
*/

class OptionForCurr : public OptionBase {
public:
	OptionForCurr(double,double,double,double,double,double); //Constructor
	//~OptionForCurr(); //Destructor
	double getRF() const;
	virtual void setCall();
	virtual void setPut();
	virtual double getCall() const;
	virtual double getPut() const;
private:
	double r_f;
};

/*
Class relatives the Option with Dividends
  S: Spot Price
  K: Strike (exercise) Price
  r: Interest rate
  q: Yield on Underlying
  sigma: Volatility
  t: Time to Maturity
*/

class OptionDiv : public OptionBase {
public:
	OptionDiv(double,double,double,double,double,std::vector<double>,std::vector<double>); //Constructor
	//~OptionDiv(); //Destructor
	virtual double getS() const;
	virtual void setCall();
	virtual void setPut();
	virtual double getCall();
	virtual double getPut();
	void setAdjS();
private:
	double adj_s;
	std::vector<double> div_time;
	std::vector<double> div_amount;
};

/*
Class relatives the Option on Futures
  S: Future Prices (S->F)
  K: Strike (exercise) Price
  r: Interest Rate
  sigma: Volatility
  t: Time to Maturity
*/

class OptionFutures : public OptionBase {
public:
	OptionFutures(double,double,double,double,double); // Constructor
	//~OptionFutures(); // Destructor
	virtual void setCall();
	virtual void setPut();
	virtual double getCall() const;
	virtual double getPut() const;
};

//Normal Distribuition
double N(const double&);
#endif
