#pragma once
#include <iostream>
using namespace std;
class diem
{
private:
	float x;
	float y;
public:
	diem();
	diem(float, float);
	void nhap();
	void xuat();
	void setx(float);
	void sety(float);
	diem vector(diem);
	float getx();
	float gety();
	void setxy(float, float);
	void tinhtien(float = 0, float = 0);
	void quay(float);
	~diem();
};
