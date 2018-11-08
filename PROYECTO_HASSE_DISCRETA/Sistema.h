#pragma once
#include "stdafx.h"

class CSistema
{
private:
	vector<CEmpresa*> arreEmpr;

	vector<CEmpresa*> arreFinal;

	vector<int> arrePT;

	vector<float> arreIN;

	vector<int> arreVP;

	vector<int> arreIA;

public:
	CSistema();
	~CSistema();
	void Insertar(float _cantPT, float _cantIN, float _cantVP, float _cantIA, string _nombre);
	void Borrar();
	void AnalizarPT();
	void AnalizarIN();
	void AnalizarVP();
	void AnalizarIA();
	void AnalizarOrdenaTopo();
	void ResultadoFinal();
	CEmpresa* get_empresa(int _numeroempresa);
	vector<CEmpresa*> get_arrFinal();


	void BorrarTodoArreglos();

};
