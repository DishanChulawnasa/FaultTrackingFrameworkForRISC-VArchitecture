#pragma once
#include <msclr/marshal_cppstd.h>
#include "podem.h"
#include "VerilogToText.h"
#include "SequentialToCombinational.h"

namespace FaultTrackin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;



	/// <summary>
	/// Summary for fileconv
	/// </summary>
	public ref class fileconv : public System::Windows::Forms::Form
	{
	public:
		fileconv(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fileconv()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ openyosys;


	private: System::Windows::Forms::TextBox^ showyosys;

	private: System::Windows::Forms::Button^ convgnet;
	private: System::Windows::Forms::Button^ nextbutton;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ back2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ gatenet;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ faultnode;
	private: System::Windows::Forms::ComboBox^ stkat;
	private: System::Windows::Forms::Button^ next2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ pinodes;

	private: System::Windows::Forms::Button^ back3;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ podemprogress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ home;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ testvector;

	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ home1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ fc1;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ fi2;

	private: System::Windows::Forms::Button^ fc2;

	private: System::Windows::Forms::Button^ home2;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ home0;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ ft4;

	private: System::Windows::Forms::Button^ fi3;

	private: System::Windows::Forms::Button^ fc3;

	private: System::Windows::Forms::Button^ home3;

	private: System::Windows::Forms::Button^ homenext;
	private: System::Windows::Forms::Button^ back1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ComboBox^ comseq;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Button^ minimize;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ closebutton;
private: System::Windows::Forms::Panel^ titlepnael;

private: System::Windows::Forms::Button^ button1;


private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Button^ clear;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::Button^ podem_action;
private: System::Windows::Forms::Label^ errlabel;
private: System::Windows::Forms::Label^ errlabel2;
private: System::Windows::Forms::Label^ finalNodeNumberLabel;
private: System::Windows::Forms::Label^ moduleNameLabel;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ ScanChainInsertButton;
private: System::Windows::Forms::ProgressBar^ progressBar1;













































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fileconv::typeid));
			this->openyosys = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->showyosys = (gcnew System::Windows::Forms::TextBox());
			this->convgnet = (gcnew System::Windows::Forms::Button());
			this->nextbutton = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->home0 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->homenext = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->ScanChainInsertButton = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->comseq = (gcnew System::Windows::Forms::ComboBox());
			this->back1 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->fc1 = (gcnew System::Windows::Forms::Button());
			this->home1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->moduleNameLabel = (gcnew System::Windows::Forms::Label());
			this->finalNodeNumberLabel = (gcnew System::Windows::Forms::Label());
			this->podem_action = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->fi2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->fc2 = (gcnew System::Windows::Forms::Button());
			this->home2 = (gcnew System::Windows::Forms::Button());
			this->next2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->faultnode = (gcnew System::Windows::Forms::TextBox());
			this->stkat = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->back2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gatenet = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->errlabel2 = (gcnew System::Windows::Forms::Label());
			this->errlabel = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ft4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->fi3 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->fc3 = (gcnew System::Windows::Forms::Button());
			this->home3 = (gcnew System::Windows::Forms::Button());
			this->home = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->testvector = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pinodes = (gcnew System::Windows::Forms::TextBox());
			this->podemprogress = (gcnew System::Windows::Forms::Label());
			this->back3 = (gcnew System::Windows::Forms::Button());
			this->minimize = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->titlepnael = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel10->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->titlepnael->SuspendLayout();
			this->SuspendLayout();
			// 
			// openyosys
			// 
			this->openyosys->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->openyosys->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->openyosys->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openyosys->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openyosys->ForeColor = System::Drawing::Color::LightGray;
			this->openyosys->Location = System::Drawing::Point(628, 68);
			this->openyosys->Name = L"openyosys";
			this->openyosys->Size = System::Drawing::Size(170, 58);
			this->openyosys->TabIndex = 0;
			this->openyosys->Text = L"OPEN YOSYS GENERATED FILE";
			this->openyosys->UseVisualStyleBackColor = false;
			this->openyosys->Click += gcnew System::EventHandler(this, &fileconv::openyosys_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// showyosys
			// 
			this->showyosys->BackColor = System::Drawing::Color::LightGray;
			this->showyosys->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->showyosys->Dock = System::Windows::Forms::DockStyle::Fill;
			this->showyosys->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->showyosys->Location = System::Drawing::Point(0, 0);
			this->showyosys->Multiline = true;
			this->showyosys->Name = L"showyosys";
			this->showyosys->ReadOnly = true;
			this->showyosys->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->showyosys->Size = System::Drawing::Size(584, 359);
			this->showyosys->TabIndex = 0;
			// 
			// convgnet
			// 
			this->convgnet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->convgnet->Enabled = false;
			this->convgnet->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->convgnet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->convgnet->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convgnet->ForeColor = System::Drawing::Color::LightGray;
			this->convgnet->Location = System::Drawing::Point(628, 285);
			this->convgnet->Name = L"convgnet";
			this->convgnet->Size = System::Drawing::Size(170, 58);
			this->convgnet->TabIndex = 1;
			this->convgnet->Text = L"CONVERT TO GATE-LEVEL NETLIST";
			this->convgnet->UseVisualStyleBackColor = false;
			this->convgnet->Click += gcnew System::EventHandler(this, &fileconv::convgnet_Click);
			// 
			// nextbutton
			// 
			this->nextbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->nextbutton->Enabled = false;
			this->nextbutton->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->nextbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextbutton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nextbutton->ForeColor = System::Drawing::Color::LightGray;
			this->nextbutton->Location = System::Drawing::Point(689, 450);
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Size = System::Drawing::Size(130, 34);
			this->nextbutton->TabIndex = 6;
			this->nextbutton->Text = L"NEXT";
			this->nextbutton->UseVisualStyleBackColor = false;
			this->nextbutton->Click += gcnew System::EventHandler(this, &fileconv::nextbutton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-5, 31);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(841, 534);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage4->Controls->Add(this->panel7);
			this->tabPage4->Controls->Add(this->flowLayoutPanel1);
			this->tabPage4->Controls->Add(this->panel10);
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(833, 498);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Home";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->home0);
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(832, 40);
			this->panel7->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::LightGray;
			this->label9->Location = System::Drawing::Point(672, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"FAULT TRACKING";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightGray;
			this->label7->Location = System::Drawing::Point(251, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"FILE CONVERSION";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::LightGray;
			this->label8->Location = System::Drawing::Point(456, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"FAULT INJECTION";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::LightGray;
			this->button5->Location = System::Drawing::Point(621, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 40);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Left;
			this->button6->Enabled = false;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::LightGray;
			this->button6->Location = System::Drawing::Point(414, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(207, 40);
			this->button6->TabIndex = 9;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Left;
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::LightGray;
			this->button7->Location = System::Drawing::Point(207, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(207, 40);
			this->button7->TabIndex = 8;
			this->button7->Text = L" ";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// home0
			// 
			this->home0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->home0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home0->Dock = System::Windows::Forms::DockStyle::Left;
			this->home0->FlatAppearance->BorderSize = 0;
			this->home0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home0->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home0->ForeColor = System::Drawing::Color::LightGray;
			this->home0->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->home0->Location = System::Drawing::Point(0, 0);
			this->home0->Name = L"home0";
			this->home0->Size = System::Drawing::Size(207, 40);
			this->home0->TabIndex = 7;
			this->home0->Text = L"HOME";
			this->home0->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->home0->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Location = System::Drawing::Point(434, 6);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(401, 490);
			this->flowLayoutPanel1->TabIndex = 14;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->homenext);
			this->panel10->Controls->Add(this->label19);
			this->panel10->Controls->Add(this->label20);
			this->panel10->Controls->Add(this->label21);
			this->panel10->Location = System::Drawing::Point(9, 46);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(395, 433);
			this->panel10->TabIndex = 18;
			// 
			// homenext
			// 
			this->homenext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->homenext->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->homenext->FlatAppearance->BorderSize = 2;
			this->homenext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homenext->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homenext->ForeColor = System::Drawing::Color::LightGray;
			this->homenext->Location = System::Drawing::Point(126, 343);
			this->homenext->Name = L"homenext";
			this->homenext->Size = System::Drawing::Size(161, 49);
			this->homenext->TabIndex = 12;
			this->homenext->Text = L"NEXT";
			this->homenext->UseVisualStyleBackColor = false;
			this->homenext->Click += gcnew System::EventHandler(this, &fileconv::homenext_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::LightGray;
			this->label19->Location = System::Drawing::Point(26, 91);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(410, 276);
			this->label19->TabIndex = 16;
			this->label19->Text = resources->GetString(L"label19.Text");
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label20->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::SkyBlue;
			this->label20->Location = System::Drawing::Point(157, 403);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(107, 23);
			this->label20->TabIndex = 17;
			this->label20->Text = L"User Manual";
			// 
			// label21
			// 
			this->label21->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Control;
			this->label21->Location = System::Drawing::Point(56, 19);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(329, 60);
			this->label21->TabIndex = 4;
			this->label21->Text = L"FAULT TRACKING FRAMEWORK\r\n FOR RISC-V ARCHITECTURE\r\n";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->ScanChainInsertButton);
			this->tabPage1->Controls->Add(this->clear);
			this->tabPage1->Controls->Add(this->comseq);
			this->tabPage1->Controls->Add(this->back1);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->openyosys);
			this->tabPage1->Controls->Add(this->nextbutton);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->convgnet);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(833, 498);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"File Conversion";
			// 
			// progressBar1
			// 
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->progressBar1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->progressBar1->Location = System::Drawing::Point(21, 423);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(584, 10);
			this->progressBar1->TabIndex = 14;
			// 
			// ScanChainInsertButton
			// 
			this->ScanChainInsertButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ScanChainInsertButton->Enabled = false;
			this->ScanChainInsertButton->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->ScanChainInsertButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ScanChainInsertButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ScanChainInsertButton->ForeColor = System::Drawing::Color::LightGray;
			this->ScanChainInsertButton->Location = System::Drawing::Point(628, 203);
			this->ScanChainInsertButton->Name = L"ScanChainInsertButton";
			this->ScanChainInsertButton->Size = System::Drawing::Size(170, 58);
			this->ScanChainInsertButton->TabIndex = 13;
			this->ScanChainInsertButton->Text = L"INSERT SCAN\r\nCHAIN";
			this->ScanChainInsertButton->UseVisualStyleBackColor = false;
			this->ScanChainInsertButton->Click += gcnew System::EventHandler(this, &fileconv::ScanChainInsertButton_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->clear->Enabled = false;
			this->clear->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::LightGray;
			this->clear->Location = System::Drawing::Point(628, 373);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(170, 45);
			this->clear->TabIndex = 12;
			this->clear->Text = L"CLEAR";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &fileconv::clear_Click);
			// 
			// comseq
			// 
			this->comseq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->comseq->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comseq->Enabled = false;
			this->comseq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comseq->ForeColor = System::Drawing::Color::LightGray;
			this->comseq->FormattingEnabled = true;
			this->comseq->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Combinational", L"Sequential" });
			this->comseq->Location = System::Drawing::Point(628, 151);
			this->comseq->Name = L"comseq";
			this->comseq->Size = System::Drawing::Size(170, 31);
			this->comseq->TabIndex = 11;
			this->comseq->SelectedIndexChanged += gcnew System::EventHandler(this, &fileconv::comseq_SelectedIndexChanged);
			// 
			// back1
			// 
			this->back1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->back1->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->back1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back1->ForeColor = System::Drawing::Color::LightGray;
			this->back1->Location = System::Drawing::Point(10, 450);
			this->back1->Name = L"back1";
			this->back1->Size = System::Drawing::Size(130, 34);
			this->back1->TabIndex = 9;
			this->back1->Text = L"BACK";
			this->back1->UseVisualStyleBackColor = false;
			this->back1->Click += gcnew System::EventHandler(this, &fileconv::back1_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->button4);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->fc1);
			this->panel6->Controls->Add(this->home1);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(832, 40);
			this->panel6->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::LightGray;
			this->label10->Location = System::Drawing::Point(672, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"FAULT TRACKING";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::LightGray;
			this->label12->Location = System::Drawing::Point(456, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"FAULT INJECTION";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Left;
			this->button4->Enabled = false;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::LightGray;
			this->button4->Location = System::Drawing::Point(621, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 40);
			this->button4->TabIndex = 10;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::LightGray;
			this->button3->Location = System::Drawing::Point(414, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 40);
			this->button3->TabIndex = 9;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::LightGray;
			this->label11->Location = System::Drawing::Point(73, 14);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 20);
			this->label11->TabIndex = 14;
			this->label11->Text = L"HOME";
			// 
			// fc1
			// 
			this->fc1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->fc1->Dock = System::Windows::Forms::DockStyle::Left;
			this->fc1->FlatAppearance->BorderSize = 0;
			this->fc1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fc1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fc1->ForeColor = System::Drawing::Color::LightGray;
			this->fc1->Location = System::Drawing::Point(207, 0);
			this->fc1->Name = L"fc1";
			this->fc1->Size = System::Drawing::Size(207, 40);
			this->fc1->TabIndex = 8;
			this->fc1->Text = L"FILE CONVERSION";
			this->fc1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->fc1->UseVisualStyleBackColor = false;
			// 
			// home1
			// 
			this->home1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->home1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home1->Dock = System::Windows::Forms::DockStyle::Left;
			this->home1->Enabled = false;
			this->home1->FlatAppearance->BorderSize = 0;
			this->home1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->home1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->home1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home1->ForeColor = System::Drawing::Color::LightGray;
			this->home1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->home1->Location = System::Drawing::Point(0, 0);
			this->home1->Name = L"home1";
			this->home1->Size = System::Drawing::Size(207, 40);
			this->home1->TabIndex = 7;
			this->home1->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->showyosys);
			this->panel2->Location = System::Drawing::Point(21, 59);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(584, 359);
			this->panel2->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->moduleNameLabel);
			this->tabPage2->Controls->Add(this->finalNodeNumberLabel);
			this->tabPage2->Controls->Add(this->podem_action);
			this->tabPage2->Controls->Add(this->panel8);
			this->tabPage2->Controls->Add(this->next2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->faultnode);
			this->tabPage2->Controls->Add(this->stkat);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->back2);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(833, 498);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Fault Injection";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightGray;
			this->label4->Location = System::Drawing::Point(483, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 23);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Module :\r\n";
			// 
			// moduleNameLabel
			// 
			this->moduleNameLabel->AutoSize = true;
			this->moduleNameLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->moduleNameLabel->ForeColor = System::Drawing::Color::LightGray;
			this->moduleNameLabel->Location = System::Drawing::Point(698, 141);
			this->moduleNameLabel->Name = L"moduleNameLabel";
			this->moduleNameLabel->Size = System::Drawing::Size(69, 23);
			this->moduleNameLabel->TabIndex = 14;
			this->moduleNameLabel->Text = L"Module";
			this->moduleNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// finalNodeNumberLabel
			// 
			this->finalNodeNumberLabel->AutoSize = true;
			this->finalNodeNumberLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finalNodeNumberLabel->ForeColor = System::Drawing::Color::PowderBlue;
			this->finalNodeNumberLabel->Location = System::Drawing::Point(503, 59);
			this->finalNodeNumberLabel->Name = L"finalNodeNumberLabel";
			this->finalNodeNumberLabel->Size = System::Drawing::Size(223, 50);
			this->finalNodeNumberLabel->TabIndex = 13;
			this->finalNodeNumberLabel->Text = L"Choose A Node Between\r\n1 and to Inject Fault";
			this->finalNodeNumberLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// podem_action
			// 
			this->podem_action->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->podem_action->Enabled = false;
			this->podem_action->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->podem_action->FlatAppearance->BorderSize = 3;
			this->podem_action->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->podem_action->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->podem_action->ForeColor = System::Drawing::Color::LightGray;
			this->podem_action->Location = System::Drawing::Point(689, 307);
			this->podem_action->Name = L"podem_action";
			this->podem_action->Size = System::Drawing::Size(99, 51);
			this->podem_action->TabIndex = 12;
			this->podem_action->Text = L"PODEM";
			this->podem_action->UseVisualStyleBackColor = false;
			this->podem_action->Click += gcnew System::EventHandler(this, &fileconv::podem_action_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->label13);
			this->panel8->Controls->Add(this->button9);
			this->panel8->Controls->Add(this->fi2);
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->fc2);
			this->panel8->Controls->Add(this->home2);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(832, 40);
			this->panel8->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightGray;
			this->label14->Location = System::Drawing::Point(672, 14);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(126, 20);
			this->label14->TabIndex = 17;
			this->label14->Text = L"FAULT TRACKING";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::LightGray;
			this->label13->Location = System::Drawing::Point(73, 14);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 20);
			this->label13->TabIndex = 17;
			this->label13->Text = L"HOME";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button9->Dock = System::Windows::Forms::DockStyle::Left;
			this->button9->Enabled = false;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::LightGray;
			this->button9->Location = System::Drawing::Point(621, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(213, 40);
			this->button9->TabIndex = 10;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// fi2
			// 
			this->fi2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->fi2->Dock = System::Windows::Forms::DockStyle::Left;
			this->fi2->FlatAppearance->BorderSize = 0;
			this->fi2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fi2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fi2->ForeColor = System::Drawing::Color::LightGray;
			this->fi2->Location = System::Drawing::Point(414, 0);
			this->fi2->Name = L"fi2";
			this->fi2->Size = System::Drawing::Size(207, 40);
			this->fi2->TabIndex = 9;
			this->fi2->Text = L"FAULT INJECTION";
			this->fi2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->fi2->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::LightGray;
			this->label15->Location = System::Drawing::Point(251, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 20);
			this->label15->TabIndex = 14;
			this->label15->Text = L"FILE CONVERSION";
			// 
			// fc2
			// 
			this->fc2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->fc2->Dock = System::Windows::Forms::DockStyle::Left;
			this->fc2->Enabled = false;
			this->fc2->FlatAppearance->BorderSize = 0;
			this->fc2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->fc2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fc2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fc2->ForeColor = System::Drawing::Color::Transparent;
			this->fc2->Location = System::Drawing::Point(207, 0);
			this->fc2->Name = L"fc2";
			this->fc2->Size = System::Drawing::Size(207, 40);
			this->fc2->TabIndex = 8;
			this->fc2->UseVisualStyleBackColor = false;
			// 
			// home2
			// 
			this->home2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->home2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home2->Dock = System::Windows::Forms::DockStyle::Left;
			this->home2->Enabled = false;
			this->home2->FlatAppearance->BorderSize = 0;
			this->home2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->home2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->home2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home2->ForeColor = System::Drawing::Color::LightGray;
			this->home2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->home2->Location = System::Drawing::Point(0, 0);
			this->home2->Name = L"home2";
			this->home2->Size = System::Drawing::Size(207, 40);
			this->home2->TabIndex = 7;
			this->home2->UseVisualStyleBackColor = false;
			// 
			// next2
			// 
			this->next2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->next2->Enabled = false;
			this->next2->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->next2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->next2->ForeColor = System::Drawing::Color::LightGray;
			this->next2->Location = System::Drawing::Point(714, 400);
			this->next2->Name = L"next2";
			this->next2->Size = System::Drawing::Size(84, 51);
			this->next2->TabIndex = 6;
			this->next2->Text = L"NEXT";
			this->next2->UseVisualStyleBackColor = false;
			this->next2->Click += gcnew System::EventHandler(this, &fileconv::next2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(483, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Choose the Stuck-at Value :";
			// 
			// faultnode
			// 
			this->faultnode->BackColor = System::Drawing::Color::LightGray;
			this->faultnode->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faultnode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->faultnode->Location = System::Drawing::Point(703, 188);
			this->faultnode->Name = L"faultnode";
			this->faultnode->Size = System::Drawing::Size(85, 30);
			this->faultnode->TabIndex = 4;
			this->faultnode->TextChanged += gcnew System::EventHandler(this, &fileconv::faultnode_TextChanged);
			this->faultnode->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &fileconv::faultnode_KeyPress);
			// 
			// stkat
			// 
			this->stkat->BackColor = System::Drawing::Color::LightGray;
			this->stkat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->stkat->Enabled = false;
			this->stkat->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stkat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->stkat->FormattingEnabled = true;
			this->stkat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->stkat->Location = System::Drawing::Point(703, 246);
			this->stkat->Name = L"stkat";
			this->stkat->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->stkat->Size = System::Drawing::Size(85, 31);
			this->stkat->TabIndex = 3;
			this->stkat->SelectedIndexChanged += gcnew System::EventHandler(this, &fileconv::stkat_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(483, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter the Faulty Node :";
			// 
			// back2
			// 
			this->back2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->back2->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->back2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back2->ForeColor = System::Drawing::Color::LightGray;
			this->back2->Location = System::Drawing::Point(514, 400);
			this->back2->Name = L"back2";
			this->back2->Size = System::Drawing::Size(84, 51);
			this->back2->TabIndex = 1;
			this->back2->Text = L"BACK";
			this->back2->UseVisualStyleBackColor = false;
			this->back2->Click += gcnew System::EventHandler(this, &fileconv::back2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gatenet);
			this->panel1->Location = System::Drawing::Point(19, 60);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 391);
			this->panel1->TabIndex = 0;
			// 
			// gatenet
			// 
			this->gatenet->BackColor = System::Drawing::Color::LightGray;
			this->gatenet->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gatenet->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gatenet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->gatenet->Location = System::Drawing::Point(0, 0);
			this->gatenet->Multiline = true;
			this->gatenet->Name = L"gatenet";
			this->gatenet->ReadOnly = true;
			this->gatenet->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->gatenet->Size = System::Drawing::Size(430, 391);
			this->gatenet->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage3->Controls->Add(this->errlabel2);
			this->tabPage3->Controls->Add(this->errlabel);
			this->tabPage3->Controls->Add(this->panel9);
			this->tabPage3->Controls->Add(this->home);
			this->tabPage3->Controls->Add(this->panel5);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->panel4);
			this->tabPage3->Controls->Add(this->podemprogress);
			this->tabPage3->Controls->Add(this->back3);
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(833, 498);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Fault Tracking";
			// 
			// errlabel2
			// 
			this->errlabel2->AutoSize = true;
			this->errlabel2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errlabel2->ForeColor = System::Drawing::Color::LightCoral;
			this->errlabel2->Location = System::Drawing::Point(294, 201);
			this->errlabel2->Name = L"errlabel2";
			this->errlabel2->Size = System::Drawing::Size(305, 30);
			this->errlabel2->TabIndex = 14;
			this->errlabel2->Text = L"THE FAULT IS NOT TESTABLE!";
			// 
			// errlabel
			// 
			this->errlabel->AutoSize = true;
			this->errlabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errlabel->ForeColor = System::Drawing::Color::LightCoral;
			this->errlabel->Location = System::Drawing::Point(135, 235);
			this->errlabel->Name = L"errlabel";
			this->errlabel->Size = System::Drawing::Size(666, 28);
			this->errlabel->TabIndex = 13;
			this->errlabel->Text = L"PROCEED BACK TO ENTER DIFFERENT FAULT NODE OR STUCK-AT FAULT";
			this->errlabel->Visible = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->ft4);
			this->panel9->Controls->Add(this->label17);
			this->panel9->Controls->Add(this->fi3);
			this->panel9->Controls->Add(this->label16);
			this->panel9->Controls->Add(this->fc3);
			this->panel9->Controls->Add(this->home3);
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(832, 40);
			this->panel9->TabIndex = 12;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::LightGray;
			this->label18->Location = System::Drawing::Point(456, 14);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(129, 20);
			this->label18->TabIndex = 14;
			this->label18->Text = L"FAULT INJECTION";
			// 
			// ft4
			// 
			this->ft4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ft4->Dock = System::Windows::Forms::DockStyle::Left;
			this->ft4->FlatAppearance->BorderSize = 0;
			this->ft4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ft4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ft4->ForeColor = System::Drawing::Color::LightGray;
			this->ft4->Location = System::Drawing::Point(621, 0);
			this->ft4->Name = L"ft4";
			this->ft4->Size = System::Drawing::Size(213, 40);
			this->ft4->TabIndex = 10;
			this->ft4->Text = L"FAULT TRACKING";
			this->ft4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ft4->UseVisualStyleBackColor = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::LightGray;
			this->label17->Location = System::Drawing::Point(251, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(134, 20);
			this->label17->TabIndex = 19;
			this->label17->Text = L"FILE CONVERSION";
			// 
			// fi3
			// 
			this->fi3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->fi3->Dock = System::Windows::Forms::DockStyle::Left;
			this->fi3->Enabled = false;
			this->fi3->FlatAppearance->BorderSize = 0;
			this->fi3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->fi3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fi3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fi3->ForeColor = System::Drawing::Color::LightGray;
			this->fi3->Location = System::Drawing::Point(414, 0);
			this->fi3->Name = L"fi3";
			this->fi3->Size = System::Drawing::Size(207, 40);
			this->fi3->TabIndex = 9;
			this->fi3->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::LightGray;
			this->label16->Location = System::Drawing::Point(73, 14);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 20);
			this->label16->TabIndex = 18;
			this->label16->Text = L"HOME";
			// 
			// fc3
			// 
			this->fc3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->fc3->Dock = System::Windows::Forms::DockStyle::Left;
			this->fc3->Enabled = false;
			this->fc3->FlatAppearance->BorderSize = 0;
			this->fc3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->fc3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fc3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fc3->ForeColor = System::Drawing::Color::LightGray;
			this->fc3->Location = System::Drawing::Point(207, 0);
			this->fc3->Name = L"fc3";
			this->fc3->Size = System::Drawing::Size(207, 40);
			this->fc3->TabIndex = 8;
			this->fc3->UseVisualStyleBackColor = false;
			// 
			// home3
			// 
			this->home3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->home3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home3->Dock = System::Windows::Forms::DockStyle::Left;
			this->home3->Enabled = false;
			this->home3->FlatAppearance->BorderSize = 0;
			this->home3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->home3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->home3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home3->ForeColor = System::Drawing::Color::LightGray;
			this->home3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->home3->Location = System::Drawing::Point(0, 0);
			this->home3->Name = L"home3";
			this->home3->Size = System::Drawing::Size(207, 40);
			this->home3->TabIndex = 7;
			this->home3->UseVisualStyleBackColor = false;
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->home->FlatAppearance->BorderColor = System::Drawing::Color::LightCoral;
			this->home->FlatAppearance->BorderSize = 2;
			this->home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home->ForeColor = System::Drawing::Color::LightGray;
			this->home->Location = System::Drawing::Point(423, 409);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(167, 35);
			this->home->TabIndex = 6;
			this->home->Text = L"HOME";
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &fileconv::home_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->testvector);
			this->panel5->Location = System::Drawing::Point(47, 330);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(731, 48);
			this->panel5->TabIndex = 4;
			// 
			// testvector
			// 
			this->testvector->BackColor = System::Drawing::Color::LightGray;
			this->testvector->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->testvector->Dock = System::Windows::Forms::DockStyle::Fill;
			this->testvector->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->testvector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->testvector->Location = System::Drawing::Point(0, 0);
			this->testvector->Multiline = true;
			this->testvector->Name = L"testvector";
			this->testvector->ReadOnly = true;
			this->testvector->Size = System::Drawing::Size(731, 48);
			this->testvector->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightGray;
			this->label6->Location = System::Drawing::Point(43, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Input Test Vector :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightGray;
			this->label5->Location = System::Drawing::Point(43, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Primary Input Nodes :";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pinodes);
			this->panel4->Location = System::Drawing::Point(47, 148);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(731, 124);
			this->panel4->TabIndex = 3;
			// 
			// pinodes
			// 
			this->pinodes->BackColor = System::Drawing::Color::LightGray;
			this->pinodes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pinodes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pinodes->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pinodes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->pinodes->Location = System::Drawing::Point(0, 0);
			this->pinodes->Multiline = true;
			this->pinodes->Name = L"pinodes";
			this->pinodes->ReadOnly = true;
			this->pinodes->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->pinodes->Size = System::Drawing::Size(731, 124);
			this->pinodes->TabIndex = 1;
			// 
			// podemprogress
			// 
			this->podemprogress->AutoSize = true;
			this->podemprogress->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->podemprogress->ForeColor = System::Drawing::Color::PowderBlue;
			this->podemprogress->Location = System::Drawing::Point(313, 66);
			this->podemprogress->Name = L"podemprogress";
			this->podemprogress->Size = System::Drawing::Size(150, 30);
			this->podemprogress->TabIndex = 2;
			this->podemprogress->Text = L"ATPG PODEM";
			// 
			// back3
			// 
			this->back3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->back3->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->back3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back3->ForeColor = System::Drawing::Color::LightGray;
			this->back3->Location = System::Drawing::Point(213, 409);
			this->back3->Name = L"back3";
			this->back3->Size = System::Drawing::Size(167, 35);
			this->back3->TabIndex = 0;
			this->back3->Text = L"BACK";
			this->back3->UseVisualStyleBackColor = false;
			this->back3->Click += gcnew System::EventHandler(this, &fileconv::back3_Click);
			// 
			// minimize
			// 
			this->minimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize.BackgroundImage")));
			this->minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->minimize->FlatAppearance->BorderSize = 0;
			this->minimize->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightBlue;
			this->minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->minimize->Location = System::Drawing::Point(746, 4);
			this->minimize->Margin = System::Windows::Forms::Padding(0);
			this->minimize->Name = L"minimize";
			this->minimize->Size = System::Drawing::Size(30, 29);
			this->minimize->TabIndex = 2;
			this->minimize->UseVisualStyleBackColor = false;
			this->minimize->Click += gcnew System::EventHandler(this, &fileconv::minimize_Click);
			// 
			// label1
			// 
			this->label1->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(296, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FAULT TRACKING FRAMEWORK";
			// 
			// closebutton
			// 
			this->closebutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->closebutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closebutton.BackgroundImage")));
			this->closebutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closebutton->FlatAppearance->BorderSize = 0;
			this->closebutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MistyRose;
			this->closebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closebutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->closebutton->Location = System::Drawing::Point(785, 4);
			this->closebutton->Margin = System::Windows::Forms::Padding(0);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(32, 28);
			this->closebutton->TabIndex = 1;
			this->closebutton->UseVisualStyleBackColor = false;
			this->closebutton->Click += gcnew System::EventHandler(this, &fileconv::closebutton_Click);
			// 
			// titlepnael
			// 
			this->titlepnael->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->titlepnael->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->titlepnael->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titlepnael->Controls->Add(this->button1);
			this->titlepnael->Controls->Add(this->closebutton);
			this->titlepnael->Controls->Add(this->label1);
			this->titlepnael->Controls->Add(this->minimize);
			this->titlepnael->Location = System::Drawing::Point(-1, -1);
			this->titlepnael->Name = L"titlepnael";
			this->titlepnael->Size = System::Drawing::Size(836, 65);
			this->titlepnael->TabIndex = 5;
			this->titlepnael->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &fileconv::titlepnael_MouseDown);
			this->titlepnael->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &fileconv::titlepnael_MouseMove);
			this->titlepnael->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &fileconv::titlepnael_MouseUp);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(8, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 43);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// fileconv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(828, 559);
			this->ControlBox = false;
			this->Controls->Add(this->titlepnael);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"fileconv";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fault Tracking Framework";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->titlepnael->ResumeLayout(false);
			this->titlepnael->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void closebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void openyosys_Click(System::Object^ sender, System::EventArgs^ e) {
		//clear->Enabled = true;
		//comseq->Enabled = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			comseq->SelectedIndex = -1;
			progressBar1->Value = 0;
			showyosys->Text = sr->ReadToEnd();
			convgnet->Enabled = false;
			if (File::Exists(openFileDialog1->FileName)) {
				clear->Enabled = true;
				comseq->Enabled = true;
				nextbutton->Enabled = false;
			}
		}
	}
	private: System::Void nextbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[2];
		}
		//gatenet->Text = showyosys->Text;




	}
	private: System::Void back2_Click(System::Object^ sender, System::EventArgs^ e) {
		faultnode->Text = "";
		//comseq->SelectedIndex = -1;
		convgnet->Enabled = false;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		progressBar1->Value = 0;
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[1];
		}
	}
	private: System::Void next2_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ appDirectory = Application::StartupPath;
		//String^ fileName1 = "PI Nodes.txt";
		//String^ fileName2 = "Input Vector.txt";
		//String^ filePath1 = System::IO::Path::Combine(appDirectory, fileName1);
		//String^ filePath2 = System::IO::Path::Combine(appDirectory, fileName2);
		//String^ fileContents1 = System::IO::File::ReadAllText(filePath1);
		//String^ fileContents2 = System::IO::File::ReadAllText(filePath2);
		//pinodes->Text = fileContents1;
		//testvector->Text = fileContents2;


		//pinodes->Text = msclr::interop::marshal_as<System::String^>(piNodesText);
		//testvector->Text = msclr::interop::marshal_as<System::String^>(inputVectorText);

		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[3];
		}
	}
	private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
		faultnode->Text = "";
		errlabel->Visible = false;
		stkat->SelectedIndex = -1;
		comseq->SelectedIndex = -1;
		next2->Enabled = false;
		P_func.clearfiles();
		pinodes->Text = "";
		testvector->Text = "";
		convgnet->Enabled = false;
		comseq->Enabled = false;
		clear->Enabled = false;
		nextbutton->Enabled = false;
		showyosys->Text = "";
		gatenet->Text = "";
		progressBar1->Value = 0;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[0];
		}
	}
	private: System::Void back3_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ appDirectory = Application::StartupPath;
		//String^ filePath3 = System::IO::Path::Combine(appDirectory, "PI Nodes.txt");
		//StreamWriter^ writer3 = gcnew StreamWriter(filePath3);
		//writer3->Write("");
		//writer3->Close();

		//String^ filePath4 = System::IO::Path::Combine(appDirectory, "Input Vector.txt");
		//StreamWriter^ writer4 = gcnew StreamWriter(filePath4);
		//writer4->Write("");
		//writer4->Close();
		errlabel->Visible = false;
		//stkat->SelectedIndex = -1;
		next2->Enabled = false;
		P_func.clearfiles();
		pinodes->Text = "";
		testvector->Text = "";

		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[2];
		}

	}
	private: System::Void homenext_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[1];
		}
	}
	private: System::Void back1_Click(System::Object^ sender, System::EventArgs^ e) {
		showyosys->Text = "";
		gatenet->Text = "";
		nextbutton->Enabled = false;
		convgnet->Enabled = false;
		comseq->Enabled = false;
		nextbutton->Enabled = false;
		clear->Enabled = false;
		comseq->SelectedIndex = -1;
		progressBar1->Value = 0;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[0];
		}
	}
	private: System::Void convgnet_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ selectedItem = comseq->SelectedItem->ToString();
		
		nextbutton->Enabled = true;
	
		System::String^ filepath = openFileDialog1->FileName;
		System::String^ inputVeilogFileDirec = System::IO::Path::GetDirectoryName(filepath);
		System::String^ inputVeilogFileName = System::IO::Path::GetFileName(filepath);
		moduleNameLabel->Text = inputVeilogFileName;

		if (selectedItem == "Combinational") {

			inputVeilogFileDirectory = msclr::interop::marshal_as<std::string>(inputVeilogFileDirec + "/" + inputVeilogFileName);
			VeriToText();				

		}

		if (selectedItem == "Sequential") {

			inputVeilogFileDirectory = "InsertedScanChainFile.v";
			VeriToText();
			
		}		

		String^ appDirectory = Application::StartupPath;
		String^ fileName3 = "Circuit.txt";
		String^ filePath3 = System::IO::Path::Combine(appDirectory, fileName3);
		String^ fileContents3 = System::IO::File::ReadAllText(filePath3);
		gatenet->Text = fileContents3;
		showyosys->Text = fileContents3;

		finalNodeNumberLabel->Text = System::Convert::ToString("CHOOSE A NODE BETWEEN 1 AND " + finalSignalNumber + "\n TO INJECT STUCK-AT FAULT: ");

		
		convgnet->Enabled = false;
	

	}
	private: System::Void stkat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


		if (stkat->SelectedIndex == -1) {
			podem_action->Enabled = false;
		}
		else {
			podem_action->Enabled = true;
		}
		
	}
	private: System::Void comseq_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (comseq->SelectedIndex == -1) {
			showyosys->Text = "";
		}
		else {

			System::String^ selectedItem = comseq->SelectedItem->ToString();

			if (selectedItem == "Combinational") {
				ScanChainInsertButton->Enabled = false;
				convgnet->Enabled = true;
			}
			else if (selectedItem == "Sequential") {
				ScanChainInsertButton->Enabled = true;
				convgnet->Enabled = false;
			}

			System::String^ filepath0 = openFileDialog1->FileName;
			System::String^ inputVeilogFileDirec0 = System::IO::Path::GetDirectoryName(filepath0);
			System::String^ inputVeilogFileName0 = System::IO::Path::GetFileName(filepath0);

			String^ filePath0 = System::IO::Path::Combine(inputVeilogFileDirec0, inputVeilogFileName0);
			String^ fileContents0 = System::IO::File::ReadAllText(filePath0);
			showyosys->Text = fileContents0;
			
		}
		
		nextbutton->Enabled = false;
		//convgnet->Enabled = true;
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		showyosys->Text = "";
		gatenet->Text = "";
		comseq->SelectedIndex = -1;
		nextbutton->Enabled = false;
		convgnet->Enabled = false;
		comseq->Enabled = false;
		clear->Enabled = false;
		progressBar1->Value = 0;
	}
	private: System::Void faultnode_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			e->Handled = true;
		}
		TextBox^ textBox = dynamic_cast<TextBox^>(sender);
		int inputValue;
		if (Int32::TryParse(textBox->Text + e->KeyChar, inputValue) && (inputValue < 1 || inputValue > finalSignalNumber)) {
			e->Handled = true;
			MessageBox::Show("Please Choose a Node Between 1 and " + finalSignalNumber , "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void faultnode_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (faultnode->Text->Length == 0) {
			next2->Enabled = false;
			stkat->Enabled = false;
			stkat->SelectedIndex = -1;
		}
		else {
			stkat->Enabled = true;
		}
	}
	private: 
		bool isDragging = false;
		Point offset;

	private: System::Void titlepnael_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			isDragging = true;
			offset = Point(e->X, e->Y);
		}
	}
	private: System::Void titlepnael_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isDragging) {
			Point newLocation = Point(Control::MousePosition.X - offset.X, Control::MousePosition.Y - offset.Y);
			Location = newLocation;
		}
	}
	private: System::Void titlepnael_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			isDragging = false;
		}
	}

	private: System::Void podem_action_Click(System::Object^ sender, System::EventArgs^ e) {
		podemprogress->ForeColor = System::Drawing::Color::PowderBlue;
		int flag = 1;
		int result = 0;
		int check = 1;
		
		while (check == 1) {
			flag = P_func.readFile();
			Fault.nodeNumber = System::Convert::ToInt64(faultnode->Text);
			Fault.nodeValue = System::Convert::ToInt64(stkat->Text);

			P_func.setX();
			result = P_func.PODEM();

			

			if (status == 1) {				
				podemprogress->Visible = false;
				errlabel2->Visible = true;
				errlabel->Visible = true;
				label5->Visible = false;
				label6->Visible = false;
				pinodes->Visible = false;
				testvector->Visible = false;
				
			}
			else {
				podemprogress->Text = "THE FAULT IS TESTABLE!";
				podemprogress->Visible = true;
				errlabel2->Visible = false;
				errlabel->Visible = false;
				label5->Visible = true;
				label6->Visible = true;
				pinodes->Visible = true;
				testvector->Visible = true;

				if (stkat->Text=="0")
					label6->Text = "Input Test Vector For Stuck-at-zero at " + faultnode->Text + "th Node: ";
				else
					label6->Text = "Input Test Vector For Stuck-at-one at " + faultnode->Text + "th Node: ";
								
			}
			status = 0;

			for (int i = 1; i < node.size(); i++) {
				node.at(i).nodeFlag = 0;
				node.at(i).faultFlag = 0;
			}

			for (int i = 0; i < gate.size(); i++) {
				gate.at(i).gateFlag = 0;
			}

			faultActFlag = 0;
			check = 0;
		}
		check = 0;
		pinodes->Text = msclr::interop::marshal_as<System::String^>(piNodesText);
		testvector->Text = msclr::interop::marshal_as<System::String^>(inputVectorText);
		podem_action->Enabled = false;
		next2->Enabled = true;
		//	std::ostringstream podemProgText;
			//podemprogress->Text = podemProgText;
		//	System::String^ ab = "";
	//		showyosys->Text = ab;
	}
	private: System::Void ScanChainInsertButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ filepath4 = openFileDialog1->FileName;
		System::String^ inputVeilogFileDirec = System::IO::Path::GetDirectoryName(filepath4);
		System::String^ inputVeilogFileName = System::IO::Path::GetFileName(filepath4);
		inputSequentialFileDirectory = msclr::interop::marshal_as<std::string>(inputVeilogFileDirec + "/" + inputVeilogFileName);

		// Initialize the ProgressBar properties
		progressBar1->Cursor = Cursors::WaitCursor;
		progressBar1->Minimum = 0;
		progressBar1->Maximum = 100;
		progressBar1->Value = 5;

		// Create a BackgroundWorker for scanChainInsertion
		BackgroundWorker^ worker = gcnew BackgroundWorker();
		worker->WorkerReportsProgress = true;

		// Attach event handlers
		worker->DoWork += gcnew DoWorkEventHandler(this, &fileconv::backgroundWorker_DoWork);
		worker->ProgressChanged += gcnew ProgressChangedEventHandler(this, &fileconv::backgroundWorker_ProgressChanged);
		worker->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &fileconv::backgroundWorker_RunWorkerCompleted);

		// Start the BackgroundWorker
		worker->RunWorkerAsync();

		//scanChainInsertion();
				
	}
	private: System::Void backgroundWorker_DoWork(System::Object^ sender, DoWorkEventArgs^ e) {
		BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);

		// Call the scanChainInsertion function from header file
		scanChainInsertion();

		// report progress 
		worker->ReportProgress(100);
	}
	private: System::Void backgroundWorker_ProgressChanged(System::Object^ sender, ProgressChangedEventArgs^ e) {
		// Update the ProgressBar value when progress changes
		progressBar1->Value = e->ProgressPercentage;
	}
	private: System::Void backgroundWorker_RunWorkerCompleted(System::Object^ sender, RunWorkerCompletedEventArgs^ e) {
		// The scanChainInsertion is complete, you can perform cleanup or show a message
		//MessageBox::Show("Scan Chain Insertion complete!");
		
		convgnet->Enabled = true;
		ScanChainInsertButton->Enabled = false;
		progressBar1->Cursor = Cursors::Arrow;
		
		String^ appDirectory = Application::StartupPath;
		String^ fileName5 = "InsertedScanChainFile.v";
		String^ filePath5 = System::IO::Path::Combine(appDirectory, fileName5);
		String^ fileContents5 = System::IO::File::ReadAllText(filePath5);
		showyosys->Text = fileContents5;

	}

};
}
