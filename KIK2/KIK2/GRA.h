#pragma once
#include <time.h>
#include <stdlib.h>

namespace KIK2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o GRA
	/// </summary>
	public ref class GRA : public System::Windows::Forms::Form
	{
		bool wcisniety = 0;
		bool wygral = 0;
		int licz0 = 0;
		int liczX = 0;
		int liczRuch = 0;
		bool wylosowana = false;
		
		//int tabWyp[8];
	private: System::Windows::Forms::TextBox^ textBox1;
		   String^ mistrz = " ";
	public:
		GRA(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~GRA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ LiczX;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LiczO;


	private: System::Windows::Forms::PictureBox^ PB1;
	private: System::Windows::Forms::PictureBox^ PB2;
	private: System::Windows::Forms::PictureBox^ PB3;
	private: System::Windows::Forms::PictureBox^ PB5;




	private: System::Windows::Forms::PictureBox^ PB4;
	private: System::Windows::Forms::PictureBox^ PB6;
	private: System::Windows::Forms::PictureBox^ PB8;
	private: System::Windows::Forms::PictureBox^ PB9;




	private: System::Windows::Forms::PictureBox^ PB7;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GRA::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LiczX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LiczO = (gcnew System::Windows::Forms::Label());
			this->PB1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5 = (gcnew System::Windows::Forms::PictureBox());
			this->PB4 = (gcnew System::Windows::Forms::PictureBox());
			this->PB6 = (gcnew System::Windows::Forms::PictureBox());
			this->PB8 = (gcnew System::Windows::Forms::PictureBox());
			this->PB9 = (gcnew System::Windows::Forms::PictureBox());
			this->PB7 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB7))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrane X";
			// 
			// LiczX
			// 
			this->LiczX->AutoSize = true;
			this->LiczX->Location = System::Drawing::Point(32, 39);
			this->LiczX->Name = L"LiczX";
			this->LiczX->Size = System::Drawing::Size(13, 13);
			this->LiczX->TabIndex = 1;
			this->LiczX->Text = L"0";
			this->LiczX->Click += gcnew System::EventHandler(this, &GRA::LiczX_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Wygrane O";
			// 
			// LiczO
			// 
			this->LiczO->AutoSize = true;
			this->LiczO->Location = System::Drawing::Point(231, 39);
			this->LiczO->Name = L"LiczO";
			this->LiczO->Size = System::Drawing::Size(13, 13);
			this->LiczO->TabIndex = 3;
			this->LiczO->Text = L"0";
			// 
			// PB1
			// 
			this->PB1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB1.Image")));
			this->PB1->Location = System::Drawing::Point(16, 70);
			this->PB1->Name = L"PB1";
			this->PB1->Size = System::Drawing::Size(48, 60);
			this->PB1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB1->TabIndex = 4;
			this->PB1->TabStop = false;
			this->PB1->Tag = L"\?";
			this->PB1->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB2
			// 
			this->PB2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB2.Image")));
			this->PB2->Location = System::Drawing::Point(102, 70);
			this->PB2->Name = L"PB2";
			this->PB2->Size = System::Drawing::Size(48, 60);
			this->PB2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB2->TabIndex = 5;
			this->PB2->TabStop = false;
			this->PB2->Tag = L"\?";
			this->PB2->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB3
			// 
			this->PB3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB3.Image")));
			this->PB3->Location = System::Drawing::Point(201, 70);
			this->PB3->Name = L"PB3";
			this->PB3->Size = System::Drawing::Size(48, 60);
			this->PB3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB3->TabIndex = 6;
			this->PB3->TabStop = false;
			this->PB3->Tag = L"\?";
			this->PB3->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB5
			// 
			this->PB5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB5.Image")));
			this->PB5->Location = System::Drawing::Point(102, 154);
			this->PB5->Name = L"PB5";
			this->PB5->Size = System::Drawing::Size(48, 60);
			this->PB5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB5->TabIndex = 7;
			this->PB5->TabStop = false;
			this->PB5->Tag = L"\?";
			this->PB5->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB4
			// 
			this->PB4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB4.Image")));
			this->PB4->Location = System::Drawing::Point(12, 154);
			this->PB4->Name = L"PB4";
			this->PB4->Size = System::Drawing::Size(48, 60);
			this->PB4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB4->TabIndex = 8;
			this->PB4->TabStop = false;
			this->PB4->Tag = L"\?";
			this->PB4->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB6
			// 
			this->PB6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB6.Image")));
			this->PB6->Location = System::Drawing::Point(201, 154);
			this->PB6->Name = L"PB6";
			this->PB6->Size = System::Drawing::Size(48, 60);
			this->PB6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB6->TabIndex = 9;
			this->PB6->TabStop = false;
			this->PB6->Tag = L"\?";
			this->PB6->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB8
			// 
			this->PB8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB8.Image")));
			this->PB8->Location = System::Drawing::Point(102, 263);
			this->PB8->Name = L"PB8";
			this->PB8->Size = System::Drawing::Size(48, 60);
			this->PB8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB8->TabIndex = 10;
			this->PB8->TabStop = false;
			this->PB8->Tag = L"\?";
			this->PB8->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB9
			// 
			this->PB9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB9.Image")));
			this->PB9->Location = System::Drawing::Point(201, 263);
			this->PB9->Name = L"PB9";
			this->PB9->Size = System::Drawing::Size(48, 60);
			this->PB9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB9->TabIndex = 11;
			this->PB9->TabStop = false;
			this->PB9->Tag = L"\?";
			this->PB9->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// PB7
			// 
			this->PB7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB7.Image")));
			this->PB7->Location = System::Drawing::Point(12, 263);
			this->PB7->Name = L"PB7";
			this->PB7->Size = System::Drawing::Size(48, 60);
			this->PB7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->PB7->TabIndex = 12;
			this->PB7->TabStop = false;
			this->PB7->Tag = L"\?";
			this->PB7->Click += gcnew System::EventHandler(this, &GRA::Graj);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Tag = L"PVP";
			this->button1->Text = L"PVB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GRA::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(174, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GRA::button2_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->Tag = L"PVP";
			this->textBox1->Text = L"Player_VS_Player";
			// 
			// GRA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PB7);
			this->Controls->Add(this->PB9);
			this->Controls->Add(this->PB8);
			this->Controls->Add(this->PB6);
			this->Controls->Add(this->PB4);
			this->Controls->Add(this->PB5);
			this->Controls->Add(this->PB3);
			this->Controls->Add(this->PB2);
			this->Controls->Add(this->PB1);
			this->Controls->Add(this->LiczO);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LiczX);
			this->Controls->Add(this->label1);
			this->Name = L"GRA";
			this->Text = L"GRA";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LiczX_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Graj(System::Object^ sender, System::EventArgs^ e) {

	if (button1->Tag == "PVP")
	{
		PictureBox^ zdjecie = (PictureBox^)sender;
		if (wcisniety)
		{
			zdjecie->Image = imageList1->Images[1];
			zdjecie->Tag = "X";
		}
		else
		{
			zdjecie->Image = imageList1->Images[0];
			zdjecie->Tag = "O";
		}
		wcisniety = !wcisniety;
		zdjecie->Enabled = false;
		
	}
	else
	{
		PictureBox^ zdjecie = (PictureBox^)sender;
		zdjecie->Image = imageList1->Images[1];
		zdjecie->Tag = "X";
		zdjecie->Enabled = false;
		liczRuch++;
		srand(time(NULL));

		for (int i = 0; i < 9; i++)
		{
			
			int liczba;
			liczba = rand() % 10;
			if (wylosowana == true)
			{
				i=9;
			}
			else {
				if ((this->PB1->Tag == "?") && (liczba == 1))
				{
					this->PB1->Image = imageList1->Images[0];
					this->PB1->Tag = "O";
					this->PB1->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB2->Tag == "?") && (liczba == 2))
				{
					this->PB2->Image = imageList1->Images[0];
					this->PB2->Tag = "O";
					this->PB2->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB3->Tag == "?") && (liczba == 3))
				{
					this->PB3->Image = imageList1->Images[0];
					this->PB3->Tag = "O";
					this->PB3->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB4->Tag == "?") && (liczba == 4))
				{
					this->PB4->Image = imageList1->Images[0];
					this->PB4->Tag = "O";
					this->PB4->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB5->Tag == "?") && (liczba == 5))
				{
					this->PB5->Image = imageList1->Images[0];
					this->PB5->Tag = "O";
					this->PB5->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB6->Tag == "?") && (liczba == 6))
				{
					this->PB6->Image = imageList1->Images[0];
					this->PB6->Tag = "O";
					this->PB6->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB7->Tag == "?") && (liczba == 7))
				{
					this->PB7->Image = imageList1->Images[0];
					this->PB7->Tag = "O";
					this->PB7->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB8->Tag == "?") && (liczba == 8))
				{
					this->PB8->Image = imageList1->Images[0];
					this->PB8->Tag = "O";
					this->PB8->Enabled = false;
					wylosowana = true;

				}
				if ((this->PB9->Tag == "?") && (liczba == 9))
				{
					this->PB9->Image = imageList1->Images[0];
					this->PB9->Tag = "O";
					this->PB9->Enabled = false;
					wylosowana = true;

				}
			}
		}
		
		
		
			
		
	}
	wylosowana = false;
	Wygrana();




}
	   private: System::Void Wygrana()
	   {
		   //w Poziomie
		   if ((PB1->Tag == PB2->Tag)&& (PB2->Tag == PB3->Tag)&&(PB1->Tag !="?"))
		   {
			   wygral = true;
		   }
		   if ((PB4->Tag == PB5->Tag) && (PB5->Tag == PB6->Tag) && (PB4->Tag != "?"))
		   {
			   wygral = true;
		   }
		   if ((PB7->Tag == PB8->Tag) && (PB8->Tag == PB9->Tag) && (PB7->Tag != "?"))
		   {
			   wygral = true;
		   }
		   //----------------------------------------------------------------------
		   //w pionie
		   if ((PB1->Tag == PB4->Tag) && (PB4->Tag == PB7->Tag) && (PB1->Tag != "?"))
		   {
			   wygral = true;
		   }
		   if ((PB2->Tag == PB5->Tag) && (PB5->Tag == PB8->Tag) && (PB2->Tag != "?"))
		   {
			   wygral = true;
		   }
		   if ((PB3->Tag == PB6->Tag) && (PB6->Tag == PB9->Tag) && (PB3->Tag != "?"))
		   {
			   wygral = true;
		   }
		   //----------------------------------------------------------------------
		   //na ukos
		   if ((PB1->Tag == PB5->Tag) && (PB5->Tag == PB9->Tag) && (PB1->Tag != "?"))
		   {
			   wygral = true;
		   }
		   if ((PB3->Tag == PB5->Tag) && (PB5->Tag == PB7->Tag) && (PB3->Tag != "?"))
		   {
			   wygral = true;
		   }

		   if (wygral)
		   {
			   for each (Control ^ element in this->Controls)
			   {
				   if (element->GetType() == PictureBox::typeid)element->Enabled = false;
			   }
			   if (wcisniety)
			   {
				   licz0++;
				   LiczO->Text = Convert::ToString(licz0);
				   mistrz = "O";
			   }
			   else
			   {
				   liczX++;
				   LiczX->Text = Convert::ToString(liczX);
				   mistrz = "X";
			   }


			   MessageBox::Show("Wygrana:" + mistrz, "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }
		   
	   }
		 

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for each (Control ^ element in this->Controls)
	{
		try {
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];
			wygral = false;
			wcisniety = 0;
		}
		catch(...)
		{

		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (Control ^ element in this->Controls)
	{
		try {
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];
			wygral = false;
			wcisniety = 0;
		}
		catch (...)
		{

		}
	}
	if (button1->Tag == "PVP")
	{
		textBox1->Tag = "PVB";
		textBox1->Text = "Player_VS_Bot";
		button1->Tag = "PVB";
		button1->Text = "PVP";
	}
	else
	{
		textBox1->Tag = "PVP";
		textBox1->Text = "Player_VS_Player";
		button1->Tag = "PVP";
		button1->Text = "PVB";
	}
}
};
}
