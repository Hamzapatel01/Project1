#include "TravelExpense.h"
TravelExpense::TravelExpense() {
	this->Milestodrive = 0;
	this->Milespergallon = 0;
	this->Gasprice = 0;
}
TravelExpense::TravelExpense(double mtd, double mpg, double GP) {
	this->Milestodrive = mtd;
	this->Milespergallon = mpg;
	this->Gasprice = GP;

}
void TravelExpense::setMilestodrive(double mtd) {
	this->Milestodrive = mtd;
}
void TravelExpense::setMilespergallon(double mpg) {
	this->Milestodrive = mpg;
}
void TravelExpense::setGasprice(double GP) {
	this->Milestodrive = GP;
}
double TravelExpense::getMilestodrive() {
	return this->Milestodrive;
}
double TravelExpense::getMilespergallon() {
	return this->Milespergallon;
}
double TravelExpense::getGasprice() {
	return this->Gasprice;
}
double TravelExpense::getExpense() {
	return this->Expense;
}
void TravelExpense::CalculateExpense() {
	this->Expense = Milestodrive / Milespergallon * Gasprice;
}