#pragma once

using namespace System;
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class CEmpresa
{
private:
	float cantPT, cantIN, cantVP, cantIA;
	int puestoPT, puestoIN, puestoVP, puestoIA;
	int puntajeGlobal;
	string nombre;

	//para la parte grafica

	int x;
	int y;

	int nivel;

public:
	CEmpresa(float _cantPT, float _cantIN, float _cantVP, float _cantIA, string _nombre);
	~CEmpresa();

	void set_cantPT(float _cantPT);
	float get_cantPT();

	void set_cantIN(float _cantIN);
	float get_cantIN();

	void set_cantVP(float _cantVP);
	float get_cantVP();

	void set_cantIA(float _cantIA);
	float get_cantIA();

	void set_puestoPT(int _puestoPT);
	int get_puestoPT();


	void set_puestoIN(int _puestoIN);
	int get_puestoIN();

	void set_puestoVP(int _puestoVP);
	int get_puestoVP();

	void set_puestoIA(int _puestoIA);
	int get_puestoIA();

	void set_puntajeGlobal(int _puntajeGlobal);
	int get_puntajeGlobal();

	void set_nombre(string _nombre);
	String ^get_nombre();

	void set_x(int _x);
	int get_x();

	void set_y(int _y);
	int get_y();

	void set_nivel(int _nivel);
	int get_nivel();

};
