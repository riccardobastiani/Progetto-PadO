
#include "BlackScholes.h"
#include <cmath>

// Base Option
OptionBase::OptionBase(double spot_price, // Constructor
											 double strike_price,
											 double interest_rate,
											 double volatility,
											 double time_to_maturity) {
												 s = spot_price;
												 k = strike_price;
												 r = interest_rate;
												 sigma = volatility;
												 t = time_to_maturity;
												 setCall();
												 setPut();
					 }

// Function of Base Option
double OptionBase::getS() const { return s; } // Return S Price
double OptionBase::getK() const { return k; } // Return K Price
double OptionBase::getR() const { return r; } // Return Interest Rate
double OptionBase::getSigma() const { return sigma; } // Return Volatility
double OptionBase::getTime() const { return t; } // Return Time to Maturity
void OptionBase::setCall() { // Set the Call Option Price
	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	c = s * N(d1) - k * exp(-r * t)*N(d2);
}
void OptionBase::setPut() { // Set the Put Option Price
	double d1 = (log(s / k) + r * t) / (sigma*sqrt(t)) + 0.5*sigma*sqrt(t);
	double d2 = d1 - (sigma*sqrt(t));
	p = k * exp(-r * t)*N(-d2) - s * N(-d1);
}
double OptionBase::getCall() const { return c; } // Retur  Call Option Price
double OptionBase::getPut() const { return p; } // Return Put Option Price

// Option with Continous Payout
OptionContPay::OptionContPay(double spot_price, //Constructor
														 double strike_price,
														 double interest_rate,
														 double yield_on_underlying,
														 double volatility,
														 double time_to_maturity) : OptionBase(spot_price,
															 								   strike_price,
																							   interest_rate,
																							   volatility,
																							   time_to_maturity) {
																							   q = yield_on_underlying;
																							   setCall();
																							   setPut();
																					}
// Function of Option with Continous Payout
double OptionContPay::getQ() const { return q; } //Return Yield on Underlying
void OptionContPay::setCall() { // Set Call Option Price
	double d1 = (log(getS() / getK()) + (getR() - getQ() + 0.5*pow(getSigma(), 2))*getTime()) / (getSigma()*sqrt(getTime()));
	double d2 = d1 - (getSigma()*sqrt(getTime()));
	c = getS() * exp(-getQ()*getTime())* N(d1) - getK() * exp(-getR()*getTime()) * N(d2);
}
void OptionContPay::setPut() { // Set Put Option Price
	double d1 = (log(getS() / getK()) + (getR() - getQ() + 0.5*pow(getSigma(), 2))*getTime()) / (getSigma()*sqrt(getTime()));
	double d2 = d1 - (getSigma()*sqrt(getTime()));
	p = getK() * exp(-getR()*getTime())*N(-d2) - getS()*exp(-getQ()*getTime())*N(-d1);
}
double OptionContPay::getCall() const { return c; } //Return Call Option Price
double OptionContPay::getPut() const { return p; } //Return Put Option Price

// Foreign Currency Option
OptionForCurr::OptionForCurr(double exchange_rate, //Constructor
														 double exercise,
														 double domestic_interest_rate,
														 double foreign_interest_rate,
														 double volatility,
														 double time_to_maturity) : OptionBase(exchange_rate,
															 								   exercise,
																							   domestic_interest_rate,
																							   volatility,
																							   time_to_maturity) {
																							   r_f = foreign_interest_rate;
																							   setCall();
																							   setPut();
																					}
double OptionForCurr::getRF() const { return r_f; } //Show the Foreign Interest Rate
void OptionForCurr::setCall() { //Set Call Option Price
	double d1 = (log(getS() / getK()) + (getR() - getRF() + (0.5*pow(getSigma(), 2))) * getTime()) / (getSigma()*sqrt(getTime()));
	double d2 = d1 - getSigma() * sqrt(getTime());
	c = getS() * exp(-getRF()*getTime()) * N(d1) - getK() * exp(-getR()*getTime()) * N(d2);
}
void OptionForCurr::setPut() { //Set Put Option Price
	double d1 = (log(getS() / getK()) + (getR() - getRF() + (0.5*pow(getSigma(), 2))) * getTime()) / (getSigma()*sqrt(getTime()));
	double d2 = d1 - getSigma() * sqrt(getTime());
	p = getK()*exp(-getR()*getTime())*N(-d2) - getS() * exp(-getRF()*getTime())*N(-d1);
}
double OptionForCurr::getCall() const { return c; } //Return Call Option Price
double OptionForCurr::getPut() const { return p; } //Return Put Option Price

// Option with Dividends
OptionDiv::OptionDiv(double spot_price, //Constructor
										 double strike_price,
										 double interest_rate,
										 double volatility,
										 double time_to_maturity,
										 std::vector<double> dividends_time,
										 std::vector<double> dividends_amount) : OptionBase(spot_price,
											 												strike_price,
																							interest_rate,
																							volatility,
																							time_to_maturity) {
																							adj_s = spot_price;
																							div_time = dividends_time;
																							div_amount = dividends_amount;
																							setAdjS();
																				 }
void OptionDiv::setAdjS() { //Set the Adjusted Spot Price
	for (unsigned int i=0;i < div_time.size();i++) {
		if (div_time[i]<=getTime()){
			adj_s -= div_amount[i] * exp(-getR()*div_time[i]);
		}
	}
}
double OptionDiv::getS() const { return adj_s; } //Return the Adjusted Spot Price
void OptionDiv::setCall() { //Set Call Option Price
	double d1 = (log(getS() / getK()) + getR()*getTime()) / (getSigma()*sqrt(getTime())) + 0.5*getSigma()*sqrt(getTime());
	double d2 = d1 - (getSigma()*sqrt(getTime()));
	c = getS()*N(d1) - getK()*exp(-getR()*getTime())*N(d2);
}
void OptionDiv::setPut() { //Set Put Option Price
	double d1 = (log(getS() / getK()) + getR()*getTime()) / (getSigma()*sqrt(getTime())) + 0.5*getSigma()*sqrt(getTime());
	double d2 = d1 - (getSigma()*sqrt(getTime()));
	p = getK()*exp(-getR()*getTime())*N(-d2) - getS()*N(-d1);
}
double OptionDiv::getCall() { return c; } //Return Call Option Price
double OptionDiv::getPut() { return p; } //Return Put Option Price


// Futures Option
OptionFutures::OptionFutures(double futures_price, //Constructor
														 double strike_price,
														 double interest_rate,
														 double volatility,
														 double time_to_maturity) : OptionBase(futures_price,
															 									strike_price,
																								interest_rate,
																								volatility,
																								time_to_maturity) {
																								setCall();
																								setPut();
																					}
//Function of Futures Option
void OptionFutures::setCall() { //Set Call Option Price
	double d1 = (log(getS() / getK()) + 0.5 * pow(getSigma(), 2) * getTime()) / (getSigma() * sqrt(getTime()));
	double d2 = d1 - getSigma() * sqrt(getTime());
	c = exp(-getR()*getTime())*(getS() * N(d1) - getK() * N(d2));
}
void OptionFutures::setPut() { //Set Put Option Price
	double d1 = (log(getS() / getK()) + 0.5 * pow(getSigma(), 2) * getTime()) / (getSigma() * sqrt(getTime()));
	double d2 = d1 - getSigma() * sqrt(getTime());
	p = exp(-getR()*getTime())*(getK() * N(-d2) - getS() * N(-d1));
}
double OptionFutures::getCall() const { return c; } //Return Call Option Price
double OptionFutures::getPut() const { return p; } //Return Put Option Price

//Normal Distribuition
double N(const double& z) {
	if (z > 6.0) { return 1.0; }; // this guards against overflow
	if (z < -6.0) { return 0.0; };

	double b1 = 0.31938153;
	double b2 = -0.356563782;
	double b3 = 1.781477937;
	double b4 = -1.821255978;
	double b5 = 1.330274429;
	double p = 0.2316419;
	double c2 = 0.3989423;

	double a = fabs(z);
	double t = 1.0 / (1.0 + a * p);
	double b = c2 * exp((-z)*(z / 2.0));
	double n = ((((b5*t + b4)*t + b3)*t + b2)*t + b1)*t;
	n = 1.0 - b * n;
	if (z < 0.0) n = 1.0 - n;
	return n;
}
