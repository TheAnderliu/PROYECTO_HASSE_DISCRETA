#pragma once

#include"Empresa.h"
#include"Sistema.h"
#include <vector>
#include <string>
using namespace std;

namespace PROYECTO_HASSE_DISCRETA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	private:

		int contY;
		int contX;
		int x;
		int y;
		CEmpresa** arreglonuevo;
		int tamanioarreglo;
		int niveltotal;

	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
			contY = 1;
			contX = 1;
			x = 0;
			y = 0;
			tamanioarreglo=0;
			niveltotal=0;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 439);
			this->Name = L"MyForm2";
			this->Text = L"Diagrama de Hasse";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::MyForm2_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	public: void recibirArreglo2(CEmpresa** _arrefinal, int _tamanioarreglo){

				arreglonuevo = _arrefinal;
				tamanioarreglo = _tamanioarreglo;

	}




	public: void RecibirArreglo(){

				//Obtener el numero de niveles totales
				for (int j = 0; j < tamanioarreglo; j++)
				{


					if (j - 1 >= 0){

						if (arreglonuevo[j - 1]->get_puntajeGlobal() != arreglonuevo[j]->get_puntajeGlobal())
						{
							niveltotal++;
						}

					}
				}




				//Modifica el espacio vertical
				for (int j = 0; j < tamanioarreglo; j++)
				{


					if (j - 1 >= 0){

						if (arreglonuevo[j - 1]->get_puntajeGlobal() != arreglonuevo[j]->get_puntajeGlobal())
						{
							contY++;
							contX = 1;
						}

					}


					//Modifica el  espacio horizaontal

					if (j - 1 >= 0){

						if (arreglonuevo[j - 1]->get_puntajeGlobal() == arreglonuevo[j]->get_puntajeGlobal())
						{
							//Asignando el nivel de cada cuadro
							contX++;
						}

					}



					//Asignando las coordenadas de cada cuadro 
					x = 100 + (contX * 80);
					if (niveltotal==0)
					{
						y = 200;
					}
					else {

						y = 10+(niveltotal * 100) + (contY * -50);
					}

					arreglonuevo[j]->set_x(x);

					arreglonuevo[j]->set_y(y);

					//Asignando el nivel para cada proyecto del vector
					arreglonuevo[j]->set_nivel(contY);



					Button^ btnNodo = gcnew Button();
					btnNodo->Location = System::Drawing::Point(x, y);



					btnNodo->AutoSize = true;

					//btnNodo->AutoSizeMode=GrowOnly;
					//btnNodo->Size = System::Drawing::Size(75, 23);
					btnNodo->TabIndex = 19;
					btnNodo->Text = arreglonuevo[j]->get_nombre();
					btnNodo->UseVisualStyleBackColor = true;
					btnNodo->BackColor = Color::CornflowerBlue;
					btnNodo->Parent = this;
				}


				
	

	}

			


			


	





	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
			

	}

private: System::Void MyForm2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

			 for (int i = 0; i < tamanioarreglo - 1; i++)
			 {
				 for (int j = i + 1; j < tamanioarreglo; j++)
				 {
					 if (arreglonuevo[i]->get_nivel() + 1 == arreglonuevo[j]->get_nivel())
					 {

						 Pen^ lapicero = gcnew Pen(Color::CornflowerBlue, 5);


						 e->Graphics->DrawLine(lapicero, arreglonuevo[i]->get_x()+50, arreglonuevo[i]->get_y(), arreglonuevo[j]->get_x()+50, arreglonuevo[j]->get_y()+10);
					 }
				 }
			 }

}
};
}
