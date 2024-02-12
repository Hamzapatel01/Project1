#pragma once
class TravelExpense
{
private:
	double Milestodrive;
	double Gasprice;
	double Milespergallon;
	double Expense;
public:
	TravelExpense();
	TravelExpense(double, double, double);
	void setMilestodrive(double);
	void setGasprice(double);
	void setMilespergallon(double);
	double getMilestodrive();
	double getGasprice();
	double getMilespergallon();
	double getExpense();
	void CalculateExpense();


};

