#pragma once

#include"MyForm2.h"
#include"Sistema.h"

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
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	private:
		CSistema *objSistema;


	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			objSistema = new CSistema();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPT;
	private: System::Windows::Forms::TextBox^  txtMI;
	private: System::Windows::Forms::TextBox^  txtVP;
	private: System::Windows::Forms::TextBox^  txtIA;








	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::Button^  btnRegistrar;
	private: System::Windows::Forms::Button^  btnHasse;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  dgvProyectos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Proyecto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Puesto_de_Trabajo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Monto_de_Inversion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Volumen_de_Produccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad_de_IA;
	private: System::Windows::Forms::Button^  btnOrdenarProyectos;
	private: System::Windows::Forms::ListBox^  lstbOrdenTopo;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btnLimpiar;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPT = (gcnew System::Windows::Forms::TextBox());
			this->txtMI = (gcnew System::Windows::Forms::TextBox());
			this->txtVP = (gcnew System::Windows::Forms::TextBox());
			this->txtIA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnHasse = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnOrdenarProyectos = (gcnew System::Windows::Forms::Button());
			this->dgvProyectos = (gcnew System::Windows::Forms::DataGridView());
			this->Proyecto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Puesto_de_Trabajo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Monto_de_Inversion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Volumen_de_Produccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad_de_IA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lstbOrdenTopo = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProyectos))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad de puestos de trabajo: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Monto de inversión: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Volumen de producción: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad de impacto ambiental: ";
			// 
			// txtPT
			// 
			this->txtPT->Location = System::Drawing::Point(218, 82);
			this->txtPT->Name = L"txtPT";
			this->txtPT->Size = System::Drawing::Size(100, 22);
			this->txtPT->TabIndex = 4;
			// 
			// txtMI
			// 
			this->txtMI->Location = System::Drawing::Point(218, 134);
			this->txtMI->Name = L"txtMI";
			this->txtMI->Size = System::Drawing::Size(100, 22);
			this->txtMI->TabIndex = 5;
			// 
			// txtVP
			// 
			this->txtVP->Location = System::Drawing::Point(218, 180);
			this->txtVP->Name = L"txtVP";
			this->txtVP->Size = System::Drawing::Size(100, 22);
			this->txtVP->TabIndex = 6;
			// 
			// txtIA
			// 
			this->txtIA->Location = System::Drawing::Point(218, 231);
			this->txtIA->Name = L"txtIA";
			this->txtIA->Size = System::Drawing::Size(100, 22);
			this->txtIA->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Nombre del proyecto:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(218, 30);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 22);
			this->txtNombre->TabIndex = 9;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(341, 19);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(153, 144);
			this->btnRegistrar->TabIndex = 10;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &MyForm1::btnRegistrar_Click);
			// 
			// btnHasse
			// 
			this->btnHasse->Location = System::Drawing::Point(341, 205);
			this->btnHasse->Name = L"btnHasse";
			this->btnHasse->Size = System::Drawing::Size(153, 40);
			this->btnHasse->TabIndex = 11;
			this->btnHasse->Text = L"Generar Diagrama de Hasse";
			this->btnHasse->UseVisualStyleBackColor = true;
			this->btnHasse->Click += gcnew System::EventHandler(this, &MyForm1::btnHasse_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnLimpiar);
			this->groupBox1->Controls->Add(this->btnOrdenarProyectos);
			this->groupBox1->Controls->Add(this->btnHasse);
			this->groupBox1->Controls->Add(this->btnRegistrar);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->txtIA);
			this->groupBox1->Controls->Add(this->txtVP);
			this->groupBox1->Controls->Add(this->txtMI);
			this->groupBox1->Controls->Add(this->txtPT);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(31, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(552, 288);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Peso de indicadores:";
			// 
			// btnOrdenarProyectos
			// 
			this->btnOrdenarProyectos->Location = System::Drawing::Point(341, 176);
			this->btnOrdenarProyectos->Name = L"btnOrdenarProyectos";
			this->btnOrdenarProyectos->Size = System::Drawing::Size(153, 23);
			this->btnOrdenarProyectos->TabIndex = 12;
			this->btnOrdenarProyectos->Text = L"Ordenar proyectos";
			this->btnOrdenarProyectos->UseVisualStyleBackColor = true;
			this->btnOrdenarProyectos->Click += gcnew System::EventHandler(this, &MyForm1::btnOrdenarProyectos_Click);
			// 
			// dgvProyectos
			// 
			this->dgvProyectos->AllowUserToAddRows = false;
			this->dgvProyectos->AllowUserToDeleteRows = false;
			this->dgvProyectos->AllowUserToOrderColumns = true;
			this->dgvProyectos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProyectos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Proyecto,
					this->Puesto_de_Trabajo, this->Monto_de_Inversion, this->Volumen_de_Produccion, this->Cantidad_de_IA
			});
			this->dgvProyectos->Location = System::Drawing::Point(31, 341);
			this->dgvProyectos->Name = L"dgvProyectos";
			this->dgvProyectos->ReadOnly = true;
			this->dgvProyectos->Size = System::Drawing::Size(552, 150);
			this->dgvProyectos->TabIndex = 13;
			// 
			// Proyecto
			// 
			this->Proyecto->HeaderText = L"Proyecto";
			this->Proyecto->Name = L"Proyecto";
			this->Proyecto->ReadOnly = true;
			// 
			// Puesto_de_Trabajo
			// 
			this->Puesto_de_Trabajo->HeaderText = L"Puestos de Trabajo";
			this->Puesto_de_Trabajo->Name = L"Puesto_de_Trabajo";
			this->Puesto_de_Trabajo->ReadOnly = true;
			// 
			// Monto_de_Inversion
			// 
			this->Monto_de_Inversion->HeaderText = L"Monto de inversión";
			this->Monto_de_Inversion->Name = L"Monto_de_Inversion";
			this->Monto_de_Inversion->ReadOnly = true;
			// 
			// Volumen_de_Produccion
			// 
			this->Volumen_de_Produccion->HeaderText = L"Volumen de producción";
			this->Volumen_de_Produccion->Name = L"Volumen_de_Produccion";
			this->Volumen_de_Produccion->ReadOnly = true;
			// 
			// Cantidad_de_IA
			// 
			this->Cantidad_de_IA->HeaderText = L"Cantidad de impacto ambiental";
			this->Cantidad_de_IA->Name = L"Cantidad_de_IA";
			this->Cantidad_de_IA->ReadOnly = true;
			// 
			// lstbOrdenTopo
			// 
			this->lstbOrdenTopo->FormattingEnabled = true;
			this->lstbOrdenTopo->ItemHeight = 16;
			this->lstbOrdenTopo->Location = System::Drawing::Point(12, 19);
			this->lstbOrdenTopo->Name = L"lstbOrdenTopo";
			this->lstbOrdenTopo->Size = System::Drawing::Size(527, 84);
			this->lstbOrdenTopo->TabIndex = 14;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lstbOrdenTopo);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(31, 517);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(552, 115);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Orden a desarrollar proyectos";
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(341, 252);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(153, 23);
			this->btnLimpiar->TabIndex = 13;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm1::btnLimpiar_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(618, 688);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dgvProyectos);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"Análisis de proyectos";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProyectos))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public: void MarshalString(String ^ s, string& os) {
				using namespace Runtime::InteropServices;
				const char* chars =
					(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				os = chars;
				Marshal::FreeHGlobal(IntPtr((void*)chars));
	}


	private: System::Void btnRegistrar_Click(System::Object^  sender, System::EventArgs^  e) {

				 //Convertidor de System::String a std:string
				 string nombre;
				 MarshalString(txtNombre->Text, nombre);



				 int indice1 = Convert::ToInt32(txtPT->Text);

				 float indice2 = Convert::ToDouble(txtMI->Text);

				 int indice3 = Convert::ToInt32(txtVP->Text);

				 int indice4 = Convert::ToInt32(txtIA->Text);


				 objSistema->Insertar(indice1, indice2, indice3, indice4, nombre);

				 dgvProyectos->Rows->Add();
				 int cantfilas = dgvProyectos->Rows->Count - 1;
				 dgvProyectos[0, cantfilas]->Value = txtNombre->Text;
				 dgvProyectos[1, cantfilas]->Value = txtPT->Text;
				 dgvProyectos[2, cantfilas]->Value = txtMI->Text;
				 dgvProyectos[3, cantfilas]->Value = txtVP->Text;
				 dgvProyectos[4, cantfilas]->Value = txtIA->Text;

				 //Volviendolo a poner en blanco
				 txtNombre->Text = "";
				 txtPT->Text = "";
				 txtMI->Text = "";
				 txtVP->Text = "";
				 txtIA->Text = "";





	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {





	}
	private: System::Void btnHasse_Click(System::Object^  sender, System::EventArgs^  e) {



				 MyForm2 ^ frm2 = gcnew MyForm2();


				 CEmpresa** _arrefinal = new CEmpresa*[objSistema->get_arrFinal().size()];

				 for (int i = 0; i < objSistema->get_arrFinal().size(); i++)
				 {
					 _arrefinal[i] = objSistema->get_arrFinal().at(i);
				 }

				 frm2->recibirArreglo2(_arrefinal, objSistema->get_arrFinal().size());
				 frm2->RecibirArreglo();




				 frm2->ShowDialog();


	}
	private: System::Void btnOrdenarProyectos_Click(System::Object^  sender, System::EventArgs^  e) {
				 objSistema->AnalizarPT();
				 objSistema->AnalizarIN();
				 objSistema->AnalizarVP();
				 objSistema->AnalizarIA();

				 objSistema->ResultadoFinal();

				 objSistema->AnalizarOrdenaTopo();

				 int j = 0;

				 for (int i = 0; i < objSistema->get_arrFinal().size(); i++)
				 {
					 String^ nombre = objSistema->get_empresa(i)->get_nombre();
					 j = i + 1;
					 lstbOrdenTopo->Items->Add(j + "°.- " + nombre);
				 }






	}
	private: System::Void btnLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {

				 objSistema->BorrarTodoArreglos();
				 dgvProyectos->Rows->Clear();

				 lstbOrdenTopo->Items->Clear();


	}
};
}
