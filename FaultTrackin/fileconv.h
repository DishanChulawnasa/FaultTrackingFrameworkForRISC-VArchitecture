#pragma once
#include <msclr/marshal_cppstd.h>
#include <regex>
#include "podem.h"
#include "VerilogToText.h"
#include "SequentialToCombinational.h"
#include "YosysModuleExporter.h"
#include "GenerateFaultNodesVector.h"
#include "GenerateTextVectors.h"
#include "FindOptimumTestVectors.h"
#include "GenerateTestVectorsSelected.h"
#include "VerilogFaultGeneration.h"
#include "ComparatorTool.h"


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



















































































private: System::Windows::Forms::Button^ minimize;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ closebutton;
private: System::Windows::Forms::Panel^ titlepnael;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TabPage^ tabPage6;









private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button12;


private: System::Windows::Forms::Button^ YosysModuleExporter;
private: System::Windows::Forms::Button^ YosysClearButton;


private: System::Windows::Forms::Button^ YosysBackButton;


private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ LoadYosysButton;
private: System::Windows::Forms::Button^ YosysNextButton;


private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::TextBox^ YOSYStxtBox;


private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TextBox^ AllTextVectorTextBox;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Label^ errlabel2;
private: System::Windows::Forms::Label^ errlabel;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ ft4;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ fi3;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ fc3;
private: System::Windows::Forms::Button^ home3;
private: System::Windows::Forms::Button^ home;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ testvector;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ pinodes;
private: System::Windows::Forms::Label^ podemprogress;
private: System::Windows::Forms::Button^ back3;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::Button^ testPatternForAll;
private: System::Windows::Forms::ProgressBar^ progressBar3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ moduleNameLabel;
private: System::Windows::Forms::Label^ finalNodeNumberLabel;
private: System::Windows::Forms::Button^ podem_action;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ fi2;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ fc2;
private: System::Windows::Forms::Button^ home2;
private: System::Windows::Forms::Button^ next2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ faultnode;
private: System::Windows::Forms::ComboBox^ stkat;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ back2;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ gatenet;
private: System::Windows::Forms::TabPage^ tabPage1;


private: System::Windows::Forms::ProgressBar^ progressBar2;
private: System::Windows::Forms::ProgressBar^ progressBar1;
private: System::Windows::Forms::Button^ ScanChainInsertButton;
private: System::Windows::Forms::Button^ clear;
private: System::Windows::Forms::ComboBox^ comseq;
private: System::Windows::Forms::Button^ back1;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ fc1;
private: System::Windows::Forms::Button^ home1;
private: System::Windows::Forms::Button^ openyosys;
private: System::Windows::Forms::Button^ nextbutton;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ showyosys;
private: System::Windows::Forms::Button^ convgnet;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ home0;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ homenext;
private: System::Windows::Forms::Label^ userManualLabel;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
private: System::Windows::Forms::Button^ OpenVerilogDesignButton;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
private: System::Windows::Forms::Button^ SavePathYosysButtom;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: System::Windows::Forms::Label^ yosysLabel;
private: System::Windows::Forms::Button^ nextTVGButton;

private: System::Windows::Forms::Button^ backTVGButton;
private: System::Windows::Forms::Button^ saveTestVectors;
private: System::Windows::Forms::Button^ FindNodes;



private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ ModuleTVGLabel;

private: System::Windows::Forms::Button^ generateTestVectorsButton;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::Button^ Next2TVGtab;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::Button^ button13;

private: System::Windows::Forms::Button^ OptimumTestVectorButton;
private: System::Windows::Forms::Button^ Next2SelectedVectorButton;

private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::TextBox^ SelectingSTKtxt;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ SelectedModule;

private: System::Windows::Forms::Label^ SelectedTestVectorLable;

private: System::Windows::Forms::Button^ GenerateSelectedVectorsButton;
private: System::Windows::Forms::Button^ NextSelectedVecBUtt;


private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ SelectingFaultyNodetxt;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::TextBox^ gatetext;

private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::TextBox^ ShowSelectedTestVectors;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ GVFIMselectedEach;

private: System::Windows::Forms::Button^ NextEachTrack;
private: System::Windows::Forms::Button^ GVFIMselected;


private: System::Windows::Forms::Button^ NextSelectedfTrack;

private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Button^ GVFIMAll;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ SewlectedFaultsLabel;
private: System::Windows::Forms::Label^ SelectedNodesLabel;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Button^ OpenOutputFFree;
private: System::Windows::Forms::TextBox^ OutptFFreeName;


private: System::Windows::Forms::Button^ CompareButton;
private: System::Windows::Forms::TextBox^ OutputFName;



private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ OpenOutputF;

private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ CompareModule;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ CompareDetection;

private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
private: System::Windows::Forms::OpenFileDialog^ openFileDialog5;




private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Button^ EDAPalyground;
private: System::Windows::Forms::Label^ SampleDirectory;


























































































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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->minimize = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->titlepnael = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->SavePathYosysButtom = (gcnew System::Windows::Forms::Button());
			this->OpenVerilogDesignButton = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->YosysModuleExporter = (gcnew System::Windows::Forms::Button());
			this->YosysClearButton = (gcnew System::Windows::Forms::Button());
			this->YosysBackButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->LoadYosysButton = (gcnew System::Windows::Forms::Button());
			this->YosysNextButton = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->yosysLabel = (gcnew System::Windows::Forms::Label());
			this->YOSYStxtBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->GVFIMAll = (gcnew System::Windows::Forms::Button());
			this->OptimumTestVectorButton = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->nextTVGButton = (gcnew System::Windows::Forms::Button());
			this->backTVGButton = (gcnew System::Windows::Forms::Button());
			this->saveTestVectors = (gcnew System::Windows::Forms::Button());
			this->FindNodes = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ModuleTVGLabel = (gcnew System::Windows::Forms::Label());
			this->generateTestVectorsButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->AllTextVectorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->GVFIMselectedEach = (gcnew System::Windows::Forms::Button());
			this->NextEachTrack = (gcnew System::Windows::Forms::Button());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->testPatternForAll = (gcnew System::Windows::Forms::Button());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Next2SelectedVectorButton = (gcnew System::Windows::Forms::Button());
			this->Next2TVGtab = (gcnew System::Windows::Forms::Button());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
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
			this->openyosys = (gcnew System::Windows::Forms::Button());
			this->nextbutton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->showyosys = (gcnew System::Windows::Forms::TextBox());
			this->convgnet = (gcnew System::Windows::Forms::Button());
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
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->homenext = (gcnew System::Windows::Forms::Button());
			this->userManualLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->EDAPalyground = (gcnew System::Windows::Forms::Button());
			this->SampleDirectory = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->CompareModule = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->CompareDetection = (gcnew System::Windows::Forms::TextBox());
			this->CompareButton = (gcnew System::Windows::Forms::Button());
			this->OutputFName = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->OpenOutputF = (gcnew System::Windows::Forms::Button());
			this->OutptFFreeName = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->OpenOutputFFree = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->SelectingSTKtxt = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->SelectedModule = (gcnew System::Windows::Forms::Label());
			this->SelectedTestVectorLable = (gcnew System::Windows::Forms::Label());
			this->GenerateSelectedVectorsButton = (gcnew System::Windows::Forms::Button());
			this->NextSelectedVecBUtt = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->SelectingFaultyNodetxt = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->gatetext = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->SewlectedFaultsLabel = (gcnew System::Windows::Forms::Label());
			this->SelectedNodesLabel = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->GVFIMselected = (gcnew System::Windows::Forms::Button());
			this->NextSelectedfTrack = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->ShowSelectedTestVectors = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog5 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->titlepnael->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel10->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->panel17->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(258, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 30);
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
			this->titlepnael->Controls->Add(this->label1);
			this->titlepnael->Controls->Add(this->button1);
			this->titlepnael->Controls->Add(this->closebutton);
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
			this->button1->Click += gcnew System::EventHandler(this, &fileconv::button1_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage6->Controls->Add(this->SavePathYosysButtom);
			this->tabPage6->Controls->Add(this->OpenVerilogDesignButton);
			this->tabPage6->Controls->Add(this->label24);
			this->tabPage6->Controls->Add(this->button12);
			this->tabPage6->Controls->Add(this->YosysModuleExporter);
			this->tabPage6->Controls->Add(this->YosysClearButton);
			this->tabPage6->Controls->Add(this->YosysBackButton);
			this->tabPage6->Controls->Add(this->panel11);
			this->tabPage6->Controls->Add(this->LoadYosysButton);
			this->tabPage6->Controls->Add(this->YosysNextButton);
			this->tabPage6->Controls->Add(this->panel12);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage6->Location = System::Drawing::Point(4, 32);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(833, 498);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"6";
			// 
			// SavePathYosysButtom
			// 
			this->SavePathYosysButtom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->SavePathYosysButtom->Enabled = false;
			this->SavePathYosysButtom->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->SavePathYosysButtom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SavePathYosysButtom->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SavePathYosysButtom->ForeColor = System::Drawing::Color::LightGray;
			this->SavePathYosysButtom->Location = System::Drawing::Point(30, 184);
			this->SavePathYosysButtom->Name = L"SavePathYosysButtom";
			this->SavePathYosysButtom->Size = System::Drawing::Size(170, 52);
			this->SavePathYosysButtom->TabIndex = 19;
			this->SavePathYosysButtom->Text = L"SELECT SAVE FOLDER";
			this->SavePathYosysButtom->UseVisualStyleBackColor = false;
			this->SavePathYosysButtom->Click += gcnew System::EventHandler(this, &fileconv::SavePathYosysButtom_Click);
			// 
			// OpenVerilogDesignButton
			// 
			this->OpenVerilogDesignButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->OpenVerilogDesignButton->Enabled = false;
			this->OpenVerilogDesignButton->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->OpenVerilogDesignButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenVerilogDesignButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenVerilogDesignButton->ForeColor = System::Drawing::Color::LightGray;
			this->OpenVerilogDesignButton->Location = System::Drawing::Point(30, 253);
			this->OpenVerilogDesignButton->Name = L"OpenVerilogDesignButton";
			this->OpenVerilogDesignButton->Size = System::Drawing::Size(170, 68);
			this->OpenVerilogDesignButton->TabIndex = 18;
			this->OpenVerilogDesignButton->Text = L"OPEN VERILOG DESIGN";
			this->OpenVerilogDesignButton->UseVisualStyleBackColor = false;
			this->OpenVerilogDesignButton->Click += gcnew System::EventHandler(this, &fileconv::OpenVerilogDesignButton_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label24->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label24->Location = System::Drawing::Point(90, 143);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(80, 20);
			this->label24->TabIndex = 17;
			this->label24->Text = L"For YOSYS";
			this->label24->Click += gcnew System::EventHandler(this, &fileconv::label24_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button12->Location = System::Drawing::Point(69, 137);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(21, 25);
			this->button12->TabIndex = 16;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &fileconv::button12_Click);
			// 
			// YosysModuleExporter
			// 
			this->YosysModuleExporter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->YosysModuleExporter->Enabled = false;
			this->YosysModuleExporter->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->YosysModuleExporter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->YosysModuleExporter->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YosysModuleExporter->ForeColor = System::Drawing::Color::LightGray;
			this->YosysModuleExporter->Location = System::Drawing::Point(30, 338);
			this->YosysModuleExporter->Name = L"YosysModuleExporter";
			this->YosysModuleExporter->Size = System::Drawing::Size(170, 63);
			this->YosysModuleExporter->TabIndex = 13;
			this->YosysModuleExporter->Text = L"CONVERT TO NETLIST";
			this->YosysModuleExporter->UseVisualStyleBackColor = false;
			this->YosysModuleExporter->Click += gcnew System::EventHandler(this, &fileconv::YosysModuleExporter_Click);
			// 
			// YosysClearButton
			// 
			this->YosysClearButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->YosysClearButton->Enabled = false;
			this->YosysClearButton->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->YosysClearButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->YosysClearButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YosysClearButton->ForeColor = System::Drawing::Color::LightGray;
			this->YosysClearButton->Location = System::Drawing::Point(321, 431);
			this->YosysClearButton->Name = L"YosysClearButton";
			this->YosysClearButton->Size = System::Drawing::Size(170, 49);
			this->YosysClearButton->TabIndex = 12;
			this->YosysClearButton->Text = L"CLEAR";
			this->YosysClearButton->UseVisualStyleBackColor = false;
			this->YosysClearButton->Click += gcnew System::EventHandler(this, &fileconv::YosysClearButton_Click);
			// 
			// YosysBackButton
			// 
			this->YosysBackButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->YosysBackButton->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->YosysBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->YosysBackButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YosysBackButton->ForeColor = System::Drawing::Color::LightGray;
			this->YosysBackButton->Location = System::Drawing::Point(10, 446);
			this->YosysBackButton->Name = L"YosysBackButton";
			this->YosysBackButton->Size = System::Drawing::Size(130, 34);
			this->YosysBackButton->TabIndex = 9;
			this->YosysBackButton->Text = L"<<BACK";
			this->YosysBackButton->UseVisualStyleBackColor = false;
			this->YosysBackButton->Click += gcnew System::EventHandler(this, &fileconv::YosysBackButton_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel11->Controls->Add(this->label25);
			this->panel11->Controls->Add(this->label26);
			this->panel11->Controls->Add(this->button16);
			this->panel11->Controls->Add(this->button17);
			this->panel11->Controls->Add(this->label27);
			this->panel11->Controls->Add(this->button18);
			this->panel11->Controls->Add(this->button19);
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(832, 40);
			this->panel11->TabIndex = 8;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::LightGray;
			this->label25->Location = System::Drawing::Point(672, 14);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(126, 20);
			this->label25->TabIndex = 16;
			this->label25->Text = L"FAULT TRACKING";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label26->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::LightGray;
			this->label26->Location = System::Drawing::Point(456, 14);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(129, 20);
			this->label26->TabIndex = 15;
			this->label26->Text = L"FAULT INJECTION";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button16->Dock = System::Windows::Forms::DockStyle::Left;
			this->button16->Enabled = false;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::LightGray;
			this->button16->Location = System::Drawing::Point(621, 0);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(213, 40);
			this->button16->TabIndex = 10;
			this->button16->Text = L" ";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button17->Dock = System::Windows::Forms::DockStyle::Left;
			this->button17->Enabled = false;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::LightGray;
			this->button17->Location = System::Drawing::Point(414, 0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(207, 40);
			this->button17->TabIndex = 9;
			this->button17->Text = L" ";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label27->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::LightGray;
			this->label27->Location = System::Drawing::Point(73, 14);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(53, 20);
			this->label27->TabIndex = 14;
			this->label27->Text = L"HOME";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button18->Dock = System::Windows::Forms::DockStyle::Left;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::LightGray;
			this->button18->Location = System::Drawing::Point(207, 0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(207, 40);
			this->button18->TabIndex = 8;
			this->button18->Text = L"FILE CONVERSION";
			this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Dock = System::Windows::Forms::DockStyle::Left;
			this->button19->Enabled = false;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::LightGray;
			this->button19->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button19->Location = System::Drawing::Point(0, 0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(207, 40);
			this->button19->TabIndex = 7;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// LoadYosysButton
			// 
			this->LoadYosysButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->LoadYosysButton->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->LoadYosysButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoadYosysButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadYosysButton->ForeColor = System::Drawing::Color::LightGray;
			this->LoadYosysButton->Location = System::Drawing::Point(30, 84);
			this->LoadYosysButton->Name = L"LoadYosysButton";
			this->LoadYosysButton->Size = System::Drawing::Size(170, 47);
			this->LoadYosysButton->TabIndex = 0;
			this->LoadYosysButton->Text = L"LOAD YOSYS";
			this->LoadYosysButton->UseVisualStyleBackColor = false;
			this->LoadYosysButton->Click += gcnew System::EventHandler(this, &fileconv::LoadYosysButton_Click);
			// 
			// YosysNextButton
			// 
			this->YosysNextButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->YosysNextButton->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->YosysNextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->YosysNextButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YosysNextButton->ForeColor = System::Drawing::Color::LightGray;
			this->YosysNextButton->Location = System::Drawing::Point(689, 446);
			this->YosysNextButton->Name = L"YosysNextButton";
			this->YosysNextButton->Size = System::Drawing::Size(130, 34);
			this->YosysNextButton->TabIndex = 6;
			this->YosysNextButton->Text = L"SKIP/NEXT>>";
			this->YosysNextButton->UseVisualStyleBackColor = false;
			this->YosysNextButton->Click += gcnew System::EventHandler(this, &fileconv::YosysNextButton_Click);
			// 
			// panel12
			// 
			this->panel12->AutoScroll = true;
			this->panel12->Controls->Add(this->yosysLabel);
			this->panel12->Controls->Add(this->YOSYStxtBox);
			this->panel12->Location = System::Drawing::Point(242, 67);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(556, 348);
			this->panel12->TabIndex = 4;
			// 
			// yosysLabel
			// 
			this->yosysLabel->AutoSize = true;
			this->yosysLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->yosysLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yosysLabel->ForeColor = System::Drawing::Color::LightGray;
			this->yosysLabel->Location = System::Drawing::Point(3, 1);
			this->yosysLabel->Name = L"yosysLabel";
			this->yosysLabel->Size = System::Drawing::Size(384, 323);
			this->yosysLabel->TabIndex = 20;
			this->yosysLabel->Text = resources->GetString(L"yosysLabel.Text");
			// 
			// YOSYStxtBox
			// 
			this->YOSYStxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->YOSYStxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->YOSYStxtBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->YOSYStxtBox->ForeColor = System::Drawing::Color::LightGray;
			this->YOSYStxtBox->Location = System::Drawing::Point(0, 0);
			this->YOSYStxtBox->Multiline = true;
			this->YOSYStxtBox->Name = L"YOSYStxtBox";
			this->YOSYStxtBox->ReadOnly = true;
			this->YOSYStxtBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->YOSYStxtBox->Size = System::Drawing::Size(556, 348);
			this->YOSYStxtBox->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->GVFIMAll);
			this->tabPage5->Controls->Add(this->OptimumTestVectorButton);
			this->tabPage5->Controls->Add(this->button13);
			this->tabPage5->Controls->Add(this->nextTVGButton);
			this->tabPage5->Controls->Add(this->backTVGButton);
			this->tabPage5->Controls->Add(this->saveTestVectors);
			this->tabPage5->Controls->Add(this->FindNodes);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->ModuleTVGLabel);
			this->tabPage5->Controls->Add(this->generateTestVectorsButton);
			this->tabPage5->Controls->Add(this->panel3);
			this->tabPage5->Controls->Add(this->AllTextVectorTextBox);
			this->tabPage5->Location = System::Drawing::Point(4, 32);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(833, 498);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"5";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::LightGray;
			this->label40->Location = System::Drawing::Point(218, 451);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(124, 23);
			this->label40->TabIndex = 29;
			this->label40->Text = L"For Simulation:";
			// 
			// GVFIMAll
			// 
			this->GVFIMAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->GVFIMAll->Enabled = false;
			this->GVFIMAll->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->GVFIMAll->FlatAppearance->BorderSize = 3;
			this->GVFIMAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GVFIMAll->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GVFIMAll->ForeColor = System::Drawing::Color::LightGray;
			this->GVFIMAll->Location = System::Drawing::Point(348, 442);
			this->GVFIMAll->Name = L"GVFIMAll";
			this->GVFIMAll->Size = System::Drawing::Size(333, 42);
			this->GVFIMAll->TabIndex = 28;
			this->GVFIMAll->Text = L"GENERATE VERILOG FAULT INJECTED MODULE";
			this->GVFIMAll->UseVisualStyleBackColor = false;
			this->GVFIMAll->Click += gcnew System::EventHandler(this, &fileconv::GVFIMAll_Click);
			// 
			// OptimumTestVectorButton
			// 
			this->OptimumTestVectorButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->OptimumTestVectorButton->Enabled = false;
			this->OptimumTestVectorButton->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->OptimumTestVectorButton->FlatAppearance->BorderSize = 3;
			this->OptimumTestVectorButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OptimumTestVectorButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OptimumTestVectorButton->ForeColor = System::Drawing::Color::LightGray;
			this->OptimumTestVectorButton->Location = System::Drawing::Point(29, 251);
			this->OptimumTestVectorButton->Name = L"OptimumTestVectorButton";
			this->OptimumTestVectorButton->Size = System::Drawing::Size(150, 57);
			this->OptimumTestVectorButton->TabIndex = 25;
			this->OptimumTestVectorButton->Text = L"FIND OPTIMUM TEST VECTORS";
			this->OptimumTestVectorButton->UseVisualStyleBackColor = false;
			this->OptimumTestVectorButton->Click += gcnew System::EventHandler(this, &fileconv::OptimumTestVectorButton_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button13->Enabled = false;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->button13->FlatAppearance->BorderSize = 3;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::LightGray;
			this->button13->Location = System::Drawing::Point(29, 381);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(150, 39);
			this->button13->TabIndex = 24;
			this->button13->Text = L"CLEAR";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &fileconv::button13_Click);
			// 
			// nextTVGButton
			// 
			this->nextTVGButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->nextTVGButton->Enabled = false;
			this->nextTVGButton->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->nextTVGButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextTVGButton->ForeColor = System::Drawing::Color::LightGray;
			this->nextTVGButton->Location = System::Drawing::Point(698, 442);
			this->nextTVGButton->Name = L"nextTVGButton";
			this->nextTVGButton->Size = System::Drawing::Size(94, 42);
			this->nextTVGButton->TabIndex = 23;
			this->nextTVGButton->Text = L"NEXT>>";
			this->nextTVGButton->UseVisualStyleBackColor = false;
			this->nextTVGButton->Click += gcnew System::EventHandler(this, &fileconv::nextTVGButton_Click);
			// 
			// backTVGButton
			// 
			this->backTVGButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->backTVGButton->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->backTVGButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backTVGButton->ForeColor = System::Drawing::Color::LightGray;
			this->backTVGButton->Location = System::Drawing::Point(15, 442);
			this->backTVGButton->Name = L"backTVGButton";
			this->backTVGButton->Size = System::Drawing::Size(94, 42);
			this->backTVGButton->TabIndex = 22;
			this->backTVGButton->Text = L"<<BACK";
			this->backTVGButton->UseVisualStyleBackColor = false;
			this->backTVGButton->Click += gcnew System::EventHandler(this, &fileconv::backTVGButton_Click);
			// 
			// saveTestVectors
			// 
			this->saveTestVectors->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->saveTestVectors->Enabled = false;
			this->saveTestVectors->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->saveTestVectors->FlatAppearance->BorderSize = 3;
			this->saveTestVectors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveTestVectors->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveTestVectors->ForeColor = System::Drawing::Color::LightGray;
			this->saveTestVectors->Location = System::Drawing::Point(29, 324);
			this->saveTestVectors->Name = L"saveTestVectors";
			this->saveTestVectors->Size = System::Drawing::Size(150, 41);
			this->saveTestVectors->TabIndex = 21;
			this->saveTestVectors->Text = L"SAVE";
			this->saveTestVectors->UseVisualStyleBackColor = false;
			this->saveTestVectors->Click += gcnew System::EventHandler(this, &fileconv::saveTestVectors_Click);
			// 
			// FindNodes
			// 
			this->FindNodes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->FindNodes->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->FindNodes->FlatAppearance->BorderSize = 3;
			this->FindNodes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FindNodes->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FindNodes->ForeColor = System::Drawing::Color::LightGray;
			this->FindNodes->Location = System::Drawing::Point(29, 100);
			this->FindNodes->Name = L"FindNodes";
			this->FindNodes->Size = System::Drawing::Size(150, 62);
			this->FindNodes->TabIndex = 20;
			this->FindNodes->Text = L"FIND FAULTABLE NODES";
			this->FindNodes->UseVisualStyleBackColor = false;
			this->FindNodes->Click += gcnew System::EventHandler(this, &fileconv::FindNodes_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::LightGray;
			this->label19->Location = System::Drawing::Point(17, 62);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 23);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Module :\r\n";
			// 
			// ModuleTVGLabel
			// 
			this->ModuleTVGLabel->AutoSize = true;
			this->ModuleTVGLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModuleTVGLabel->ForeColor = System::Drawing::Color::LightGray;
			this->ModuleTVGLabel->Location = System::Drawing::Point(90, 62);
			this->ModuleTVGLabel->Name = L"ModuleTVGLabel";
			this->ModuleTVGLabel->Size = System::Drawing::Size(69, 23);
			this->ModuleTVGLabel->TabIndex = 18;
			this->ModuleTVGLabel->Text = L"Module";
			this->ModuleTVGLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// generateTestVectorsButton
			// 
			this->generateTestVectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->generateTestVectorsButton->Enabled = false;
			this->generateTestVectorsButton->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->generateTestVectorsButton->FlatAppearance->BorderSize = 3;
			this->generateTestVectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generateTestVectorsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generateTestVectorsButton->ForeColor = System::Drawing::Color::LightGray;
			this->generateTestVectorsButton->Location = System::Drawing::Point(29, 178);
			this->generateTestVectorsButton->Name = L"generateTestVectorsButton";
			this->generateTestVectorsButton->Size = System::Drawing::Size(150, 56);
			this->generateTestVectorsButton->TabIndex = 17;
			this->generateTestVectorsButton->Text = L"GENERATE TEST VECTORS";
			this->generateTestVectorsButton->UseVisualStyleBackColor = false;
			this->generateTestVectorsButton->Click += gcnew System::EventHandler(this, &fileconv::generateTestVectorsButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(832, 40);
			this->panel3->TabIndex = 13;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label20->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::LightGray;
			this->label20->Location = System::Drawing::Point(456, 14);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(129, 20);
			this->label20->TabIndex = 14;
			this->label20->Text = L"FAULT INJECTION";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::LightGray;
			this->button2->Location = System::Drawing::Point(621, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"FAULT TRACKING";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::LightGray;
			this->label22->Location = System::Drawing::Point(251, 13);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(134, 20);
			this->label22->TabIndex = 19;
			this->label22->Text = L"FILE CONVERSION";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button8->Dock = System::Windows::Forms::DockStyle::Left;
			this->button8->Enabled = false;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::LightGray;
			this->button8->Location = System::Drawing::Point(414, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(207, 40);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label23->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::LightGray;
			this->label23->Location = System::Drawing::Point(73, 14);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 20);
			this->label23->TabIndex = 18;
			this->label23->Text = L"HOME";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button10->Dock = System::Windows::Forms::DockStyle::Left;
			this->button10->Enabled = false;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::LightGray;
			this->button10->Location = System::Drawing::Point(207, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(207, 40);
			this->button10->TabIndex = 8;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Dock = System::Windows::Forms::DockStyle::Left;
			this->button11->Enabled = false;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::LightGray;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button11->Location = System::Drawing::Point(0, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(207, 40);
			this->button11->TabIndex = 7;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// AllTextVectorTextBox
			// 
			this->AllTextVectorTextBox->BackColor = System::Drawing::Color::LightGray;
			this->AllTextVectorTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AllTextVectorTextBox->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AllTextVectorTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->AllTextVectorTextBox->Location = System::Drawing::Point(222, 72);
			this->AllTextVectorTextBox->Multiline = true;
			this->AllTextVectorTextBox->Name = L"AllTextVectorTextBox";
			this->AllTextVectorTextBox->ReadOnly = true;
			this->AllTextVectorTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->AllTextVectorTextBox->Size = System::Drawing::Size(570, 355);
			this->AllTextVectorTextBox->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->GVFIMselectedEach);
			this->tabPage3->Controls->Add(this->NextEachTrack);
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
			this->tabPage3->Text = L"4";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::LightGray;
			this->label33->Location = System::Drawing::Point(43, 386);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(124, 23);
			this->label33->TabIndex = 29;
			this->label33->Text = L"For Simulation:";
			// 
			// GVFIMselectedEach
			// 
			this->GVFIMselectedEach->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->GVFIMselectedEach->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->GVFIMselectedEach->FlatAppearance->BorderSize = 3;
			this->GVFIMselectedEach->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GVFIMselectedEach->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GVFIMselectedEach->ForeColor = System::Drawing::Color::LightGray;
			this->GVFIMselectedEach->Location = System::Drawing::Point(173, 377);
			this->GVFIMselectedEach->Name = L"GVFIMselectedEach";
			this->GVFIMselectedEach->Size = System::Drawing::Size(333, 41);
			this->GVFIMselectedEach->TabIndex = 26;
			this->GVFIMselectedEach->Text = L"GENERATE VERILOG FAULT INJECTED MODULE";
			this->GVFIMselectedEach->UseVisualStyleBackColor = false;
			this->GVFIMselectedEach->Click += gcnew System::EventHandler(this, &fileconv::GVFIMselectedEach_Click);
			// 
			// NextEachTrack
			// 
			this->NextEachTrack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->NextEachTrack->Enabled = false;
			this->NextEachTrack->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->NextEachTrack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextEachTrack->ForeColor = System::Drawing::Color::LightGray;
			this->NextEachTrack->Location = System::Drawing::Point(529, 438);
			this->NextEachTrack->Name = L"NextEachTrack";
			this->NextEachTrack->Size = System::Drawing::Size(167, 35);
			this->NextEachTrack->TabIndex = 25;
			this->NextEachTrack->Text = L"NEXT>>";
			this->NextEachTrack->UseVisualStyleBackColor = false;
			this->NextEachTrack->Click += gcnew System::EventHandler(this, &fileconv::NextEachTrack_Click);
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
			this->home->Location = System::Drawing::Point(333, 438);
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
			this->panel5->Location = System::Drawing::Point(47, 290);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(731, 73);
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
			this->testvector->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->testvector->Size = System::Drawing::Size(731, 73);
			this->testvector->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightGray;
			this->label6->Location = System::Drawing::Point(43, 259);
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
			this->label5->Location = System::Drawing::Point(43, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Primary Input Nodes :";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pinodes);
			this->panel4->Location = System::Drawing::Point(47, 135);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(731, 107);
			this->panel4->TabIndex = 3;
			// 
			// pinodes
			// 
			this->pinodes->BackColor = System::Drawing::Color::LightGray;
			this->pinodes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pinodes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pinodes->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pinodes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->pinodes->Location = System::Drawing::Point(0, 0);
			this->pinodes->Multiline = true;
			this->pinodes->Name = L"pinodes";
			this->pinodes->ReadOnly = true;
			this->pinodes->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->pinodes->Size = System::Drawing::Size(731, 107);
			this->pinodes->TabIndex = 1;
			// 
			// podemprogress
			// 
			this->podemprogress->AutoSize = true;
			this->podemprogress->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->podemprogress->ForeColor = System::Drawing::Color::PowderBlue;
			this->podemprogress->Location = System::Drawing::Point(313, 60);
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
			this->back3->Location = System::Drawing::Point(132, 438);
			this->back3->Name = L"back3";
			this->back3->Size = System::Drawing::Size(167, 35);
			this->back3->TabIndex = 0;
			this->back3->Text = L"<<BACK";
			this->back3->UseVisualStyleBackColor = false;
			this->back3->Click += gcnew System::EventHandler(this, &fileconv::back3_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage2->Controls->Add(this->testPatternForAll);
			this->tabPage2->Controls->Add(this->progressBar3);
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
			this->tabPage2->Text = L"3";
			// 
			// testPatternForAll
			// 
			this->testPatternForAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->testPatternForAll->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->testPatternForAll->FlatAppearance->BorderSize = 3;
			this->testPatternForAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->testPatternForAll->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->testPatternForAll->ForeColor = System::Drawing::Color::LightGray;
			this->testPatternForAll->Location = System::Drawing::Point(207, 474);
			this->testPatternForAll->Name = L"testPatternForAll";
			this->testPatternForAll->Size = System::Drawing::Size(195, 51);
			this->testPatternForAll->TabIndex = 16;
			this->testPatternForAll->Text = L"FIND TEST PATTERNS";
			this->testPatternForAll->UseVisualStyleBackColor = false;
			this->testPatternForAll->Visible = false;
			this->testPatternForAll->Click += gcnew System::EventHandler(this, &fileconv::testPatternForAll_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(19, 448);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(430, 10);
			this->progressBar3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightGray;
			this->label4->Location = System::Drawing::Point(483, 150);
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
			this->moduleNameLabel->Location = System::Drawing::Point(698, 148);
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
			this->podem_action->Location = System::Drawing::Point(699, 317);
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
			this->next2->Location = System::Drawing::Point(714, 407);
			this->next2->Name = L"next2";
			this->next2->Size = System::Drawing::Size(84, 51);
			this->next2->TabIndex = 6;
			this->next2->Text = L"NEXT>>";
			this->next2->UseVisualStyleBackColor = false;
			this->next2->Click += gcnew System::EventHandler(this, &fileconv::next2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(483, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Choose the Stuck-at Value :";
			// 
			// faultnode
			// 
			this->faultnode->BackColor = System::Drawing::Color::LightGray;
			this->faultnode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->faultnode->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faultnode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->faultnode->Location = System::Drawing::Point(703, 195);
			this->faultnode->Name = L"faultnode";
			this->faultnode->Size = System::Drawing::Size(85, 30);
			this->faultnode->TabIndex = 4;
			this->faultnode->TextChanged += gcnew System::EventHandler(this, &fileconv::faultnode_TextChanged);
			this->faultnode->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &fileconv::faultnode_KeyPress);
			// 
			// stkat
			// 
			this->stkat->BackColor = System::Drawing::Color::LightGray;
			this->stkat->Enabled = false;
			this->stkat->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stkat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->stkat->FormattingEnabled = true;
			this->stkat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->stkat->Location = System::Drawing::Point(703, 253);
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
			this->label2->Location = System::Drawing::Point(483, 202);
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
			this->back2->Location = System::Drawing::Point(487, 407);
			this->back2->Name = L"back2";
			this->back2->Size = System::Drawing::Size(84, 51);
			this->back2->TabIndex = 1;
			this->back2->Text = L"<<BACK";
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
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->Next2SelectedVectorButton);
			this->tabPage1->Controls->Add(this->Next2TVGtab);
			this->tabPage1->Controls->Add(this->progressBar2);
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
			this->tabPage1->Text = L"2";
			// 
			// Next2SelectedVectorButton
			// 
			this->Next2SelectedVectorButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Next2SelectedVectorButton->Enabled = false;
			this->Next2SelectedVectorButton->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->Next2SelectedVectorButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Next2SelectedVectorButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next2SelectedVectorButton->ForeColor = System::Drawing::Color::LightGray;
			this->Next2SelectedVectorButton->Location = System::Drawing::Point(474, 427);
			this->Next2SelectedVectorButton->Name = L"Next2SelectedVectorButton";
			this->Next2SelectedVectorButton->Size = System::Drawing::Size(164, 53);
			this->Next2SelectedVectorButton->TabIndex = 17;
			this->Next2SelectedVectorButton->Text = L"ATPG FOR SELECTED NODES>>";
			this->Next2SelectedVectorButton->UseVisualStyleBackColor = false;
			this->Next2SelectedVectorButton->Click += gcnew System::EventHandler(this, &fileconv::Next2SelectedVectorButton_Click);
			// 
			// Next2TVGtab
			// 
			this->Next2TVGtab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Next2TVGtab->Enabled = false;
			this->Next2TVGtab->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->Next2TVGtab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Next2TVGtab->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next2TVGtab->ForeColor = System::Drawing::Color::LightGray;
			this->Next2TVGtab->Location = System::Drawing::Point(653, 427);
			this->Next2TVGtab->Name = L"Next2TVGtab";
			this->Next2TVGtab->Size = System::Drawing::Size(164, 53);
			this->Next2TVGtab->TabIndex = 16;
			this->Next2TVGtab->Text = L"ATPG FOR ALL NODES>>";
			this->Next2TVGtab->UseVisualStyleBackColor = false;
			this->Next2TVGtab->Click += gcnew System::EventHandler(this, &fileconv::Next2TVGtab_Click);
			// 
			// progressBar2
			// 
			this->progressBar2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->progressBar2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->progressBar2->Location = System::Drawing::Point(21, 399);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(584, 10);
			this->progressBar2->TabIndex = 15;
			this->progressBar2->Visible = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->progressBar1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->progressBar1->Location = System::Drawing::Point(21, 398);
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
			this->ScanChainInsertButton->Location = System::Drawing::Point(628, 166);
			this->ScanChainInsertButton->Name = L"ScanChainInsertButton";
			this->ScanChainInsertButton->Size = System::Drawing::Size(170, 63);
			this->ScanChainInsertButton->TabIndex = 13;
			this->ScanChainInsertButton->Text = L"ENABLE SCAN\r\nCHAIN";
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
			this->clear->Location = System::Drawing::Point(628, 350);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(170, 48);
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
			this->comseq->Location = System::Drawing::Point(180, 483);
			this->comseq->Name = L"comseq";
			this->comseq->Size = System::Drawing::Size(41, 31);
			this->comseq->TabIndex = 11;
			this->comseq->Visible = false;
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
			this->back1->Location = System::Drawing::Point(10, 446);
			this->back1->Name = L"back1";
			this->back1->Size = System::Drawing::Size(130, 34);
			this->back1->TabIndex = 9;
			this->back1->Text = L"<<BACK";
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
			// openyosys
			// 
			this->openyosys->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->openyosys->FlatAppearance->BorderColor = System::Drawing::Color::LightSkyBlue;
			this->openyosys->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openyosys->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->openyosys->ForeColor = System::Drawing::Color::LightGray;
			this->openyosys->Location = System::Drawing::Point(628, 77);
			this->openyosys->Name = L"openyosys";
			this->openyosys->Size = System::Drawing::Size(170, 61);
			this->openyosys->TabIndex = 0;
			this->openyosys->Text = L"OPEN YOSYS GENERATED FILE";
			this->openyosys->UseVisualStyleBackColor = false;
			this->openyosys->Click += gcnew System::EventHandler(this, &fileconv::openyosys_Click);
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
			this->nextbutton->Location = System::Drawing::Point(293, 427);
			this->nextbutton->Name = L"nextbutton";
			this->nextbutton->Size = System::Drawing::Size(164, 53);
			this->nextbutton->TabIndex = 6;
			this->nextbutton->Text = L"ATPG FOR EACH NODE>>";
			this->nextbutton->UseVisualStyleBackColor = false;
			this->nextbutton->Click += gcnew System::EventHandler(this, &fileconv::nextbutton_Click);
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->showyosys);
			this->panel2->Location = System::Drawing::Point(21, 59);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(584, 339);
			this->panel2->TabIndex = 4;
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
			this->showyosys->Size = System::Drawing::Size(584, 339);
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
			this->convgnet->Location = System::Drawing::Point(628, 254);
			this->convgnet->Name = L"convgnet";
			this->convgnet->Size = System::Drawing::Size(170, 66);
			this->convgnet->TabIndex = 1;
			this->convgnet->Text = L"CONVERT TO GATE-LEVEL NETLIST";
			this->convgnet->UseVisualStyleBackColor = false;
			this->convgnet->Click += gcnew System::EventHandler(this, &fileconv::convgnet_Click);
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
			this->tabPage4->Text = L"1";
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
			this->flowLayoutPanel1->Location = System::Drawing::Point(431, 35);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(401, 459);
			this->flowLayoutPanel1->TabIndex = 14;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label21);
			this->panel10->Controls->Add(this->homenext);
			this->panel10->Controls->Add(this->userManualLabel);
			this->panel10->Controls->Add(this->flowLayoutPanel2);
			this->panel10->Location = System::Drawing::Point(9, 48);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(434, 455);
			this->panel10->TabIndex = 18;
			// 
			// label21
			// 
			this->label21->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::Control;
			this->label21->Location = System::Drawing::Point(100, 12);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(339, 60);
			this->label21->TabIndex = 4;
			this->label21->Text = L"FAULT TRACKING FRAMEWORK\r\n FOR RISC-V ARCHITECTURE\r\n";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->homenext->Location = System::Drawing::Point(186, 372);
			this->homenext->Name = L"homenext";
			this->homenext->Size = System::Drawing::Size(91, 35);
			this->homenext->TabIndex = 12;
			this->homenext->Text = L"NEXT>>";
			this->homenext->UseVisualStyleBackColor = false;
			this->homenext->Click += gcnew System::EventHandler(this, &fileconv::homenext_Click);
			// 
			// userManualLabel
			// 
			this->userManualLabel->AutoSize = true;
			this->userManualLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->userManualLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->userManualLabel->ForeColor = System::Drawing::Color::SkyBlue;
			this->userManualLabel->Location = System::Drawing::Point(198, 413);
			this->userManualLabel->Name = L"userManualLabel";
			this->userManualLabel->Size = System::Drawing::Size(84, 17);
			this->userManualLabel->TabIndex = 17;
			this->userManualLabel->Text = L"User Manual";
			this->userManualLabel->Click += gcnew System::EventHandler(this, &fileconv::userManualLabel_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel2.BackgroundImage")));
			this->flowLayoutPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->flowLayoutPanel2->Location = System::Drawing::Point(36, 60);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(398, 318);
			this->flowLayoutPanel2->TabIndex = 18;
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(-5, 29);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(841, 534);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->tabPage7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage7->Controls->Add(this->panel17);
			this->tabPage7->Controls->Add(this->SampleDirectory);
			this->tabPage7->Controls->Add(this->EDAPalyground);
			this->tabPage7->Controls->Add(this->panel18);
			this->tabPage7->Controls->Add(this->label46);
			this->tabPage7->Controls->Add(this->CompareModule);
			this->tabPage7->Controls->Add(this->label45);
			this->tabPage7->Controls->Add(this->CompareDetection);
			this->tabPage7->Controls->Add(this->CompareButton);
			this->tabPage7->Controls->Add(this->OutputFName);
			this->tabPage7->Controls->Add(this->label44);
			this->tabPage7->Controls->Add(this->OpenOutputF);
			this->tabPage7->Controls->Add(this->OutptFFreeName);
			this->tabPage7->Controls->Add(this->label43);
			this->tabPage7->Controls->Add(this->OpenOutputFFree);
			this->tabPage7->Controls->Add(this->button30);
			this->tabPage7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage7->Location = System::Drawing::Point(4, 32);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(833, 498);
			this->tabPage7->TabIndex = 7;
			this->tabPage7->Text = L"7";
			// 
			// EDAPalyground
			// 
			this->EDAPalyground->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->EDAPalyground->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EDAPalyground.BackgroundImage")));
			this->EDAPalyground->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->EDAPalyground->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EDAPalyground->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->EDAPalyground->FlatAppearance->BorderSize = 2;
			this->EDAPalyground->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EDAPalyground->ForeColor = System::Drawing::Color::Black;
			this->EDAPalyground->Location = System::Drawing::Point(681, 54);
			this->EDAPalyground->Name = L"EDAPalyground";
			this->EDAPalyground->Size = System::Drawing::Size(121, 118);
			this->EDAPalyground->TabIndex = 4;
			this->EDAPalyground->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->EDAPalyground->UseMnemonic = false;
			this->EDAPalyground->UseVisualStyleBackColor = false;
			this->EDAPalyground->Click += gcnew System::EventHandler(this, &fileconv::EDAPalyground_Click);
			// 
			// SampleDirectory
			// 
			this->SampleDirectory->AutoSize = true;
			this->SampleDirectory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SampleDirectory->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SampleDirectory->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->SampleDirectory->Location = System::Drawing::Point(673, 176);
			this->SampleDirectory->Name = L"SampleDirectory";
			this->SampleDirectory->Size = System::Drawing::Size(164, 40);
			this->SampleDirectory->TabIndex = 44;
			this->SampleDirectory->Text = L"ACCESS SAMPLE \r\nTESTBENCH MODULES";
			this->SampleDirectory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SampleDirectory->Click += gcnew System::EventHandler(this, &fileconv::SampleDirectory_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel17->Controls->Add(this->label48);
			this->panel17->Location = System::Drawing::Point(-1, -1);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(829, 49);
			this->panel17->TabIndex = 41;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label48->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::LightGray;
			this->label48->Location = System::Drawing::Point(333, 10);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(190, 32);
			this->label48->TabIndex = 40;
			this->label48->Text = L"FAULT TRACKER";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::LightGray;
			this->label46->Location = System::Drawing::Point(33, 225);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(84, 23);
			this->label46->TabIndex = 36;
			this->label46->Text = L"MODULE:";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CompareModule
			// 
			this->CompareModule->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->CompareModule->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CompareModule->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CompareModule->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompareModule->ForeColor = System::Drawing::Color::PowderBlue;
			this->CompareModule->Location = System::Drawing::Point(413, 223);
			this->CompareModule->Name = L"CompareModule";
			this->CompareModule->ReadOnly = true;
			this->CompareModule->Size = System::Drawing::Size(252, 30);
			this->CompareModule->TabIndex = 35;
			this->CompareModule->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::LightGray;
			this->label45->Location = System::Drawing::Point(33, 372);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(71, 23);
			this->label45->TabIndex = 34;
			this->label45->Text = L"STATUS:";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CompareDetection
			// 
			this->CompareDetection->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->CompareDetection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CompareDetection->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CompareDetection->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompareDetection->ForeColor = System::Drawing::Color::LightCoral;
			this->CompareDetection->Location = System::Drawing::Point(413, 370);
			this->CompareDetection->Name = L"CompareDetection";
			this->CompareDetection->ReadOnly = true;
			this->CompareDetection->Size = System::Drawing::Size(252, 30);
			this->CompareDetection->TabIndex = 33;
			this->CompareDetection->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CompareButton
			// 
			this->CompareButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->CompareButton->Enabled = false;
			this->CompareButton->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->CompareButton->FlatAppearance->BorderSize = 3;
			this->CompareButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CompareButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CompareButton->ForeColor = System::Drawing::Color::LightGray;
			this->CompareButton->Location = System::Drawing::Point(688, 282);
			this->CompareButton->Name = L"CompareButton";
			this->CompareButton->Size = System::Drawing::Size(103, 61);
			this->CompareButton->TabIndex = 32;
			this->CompareButton->Text = L"COMPARE";
			this->CompareButton->UseVisualStyleBackColor = false;
			this->CompareButton->Click += gcnew System::EventHandler(this, &fileconv::CompareButton_Click);
			// 
			// OutputFName
			// 
			this->OutputFName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->OutputFName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->OutputFName->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->OutputFName->ForeColor = System::Drawing::Color::LightGray;
			this->OutputFName->Location = System::Drawing::Point(413, 320);
			this->OutputFName->Name = L"OutputFName";
			this->OutputFName->ReadOnly = true;
			this->OutputFName->Size = System::Drawing::Size(229, 30);
			this->OutputFName->TabIndex = 31;
			this->OutputFName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::LightGray;
			this->label44->Location = System::Drawing::Point(33, 323);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(341, 23);
			this->label44->TabIndex = 30;
			this->label44->Text = L"OPEN FAULTY MODULE OUTPUT STREAM: ";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OpenOutputF
			// 
			this->OpenOutputF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->OpenOutputF->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->OpenOutputF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenOutputF->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenOutputF->ForeColor = System::Drawing::Color::LightGray;
			this->OpenOutputF->Location = System::Drawing::Point(642, 320);
			this->OpenOutputF->Name = L"OpenOutputF";
			this->OpenOutputF->Size = System::Drawing::Size(23, 30);
			this->OpenOutputF->TabIndex = 29;
			this->OpenOutputF->Text = L":";
			this->OpenOutputF->UseVisualStyleBackColor = false;
			this->OpenOutputF->Click += gcnew System::EventHandler(this, &fileconv::OpenOutputF_Click);
			// 
			// OutptFFreeName
			// 
			this->OutptFFreeName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->OutptFFreeName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->OutptFFreeName->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->OutptFFreeName->ForeColor = System::Drawing::Color::LightGray;
			this->OutptFFreeName->Location = System::Drawing::Point(413, 272);
			this->OutptFFreeName->Name = L"OutptFFreeName";
			this->OutptFFreeName->ReadOnly = true;
			this->OutptFFreeName->Size = System::Drawing::Size(229, 30);
			this->OutptFFreeName->TabIndex = 28;
			this->OutptFFreeName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::LightGray;
			this->label43->Location = System::Drawing::Point(33, 275);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(374, 23);
			this->label43->TabIndex = 27;
			this->label43->Text = L"OPEN FAULT-FREE MODULE OUTPUT STREAM: ";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// OpenOutputFFree
			// 
			this->OpenOutputFFree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->OpenOutputFFree->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->OpenOutputFFree->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenOutputFFree->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenOutputFFree->ForeColor = System::Drawing::Color::LightGray;
			this->OpenOutputFFree->Location = System::Drawing::Point(642, 272);
			this->OpenOutputFFree->Name = L"OpenOutputFFree";
			this->OpenOutputFFree->Size = System::Drawing::Size(23, 30);
			this->OpenOutputFFree->TabIndex = 23;
			this->OpenOutputFFree->Text = L":";
			this->OpenOutputFFree->UseVisualStyleBackColor = false;
			this->OpenOutputFFree->Click += gcnew System::EventHandler(this, &fileconv::OpenOutputFFree_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::LightCoral;
			this->button30->FlatAppearance->BorderSize = 2;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->ForeColor = System::Drawing::Color::LightGray;
			this->button30->Location = System::Drawing::Point(355, 433);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(167, 35);
			this->button30->TabIndex = 22;
			this->button30->Text = L"HOME";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &fileconv::button30_Click);
			// 
			// panel18
			// 
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel18->Location = System::Drawing::Point(6, 41);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(667, 171);
			this->panel18->TabIndex = 43;
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage8->Controls->Add(this->SelectingSTKtxt);
			this->tabPage8->Controls->Add(this->label31);
			this->tabPage8->Controls->Add(this->SelectedModule);
			this->tabPage8->Controls->Add(this->SelectedTestVectorLable);
			this->tabPage8->Controls->Add(this->GenerateSelectedVectorsButton);
			this->tabPage8->Controls->Add(this->NextSelectedVecBUtt);
			this->tabPage8->Controls->Add(this->label34);
			this->tabPage8->Controls->Add(this->SelectingFaultyNodetxt);
			this->tabPage8->Controls->Add(this->label35);
			this->tabPage8->Controls->Add(this->button25);
			this->tabPage8->Controls->Add(this->panel14);
			this->tabPage8->Controls->Add(this->panel13);
			this->tabPage8->Location = System::Drawing::Point(4, 32);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(833, 498);
			this->tabPage8->TabIndex = 8;
			this->tabPage8->Text = L"8";
			// 
			// SelectingSTKtxt
			// 
			this->SelectingSTKtxt->BackColor = System::Drawing::Color::LightGray;
			this->SelectingSTKtxt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SelectingSTKtxt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectingSTKtxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->SelectingSTKtxt->Location = System::Drawing::Point(486, 282);
			this->SelectingSTKtxt->Name = L"SelectingSTKtxt";
			this->SelectingSTKtxt->Size = System::Drawing::Size(303, 30);
			this->SelectingSTKtxt->TabIndex = 28;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::LightGray;
			this->label31->Location = System::Drawing::Point(482, 116);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(78, 23);
			this->label31->TabIndex = 27;
			this->label31->Text = L"Module :\r\n";
			// 
			// SelectedModule
			// 
			this->SelectedModule->AutoSize = true;
			this->SelectedModule->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectedModule->ForeColor = System::Drawing::Color::LightGray;
			this->SelectedModule->Location = System::Drawing::Point(566, 116);
			this->SelectedModule->Name = L"SelectedModule";
			this->SelectedModule->Size = System::Drawing::Size(69, 23);
			this->SelectedModule->TabIndex = 26;
			this->SelectedModule->Text = L"Module";
			this->SelectedModule->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SelectedTestVectorLable
			// 
			this->SelectedTestVectorLable->AutoSize = true;
			this->SelectedTestVectorLable->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectedTestVectorLable->ForeColor = System::Drawing::Color::PowderBlue;
			this->SelectedTestVectorLable->Location = System::Drawing::Point(523, 51);
			this->SelectedTestVectorLable->Name = L"SelectedTestVectorLable";
			this->SelectedTestVectorLable->Size = System::Drawing::Size(223, 50);
			this->SelectedTestVectorLable->TabIndex = 25;
			this->SelectedTestVectorLable->Text = L"Choose A Node Between\r\n1 and to Inject Fault";
			this->SelectedTestVectorLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GenerateSelectedVectorsButton
			// 
			this->GenerateSelectedVectorsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->GenerateSelectedVectorsButton->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->GenerateSelectedVectorsButton->FlatAppearance->BorderSize = 3;
			this->GenerateSelectedVectorsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenerateSelectedVectorsButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GenerateSelectedVectorsButton->ForeColor = System::Drawing::Color::LightGray;
			this->GenerateSelectedVectorsButton->Location = System::Drawing::Point(546, 338);
			this->GenerateSelectedVectorsButton->Name = L"GenerateSelectedVectorsButton";
			this->GenerateSelectedVectorsButton->Size = System::Drawing::Size(217, 51);
			this->GenerateSelectedVectorsButton->TabIndex = 24;
			this->GenerateSelectedVectorsButton->Text = L"GENRATE TEST VECTORS";
			this->GenerateSelectedVectorsButton->UseVisualStyleBackColor = false;
			this->GenerateSelectedVectorsButton->Click += gcnew System::EventHandler(this, &fileconv::GenerateSelectedVectorsButton_Click);
			// 
			// NextSelectedVecBUtt
			// 
			this->NextSelectedVecBUtt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->NextSelectedVecBUtt->Enabled = false;
			this->NextSelectedVecBUtt->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->NextSelectedVecBUtt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextSelectedVecBUtt->ForeColor = System::Drawing::Color::LightGray;
			this->NextSelectedVecBUtt->Location = System::Drawing::Point(714, 411);
			this->NextSelectedVecBUtt->Name = L"NextSelectedVecBUtt";
			this->NextSelectedVecBUtt->Size = System::Drawing::Size(84, 51);
			this->NextSelectedVecBUtt->TabIndex = 23;
			this->NextSelectedVecBUtt->Text = L"NEXT>>";
			this->NextSelectedVecBUtt->UseVisualStyleBackColor = false;
			this->NextSelectedVecBUtt->Click += gcnew System::EventHandler(this, &fileconv::NextSelectedVecBUtt_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::LightGray;
			this->label34->Location = System::Drawing::Point(482, 230);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(305, 46);
			this->label34->TabIndex = 22;
			this->label34->Text = L"Choose the Stuck-at Value Respective \r\nto the Above Nodes: (Ex: 1, 0, 1)";
			// 
			// SelectingFaultyNodetxt
			// 
			this->SelectingFaultyNodetxt->BackColor = System::Drawing::Color::LightGray;
			this->SelectingFaultyNodetxt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SelectingFaultyNodetxt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectingFaultyNodetxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->SelectingFaultyNodetxt->Location = System::Drawing::Point(486, 182);
			this->SelectingFaultyNodetxt->Name = L"SelectingFaultyNodetxt";
			this->SelectingFaultyNodetxt->Size = System::Drawing::Size(303, 30);
			this->SelectingFaultyNodetxt->TabIndex = 21;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::LightGray;
			this->label35->Location = System::Drawing::Point(482, 151);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(326, 23);
			this->label35->TabIndex = 19;
			this->label35->Text = L"Enter the Faulty Nodes : (Ex: 205, 123, 92)\r\n";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->ForeColor = System::Drawing::Color::LightGray;
			this->button25->Location = System::Drawing::Point(495, 411);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(84, 51);
			this->button25->TabIndex = 17;
			this->button25->Text = L"<<BACK";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &fileconv::button25_Click);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->gatetext);
			this->panel14->Location = System::Drawing::Point(27, 51);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(430, 411);
			this->panel14->TabIndex = 16;
			// 
			// gatetext
			// 
			this->gatetext->BackColor = System::Drawing::Color::LightGray;
			this->gatetext->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gatetext->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gatetext->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gatetext->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->gatetext->Location = System::Drawing::Point(0, 0);
			this->gatetext->Multiline = true;
			this->gatetext->Name = L"gatetext";
			this->gatetext->ReadOnly = true;
			this->gatetext->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->gatetext->Size = System::Drawing::Size(430, 411);
			this->gatetext->TabIndex = 1;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel13->Controls->Add(this->label28);
			this->panel13->Controls->Add(this->label29);
			this->panel13->Controls->Add(this->button15);
			this->panel13->Controls->Add(this->button20);
			this->panel13->Controls->Add(this->label30);
			this->panel13->Controls->Add(this->button21);
			this->panel13->Controls->Add(this->button22);
			this->panel13->Location = System::Drawing::Point(0, 0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(832, 40);
			this->panel13->TabIndex = 12;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label28->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::LightGray;
			this->label28->Location = System::Drawing::Point(672, 14);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(126, 20);
			this->label28->TabIndex = 17;
			this->label28->Text = L"FAULT TRACKING";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label29->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::LightGray;
			this->label29->Location = System::Drawing::Point(73, 14);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(53, 20);
			this->label29->TabIndex = 17;
			this->label29->Text = L"HOME";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button15->Dock = System::Windows::Forms::DockStyle::Left;
			this->button15->Enabled = false;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::LightGray;
			this->button15->Location = System::Drawing::Point(621, 0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(213, 40);
			this->button15->TabIndex = 10;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button20->Dock = System::Windows::Forms::DockStyle::Left;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::LightGray;
			this->button20->Location = System::Drawing::Point(414, 0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(207, 40);
			this->button20->TabIndex = 9;
			this->button20->Text = L"FAULT INJECTION";
			this->button20->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label30->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::LightGray;
			this->label30->Location = System::Drawing::Point(251, 13);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(134, 20);
			this->label30->TabIndex = 14;
			this->label30->Text = L"FILE CONVERSION";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button21->Dock = System::Windows::Forms::DockStyle::Left;
			this->button21->Enabled = false;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Transparent;
			this->button21->Location = System::Drawing::Point(207, 0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(207, 40);
			this->button21->TabIndex = 8;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Dock = System::Windows::Forms::DockStyle::Left;
			this->button22->Enabled = false;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::LightGray;
			this->button22->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button22->Location = System::Drawing::Point(0, 0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(207, 40);
			this->button22->TabIndex = 7;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->tabPage9->Controls->Add(this->SewlectedFaultsLabel);
			this->tabPage9->Controls->Add(this->SelectedNodesLabel);
			this->tabPage9->Controls->Add(this->label42);
			this->tabPage9->Controls->Add(this->label32);
			this->tabPage9->Controls->Add(this->GVFIMselected);
			this->tabPage9->Controls->Add(this->NextSelectedfTrack);
			this->tabPage9->Controls->Add(this->panel15);
			this->tabPage9->Controls->Add(this->button28);
			this->tabPage9->Controls->Add(this->panel16);
			this->tabPage9->Controls->Add(this->label39);
			this->tabPage9->Controls->Add(this->label41);
			this->tabPage9->Controls->Add(this->button29);
			this->tabPage9->Location = System::Drawing::Point(4, 32);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(833, 498);
			this->tabPage9->TabIndex = 9;
			this->tabPage9->Text = L"9";
			// 
			// SewlectedFaultsLabel
			// 
			this->SewlectedFaultsLabel->AutoSize = true;
			this->SewlectedFaultsLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SewlectedFaultsLabel->ForeColor = System::Drawing::Color::LightGray;
			this->SewlectedFaultsLabel->Location = System::Drawing::Point(211, 149);
			this->SewlectedFaultsLabel->Name = L"SewlectedFaultsLabel";
			this->SewlectedFaultsLabel->Size = System::Drawing::Size(54, 23);
			this->SewlectedFaultsLabel->TabIndex = 31;
			this->SewlectedFaultsLabel->Text = L"Faults";
			// 
			// SelectedNodesLabel
			// 
			this->SelectedNodesLabel->AutoSize = true;
			this->SelectedNodesLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectedNodesLabel->ForeColor = System::Drawing::Color::LightGray;
			this->SelectedNodesLabel->Location = System::Drawing::Point(209, 113);
			this->SelectedNodesLabel->Name = L"SelectedNodesLabel";
			this->SelectedNodesLabel->Size = System::Drawing::Size(59, 23);
			this->SelectedNodesLabel->TabIndex = 30;
			this->SelectedNodesLabel->Text = L"Nodes";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::LightGray;
			this->label42->Location = System::Drawing::Point(42, 149);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(163, 23);
			this->label42->TabIndex = 29;
			this->label42->Text = L"And Stuck-at Faults:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::LightGray;
			this->label32->Location = System::Drawing::Point(42, 345);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(124, 23);
			this->label32->TabIndex = 28;
			this->label32->Text = L"For Simulation:";
			// 
			// GVFIMselected
			// 
			this->GVFIMselected->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->GVFIMselected->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->GVFIMselected->FlatAppearance->BorderSize = 3;
			this->GVFIMselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GVFIMselected->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GVFIMselected->ForeColor = System::Drawing::Color::LightGray;
			this->GVFIMselected->Location = System::Drawing::Point(172, 337);
			this->GVFIMselected->Name = L"GVFIMselected";
			this->GVFIMselected->Size = System::Drawing::Size(333, 41);
			this->GVFIMselected->TabIndex = 27;
			this->GVFIMselected->Text = L"GENERATE VERILOG FAULT INJECTED MODULE";
			this->GVFIMselected->UseVisualStyleBackColor = false;
			this->GVFIMselected->Click += gcnew System::EventHandler(this, &fileconv::GVFIMselected_Click);
			// 
			// NextSelectedfTrack
			// 
			this->NextSelectedfTrack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->NextSelectedfTrack->Enabled = false;
			this->NextSelectedfTrack->FlatAppearance->BorderColor = System::Drawing::Color::PowderBlue;
			this->NextSelectedfTrack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NextSelectedfTrack->ForeColor = System::Drawing::Color::LightGray;
			this->NextSelectedfTrack->Location = System::Drawing::Point(519, 423);
			this->NextSelectedfTrack->Name = L"NextSelectedfTrack";
			this->NextSelectedfTrack->Size = System::Drawing::Size(167, 35);
			this->NextSelectedfTrack->TabIndex = 24;
			this->NextSelectedfTrack->Text = L"NEXT>>";
			this->NextSelectedfTrack->UseVisualStyleBackColor = false;
			this->NextSelectedfTrack->Click += gcnew System::EventHandler(this, &fileconv::NextSelectedfTrack_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel15->Controls->Add(this->label36);
			this->panel15->Controls->Add(this->button14);
			this->panel15->Controls->Add(this->label37);
			this->panel15->Controls->Add(this->button23);
			this->panel15->Controls->Add(this->label38);
			this->panel15->Controls->Add(this->button26);
			this->panel15->Controls->Add(this->button27);
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(832, 40);
			this->panel15->TabIndex = 22;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label36->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::LightGray;
			this->label36->Location = System::Drawing::Point(456, 14);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(129, 20);
			this->label36->TabIndex = 14;
			this->label36->Text = L"FAULT INJECTION";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button14->Dock = System::Windows::Forms::DockStyle::Left;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::LightGray;
			this->button14->Location = System::Drawing::Point(621, 0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(213, 40);
			this->button14->TabIndex = 10;
			this->button14->Text = L"FAULT TRACKING";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label37->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::LightGray;
			this->label37->Location = System::Drawing::Point(251, 13);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(134, 20);
			this->label37->TabIndex = 19;
			this->label37->Text = L"FILE CONVERSION";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button23->Dock = System::Windows::Forms::DockStyle::Left;
			this->button23->Enabled = false;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::LightGray;
			this->button23->Location = System::Drawing::Point(414, 0);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(207, 40);
			this->button23->TabIndex = 9;
			this->button23->UseVisualStyleBackColor = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label38->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::LightGray;
			this->label38->Location = System::Drawing::Point(73, 14);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(53, 20);
			this->label38->TabIndex = 18;
			this->label38->Text = L"HOME";
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button26->Dock = System::Windows::Forms::DockStyle::Left;
			this->button26->Enabled = false;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::LightGray;
			this->button26->Location = System::Drawing::Point(207, 0);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(207, 40);
			this->button26->TabIndex = 8;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Dock = System::Windows::Forms::DockStyle::Left;
			this->button27->Enabled = false;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSkyBlue;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::LightGray;
			this->button27->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button27->Location = System::Drawing::Point(0, 0);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(207, 40);
			this->button27->TabIndex = 7;
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::LightCoral;
			this->button28->FlatAppearance->BorderSize = 2;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->ForeColor = System::Drawing::Color::LightGray;
			this->button28->Location = System::Drawing::Point(328, 423);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(167, 35);
			this->button28->TabIndex = 21;
			this->button28->Text = L"HOME";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &fileconv::button28_Click);
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->ShowSelectedTestVectors);
			this->panel16->Location = System::Drawing::Point(46, 188);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(731, 122);
			this->panel16->TabIndex = 18;
			// 
			// ShowSelectedTestVectors
			// 
			this->ShowSelectedTestVectors->BackColor = System::Drawing::Color::LightGray;
			this->ShowSelectedTestVectors->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ShowSelectedTestVectors->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ShowSelectedTestVectors->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowSelectedTestVectors->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ShowSelectedTestVectors->Location = System::Drawing::Point(0, 0);
			this->ShowSelectedTestVectors->Multiline = true;
			this->ShowSelectedTestVectors->Name = L"ShowSelectedTestVectors";
			this->ShowSelectedTestVectors->ReadOnly = true;
			this->ShowSelectedTestVectors->Size = System::Drawing::Size(731, 122);
			this->ShowSelectedTestVectors->TabIndex = 1;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::LightGray;
			this->label39->Location = System::Drawing::Point(42, 113);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(161, 23);
			this->label39->TabIndex = 20;
			this->label39->Text = L"For Selected Nodes:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::PowderBlue;
			this->label41->Location = System::Drawing::Point(252, 59);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(338, 30);
			this->label41->TabIndex = 16;
			this->label41->Text = L"OPTIMUM INPUT TEST VECTORS";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->ForeColor = System::Drawing::Color::LightGray;
			this->button29->Location = System::Drawing::Point(137, 423);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(167, 35);
			this->button29->TabIndex = 15;
			this->button29->Text = L"<<BACK";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &fileconv::button29_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog4";
			// 
			// openFileDialog5
			// 
			this->openFileDialog5->FileName = L"openFileDialog5";
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
			this->titlepnael->ResumeLayout(false);
			this->titlepnael->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
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
			//comseq->SelectedIndex = -1;
			ScanChainInsertButton->Enabled = true;
			progressBar1->Value = 0;
			progressBar2->Value = 0;
			showyosys->Text = sr->ReadToEnd();
			convgnet->Enabled = false;
			if (File::Exists(openFileDialog1->FileName)) {
				clear->Enabled = true;
				//comseq->Enabled = true;
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
		progressBar2->Value = 0;
		progressBar3->Value = 0;
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

		progressBar3->Value = 0;

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
		NextEachTrack->Enabled = false;
		NextEachTrack->Enabled = false;
		nextTVGButton->Enabled = false;
		//comseq->SelectedIndex = -1;
		next2->Enabled = false;
		P_func.clearfiles();
		pinodes->Text = "";
		testvector->Text = "";
		convgnet->Enabled = false;
		// comseq->Enabled = false;
		clear->Enabled = false;
		nextbutton->Enabled = false;
		showyosys->Text = "";
		gatenet->Text = "";
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		progressBar3->Value = 0;
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
			tabControl->SelectedTab = tabControl->TabPages[5];
			YOSYStxtBox->Text = "";
			YosysClearButton->Enabled = false;
			SavePathYosysButtom->Enabled = false;
			YosysModuleExporter->Enabled = false;
			LoadYosysButton->Enabled = true;
			OpenVerilogDesignButton->Enabled = false;
			yosysLabel->Visible = true;
		}
	}
	private: System::Void back1_Click(System::Object^ sender, System::EventArgs^ e) {
		showyosys->Text = "";
		gatenet->Text = "";
		ScanChainInsertButton->Enabled = false;
		nextbutton->Enabled = false;
		convgnet->Enabled = false;
		//comseq->Enabled = false;
		nextbutton->Enabled = false;
		Next2SelectedVectorButton->Enabled = false;
		Next2TVGtab->Enabled = false;
		clear->Enabled = false;
		//comseq->SelectedIndex = -1;
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[5];
		}
	}
	
	
	private: System::Void convgnet_Click(System::Object^ sender, System::EventArgs^ e) {
		convgnet->Enabled = false;
		progressBar2->Visible = true;
		//System::String^ selectedItem = comseq->SelectedItem->ToString();
		
		nextbutton->Enabled = true;
	
		System::String^ filepath = openFileDialog1->FileName;
		System::String^ inputVeilogFileDirec = System::IO::Path::GetDirectoryName(filepath);
		System::String^ inputVeilogFileName = System::IO::Path::GetFileName(filepath);
		ModuleTVGLabel->Text = inputVeilogFileName;
		moduleNameLabel->Text = inputVeilogFileName;
		SelectedModule->Text = inputVeilogFileName;
		CompareModule->Text = inputVeilogFileName;
		inputVeilogFileDirectory = "InsertedScanChainFile.v";

		//if (selectedItem == "Combinational") {
		//	inputVeilogFileDirectory = msclr::interop::marshal_as<std::string>(inputVeilogFileDirec + "/" + inputVeilogFileName);			
		//}
		//else if (selectedItem == "Sequential") {
		//	inputVeilogFileDirectory = "InsertedScanChainFile.v";			
		//}		

		// Initialize the ProgressBar properties
		progressBar2->Cursor = Cursors::WaitCursor;
		progressBar2->Minimum = 0;
		progressBar2->Maximum = 100;
		progressBar2->Value = 5;

		// Create a BackgroundWorker for scanChainInsertion
		BackgroundWorker^ worker2 = gcnew BackgroundWorker();
		worker2->WorkerReportsProgress = true;

		// Attach event handlers
		worker2->DoWork += gcnew DoWorkEventHandler(this, &fileconv::task2_DoWork);
		worker2->ProgressChanged += gcnew ProgressChangedEventHandler(this, &fileconv::task2_ProgressChanged);
		worker2->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &fileconv::task2_RunWorkerCompleted);

		// Start the BackgroundWorker
		worker2->RunWorkerAsync();

		//VeriToText();

	
	}

	private: System::Void task2_DoWork(System::Object^ sender, DoWorkEventArgs^ e) {
		BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);

		VeriToText();
		worker->ReportProgress(100);

	}
	private: System::Void task2_ProgressChanged(System::Object^ sender, ProgressChangedEventArgs^ e) {
		// Update the ProgressBar value when progress changes
		progressBar2->Value = e->ProgressPercentage;
	}
	private: System::Void task2_RunWorkerCompleted(System::Object^ sender, RunWorkerCompletedEventArgs^ e) {
		//MessageBox::Show("Scan Chain Insertion complete!");

		String^ appDirectory = Application::StartupPath;
		String^ fileName3 = "Circuit.txt";
		String^ filePath3 = System::IO::Path::Combine(appDirectory, fileName3);
		String^ fileContents3 = System::IO::File::ReadAllText(filePath3);
		gatenet->Text = fileContents3;
		showyosys->Text = fileContents3;
		gatetext->Text = fileContents3;
		AllTextVectorTextBox->Text = fileContents3;

		finalNodeNumberLabel->Text = System::Convert::ToString("CHOOSE A NODE BETWEEN 1 AND " + finalSignalNumber + "\n TO INJECT STUCK-AT FAULT: ");
		SelectedTestVectorLable->Text = System::Convert::ToString("CHOOSE A NODE BETWEEN 1 AND " + finalSignalNumber + "\n TO INJECT STUCK-AT FAULT: ");

		Next2SelectedVectorButton->Enabled = true;
		convgnet->Enabled = false;
		Next2TVGtab->Enabled = true;
	}

	private: System::Void stkat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		next2->Enabled = false;
		progressBar3->Value = 0;

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
		//comseq->SelectedIndex = -1;
		nextbutton->Enabled = false;
		convgnet->Enabled = false;
		//comseq->Enabled = false;
		clear->Enabled = false;
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		ScanChainInsertButton->Enabled = false;
		Next2SelectedVectorButton->Enabled = false;
		Next2TVGtab->Enabled = false;
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
		podem_action->Enabled = false;
		podemprogress->ForeColor = System::Drawing::Color::PowderBlue;

		int result = 0;
		int check = 1;
		int flag = 1;

		flag = P_func.readFile();
		Fault.nodeNumber = System::Convert::ToInt64(faultnode->Text);
		Fault.nodeValue = System::Convert::ToInt64(stkat->Text);
		
		// Initialize the ProgressBar properties
		progressBar3->Cursor = Cursors::WaitCursor;
		progressBar3->Minimum = 0;
		progressBar3->Maximum = 100;
		progressBar3->Value = 50;

		// Create a BackgroundWorker for scanChainInsertion
		BackgroundWorker^ worker3 = gcnew BackgroundWorker();
		worker3->WorkerReportsProgress = true;

		// Attach event handlers
		worker3->DoWork += gcnew DoWorkEventHandler(this, &fileconv::task3_DoWork);
		worker3->ProgressChanged += gcnew ProgressChangedEventHandler(this, &fileconv::task3_ProgressChanged);
		worker3->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &fileconv::task3_RunWorkerCompleted);

		// Start the BackgroundWorker
		worker3->RunWorkerAsync();

		while (check == 1) {
			
			P_func.setX();
			P_func.PODEM();

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

				if (stkat->Text == "0")
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
				
	}
	private: System::Void task3_DoWork(System::Object^ sender, DoWorkEventArgs^ e) {
		BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);
		
		worker->ReportProgress(100);
	}
	private: System::Void task3_ProgressChanged(System::Object^ sender, ProgressChangedEventArgs^ e) {
		// Update the ProgressBar value when progress changes
		progressBar3->Value = e->ProgressPercentage;
	}
	private: System::Void task3_RunWorkerCompleted(System::Object^ sender, RunWorkerCompletedEventArgs^ e) {
		//MessageBox::Show("Scan Chain Insertion complete!");
		progressBar3->Cursor = Cursors::Arrow;
		
		if (progressBar3->Value == 100) {
			podem_action->Enabled = false;
			next2->Enabled = true;
		}	

	}
	private: System::Void ScanChainInsertButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScanChainInsertButton->Enabled = false;
		progressBar2->Visible = false;
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
		BackgroundWorker^ worker1 = gcnew BackgroundWorker();
		worker1->WorkerReportsProgress = true;

		// Attach event handlers
		worker1->DoWork += gcnew DoWorkEventHandler(this, &fileconv::task1_DoWork);
		worker1->ProgressChanged += gcnew ProgressChangedEventHandler(this, &fileconv::task1_ProgressChanged);
		worker1->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &fileconv::task1_RunWorkerCompleted);

		// Start the BackgroundWorker
		worker1->RunWorkerAsync();

		//scanChainInsertion();
				
	}
	private: System::Void task1_DoWork(System::Object^ sender, DoWorkEventArgs^ e) {
		BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);

		// Call the scanChainInsertion function from header file
		scanChainInsertion();

		// report progress 
		worker->ReportProgress(100);
	}
	private: System::Void task1_ProgressChanged(System::Object^ sender, ProgressChangedEventArgs^ e) {
		// Update the ProgressBar value when progress changes
		progressBar1->Value = e->ProgressPercentage;
	}
	private: System::Void task1_RunWorkerCompleted(System::Object^ sender, RunWorkerCompletedEventArgs^ e) {
		//MessageBox::Show("Scan Chain Insertion complete!");
		
		convgnet->Enabled = true;
		ScanChainInsertButton->Enabled = false;
		progressBar1->Cursor = Cursors::Arrow;
		
		String^ appDirectory = Application::StartupPath;
		String^ fileName5 = "InsertedScanChainFile.v";
		String^ filePath5 = System::IO::Path::Combine(appDirectory, fileName5);
		String^ fileContents5 = System::IO::File::ReadAllText(filePath5);
		AllTextVectorTextBox->Text = fileContents5;
		showyosys->Text = fileContents5;

	}

	private: System::Void userManualLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://sites.google.com/view/faulttrackingframework/home");
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://sites.google.com/view/faulttrackingframework/home");
	}
	private: System::Void O_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://yosyshq.net/yosys/");
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://yosyshq.net/yosys/");
	}
	private: System::Void testPatternForAll_Click(System::Object^ sender, System::EventArgs^ e) {
		//std::ostringstream allTestVectorFile;
		System::String^ allTestVectorFile;

		int result = 0;
		int check = 1;
		int flag = 1;

		
		for (size_t nodeNumber1 = 1; nodeNumber1 <= 10; nodeNumber1++) {
			P_func.readFile();
			Fault.nodeNumber = nodeNumber1;
			Fault.nodeValue = 1;
			//Fault.nodeNumber = 12;
			//Fault.nodeValue = 1;
			
			P_func.setX();
			P_func.PODEM();
			System::String^ tempoerytext = msclr::interop::marshal_as<System::String^>(inputVectorText);
			allTestVectorFile += tempoerytext + " " + Fault.nodeNumber + "\n";
			//allTestVectorFile = msclr::interop::marshal_as<System::String^>(inputVectorText);
			
			//PINodes.clear();
			//PONodes.clear();
			
			status = 0;
			
			//P_func.clearfiles();
		}
		AllTextVectorTextBox->Text = allTestVectorFile;


	}
	private: System::Void LoadYosysButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				System::String^ yosystoolpath = openFileDialog2->FileName;
				importYosysToolTemp = msclr::interop::marshal_as<std::string>(yosystoolpath);
				YOSYStxtBox->Text = "YOSYS Tool Loaded from: " + yosystoolpath;
				SavePathYosysButtom->Enabled = true;
				//OpenVerilogDesignButton->Enabled = true;
				YosysClearButton->Enabled = true;
				yosysLabel->Visible = false;
				LoadYosysButton->Enabled = false;
				
		}
	}

	private: System::Void OpenVerilogDesignButton_Click(System::Object^ sender, System::EventArgs^ e) {

		txtOutput.clear();
		YOSYStxtBox->Text = "";
		if (openFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ verilogModulePathTemp = openFileDialog3->FileName;
			VerilogModulePath = msclr::interop::marshal_as<std::string>(verilogModulePathTemp);
			YOSYStxtBox->Text = YOSYStxtBox->Text + "\nRISC-V Processor Module Loaded from: " + verilogModulePathTemp;
			YosysModuleExporter->Enabled = true;
		}
	}
	private: System::Void YosysModuleExporter_Click(System::Object^ sender, System::EventArgs^ e) {
		YosysModuleExporter->Enabled = false;
		YosysModuleExporter1();
		YOSYStxtBox->Text = msclr::interop::marshal_as<System::String^>(txtOutput);
	}
	private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://yosyshq.net/yosys/");
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://yosyshq.net/yosys/");
	}
	private: System::Void SavePathYosysButtom_Click(System::Object^ sender, System::EventArgs^ e) {
			
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ selectedFolderTemp = folderBrowserDialog1->SelectedPath;
			selectedFolder = msclr::interop::marshal_as<std::string>(selectedFolderTemp);
			SavePathYosysButtom->Enabled = false;
			YosysModuleExporter->Enabled = true;
			OpenVerilogDesignButton->Enabled = true;
			YOSYStxtBox->Text = YOSYStxtBox->Text + "\nYOSYS Converted Netlist Modules will be Exported to: " + selectedFolderTemp;
		}
	}
	private: System::Void YosysBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[0];
		}
		YOSYStxtBox->Text = "";
		YosysClearButton->Enabled = false;
		SavePathYosysButtom->Enabled = false;
		YosysModuleExporter->Enabled = false;
		LoadYosysButton->Enabled = true;
		OpenVerilogDesignButton->Enabled = false;
	}
	private: System::Void YosysNextButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[1];
		}
	}
	private: System::Void YosysClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		YOSYStxtBox->Text = "";
		YosysClearButton->Enabled = false;
		SavePathYosysButtom->Enabled = false;
		YosysModuleExporter->Enabled = false;
		LoadYosysButton->Enabled = true;
		OpenVerilogDesignButton->Enabled = false;
		yosysLabel->Visible = true;
	}
	private: System::Void FindNodes_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ filepathfn = openFileDialog1->FileName;
		System::String^ inputVeriFile = System::IO::Path::GetDirectoryName(filepathfn);
		System::String^ inputVeriFileName = System::IO::Path::GetFileName(filepathfn);
		inputYosysFile = msclr::interop::marshal_as<std::string>(inputVeriFileName);;
		ModuleTVGLabel->Text = inputVeriFileName;

		faultNodesVectorGeneration();

		String^ appDirectory = Application::StartupPath;
		String^ fileName6 = "faultnodestempory.txt";
		String^ filePath6 = System::IO::Path::Combine(appDirectory, fileName6);
		String^ fileContents6 = System::IO::File::ReadAllText(filePath6);
		AllTextVectorTextBox->Text = fileContents6;
		
		generateTestVectorsButton->Enabled = true;
		FindNodes->Enabled = false;
		button13->Enabled = true;


	}
	private: System::Void generateTestVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		clearfilesSelectedGenerateTestVector();
		P_func.clearfiles();

		TestVectorsGen();
		
		String^ appDirectory = Application::StartupPath;
		String^ fileName7 = "TestVectors.txt";
		String^ filePath7 = System::IO::Path::Combine(appDirectory, fileName7);
		String^ fileContents7 = System::IO::File::ReadAllText(filePath7);
		AllTextVectorTextBox->Text = fileContents7;

		saveTestVectors->Enabled = false;
		button13->Enabled = true;
		generateTestVectorsButton->Enabled = false;
		OptimumTestVectorButton->Enabled = true;
	}
	private: System::Void saveTestVectors_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		String^ appDirectory = Application::StartupPath;
		String^ fileName8 = "OptimumTestVectors.txt";
		String^ filePath8 = System::IO::Path::Combine(appDirectory, fileName8);
		String^ fileContents8 = System::IO::File::ReadAllText(filePath8);

		
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text Files|*.txt";
		saveFileDialog1->Title = "Save Text File";

		saveTestVectors->Enabled = false;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Get the user-selected destination file
			String^ destinationFilePath = saveFileDialog1->FileName;

			// Write the content to the selected destination file
			File::WriteAllText(destinationFilePath, fileContents8);
		}
	}
	private: System::Void backTVGButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		DeleteTextfiles();
		P_func.clearfiles();

		GVFIMAll->Enabled = false;
		AllTextVectorTextBox->Text = "";
		convgnet->Enabled = false;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		progressBar3->Value = 0;
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[1];
			generateTestVectorsButton->Enabled = false;
			saveTestVectors->Enabled = false;
			nextTVGButton->Enabled = false;
			OptimumTestVectorButton->Enabled = false;

		}

	}
	private: System::Void nextTVGButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		DeleteTextfiles();
		P_func.clearfiles();

		GVFIMAll->Enabled = false;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[6];
			generateTestVectorsButton->Enabled = false;
			saveTestVectors->Enabled = false;
			nextTVGButton->Enabled = false;
			OptimumTestVectorButton->Enabled = false;
		}
	}
	private: System::Void Next2TVGtab_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ appDirectory = Application::StartupPath;
		String^ fileName8 = "InsertedScanChainFile.v";
		String^ filePath8 = System::IO::Path::Combine(appDirectory, fileName8);
		String^ fileContents8 = System::IO::File::ReadAllText(filePath8);
		AllTextVectorTextBox->Text = fileContents8;
		
		AllTextVectorTextBox->Text = "";
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[4];
			generateTestVectorsButton->Enabled = false;
			saveTestVectors->Enabled = false;
			nextTVGButton->Enabled = false;
			FindNodes->Enabled = true;
			OptimumTestVectorButton->Enabled = false;
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		DeleteTextfiles();
		P_func.clearfiles();

		GVFIMAll->Enabled = false;
		AllTextVectorTextBox->Text = "";
		button13->Enabled = false;
		FindNodes->Enabled = true;
		generateTestVectorsButton->Enabled = false;
		saveTestVectors->Enabled = false;
		nextTVGButton->Enabled = false;
		OptimumTestVectorButton->Enabled = false;
	}
	private: System::Void simulateBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[4];
			generateTestVectorsButton->Enabled = false;
			saveTestVectors->Enabled = false;
			nextTVGButton->Enabled = false;
			FindNodes->Enabled = true;
		}
	}
	private: System::Void OptimumTestVectorButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		P_func.clearfiles();
		
		FindOptimumVector();

		OptimumTestVectorButton->Enabled = false;
		saveTestVectors->Enabled = true;
		GVFIMAll->Enabled = true;

		String^ appDirectory = Application::StartupPath;
		String^ fileName9 = "OptimumTestVectors.txt";
		String^ filePath9 = System::IO::Path::Combine(appDirectory, fileName9);
		String^ fileContents9 = System::IO::File::ReadAllText(filePath9);
		AllTextVectorTextBox->Text = fileContents9;
	}

	private: System::Void GenerateSelectedVectorsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		P_func.clearfiles();
		String^ inputSelctedNodes = SelectingFaultyNodetxt->Text;
		std::string inputSelctedNodesStr = msclr::interop::marshal_as<std::string>(inputSelctedNodes);
		
		std::istringstream inputStream1(inputSelctedNodesStr);
		std::ofstream outputFile1("selectedfaultnodes.txt");
		
		if (outputFile1.is_open()) {
			std::string number1;
			while (std::getline(inputStream1, number1, ',')) {
				try {
					int num = std::stoi(number1);
					outputFile1 << num << std::endl;
				}
				catch (std::invalid_argument&) {

					return;
				}
			}

			outputFile1.close();
		}



		String^ inputSelctedSTKfaults = SelectingSTKtxt->Text;
		std::string inputSelctedSTKfaultsStr = msclr::interop::marshal_as<std::string>(inputSelctedSTKfaults);

		std::istringstream inputStream2(inputSelctedSTKfaultsStr);
		std::ofstream outputFile2("selectedSTKfaults.txt");

		if (outputFile2.is_open()) {
			std::string number2;
			while (std::getline(inputStream2, number2, ',')) {
				try {
					int num = std::stoi(number2);
					outputFile2 << num << std::endl;
				}
				catch (std::invalid_argument&) {

					return;
				}
			}

			outputFile2.close();
		}


		TestVectorsGenSelected();

		FindOptimumVector();

		
		String^ appDirectory = Application::StartupPath;
		String^ fileName10 = "OptimumTestVectors.txt";
		String^ filePath10 = System::IO::Path::Combine(appDirectory, fileName10);
		String^ fileContents10 = System::IO::File::ReadAllText(filePath10);
		ShowSelectedTestVectors->Text = fileContents10;

		SelectedNodesLabel->Text = SelectingFaultyNodetxt->Text;
		SewlectedFaultsLabel->Text = SelectingSTKtxt->Text;


		NextSelectedVecBUtt->Enabled = true;
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectingFaultyNodetxt->Text = "";
		SelectingSTKtxt->Text = "";
		//comseq->SelectedIndex = -1;
		convgnet->Enabled = false;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		progressBar3->Value = 0;
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[1];
		}
	}
	private: System::Void Next2SelectedVectorButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[7];
		}
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		clearfilesSelectedGenerateTestVector();
		DeleteTextfiles();
		P_func.clearfiles();

		NextSelectedVecBUtt->Enabled = false;
		next2->Enabled = false;
		
		
		ShowSelectedTestVectors->Text = "";

		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[7];
		}
	}
	private: System::Void NextSelectedVecBUtt_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[8];
		}
	}
	private: System::Void NextSelectedfTrack_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[6];
			
		}
	}
	private: System::Void NextEachTrack_Click(System::Object^ sender, System::EventArgs^ e) {
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[6];

		}
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		faultnode->Text = "";
		errlabel->Visible = false;
		NextEachTrack->Enabled = false;
		NextEachTrack->Enabled = false;
		nextTVGButton->Enabled = false;
		stkat->SelectedIndex = -1;
		//comseq->SelectedIndex = -1;
		next2->Enabled = false;
		P_func.clearfiles();
		pinodes->Text = "";
		testvector->Text = "";
		convgnet->Enabled = false;
		// comseq->Enabled = false;
		clear->Enabled = false;
		nextbutton->Enabled = false;
		showyosys->Text = "";
		gatenet->Text = "";
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		progressBar3->Value = 0;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[0];
		}
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		faultnode->Text = "";
		errlabel->Visible = false;
		stkat->SelectedIndex = -1;
		NextEachTrack->Enabled = false;
		NextEachTrack->Enabled = false;
		nextTVGButton->Enabled = false;
		//comseq->SelectedIndex = -1;
		next2->Enabled = false;
		P_func.clearfiles();
		pinodes->Text = "";
		testvector->Text = "";
		convgnet->Enabled = false;
		// comseq->Enabled = false;
		clear->Enabled = false;
		nextbutton->Enabled = false;
		showyosys->Text = "";
		gatenet->Text = "";
		progressBar1->Value = 0;
		progressBar2->Value = 0;
		progressBar3->Value = 0;
		TabControl^ tabControl = dynamic_cast<TabControl^>(Controls["tabControl1"]);
		if (tabControl != nullptr) {
			tabControl->SelectedTab = tabControl->TabPages[0];
		}
	}
	private: System::Void GVFIMselected_Click(System::Object^ sender, System::EventArgs^ e) {
		NextEachTrack->Enabled = true;
		NextSelectedfTrack->Enabled = true;
		nextTVGButton->Enabled = true;
	}
	private: System::Void GVFIMselectedEach_Click(System::Object^ sender, System::EventArgs^ e) {
		NextEachTrack->Enabled = true;
		NextSelectedfTrack->Enabled = true;
		nextTVGButton->Enabled = true;
	}
	private: System::Void GVFIMAll_Click(System::Object^ sender, System::EventArgs^ e) {
		nextTVGButton->Enabled = true;
		NextSelectedfTrack->Enabled = true;
		NextEachTrack->Enabled = true;

		GenerateVerilogFaultyModule();
		GVFIMAll->Enabled = false;
	}
	private: System::Void OpenOutputFFree_Click(System::Object^ sender, System::EventArgs^ e) {

		if (openFileDialog4->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ OutputFFreeTexttemp = openFileDialog4->FileName;
			System::String^ OutputFFreeTextName = System::IO::Path::GetFileName(OutputFFreeTexttemp);
			faultfreefile = msclr::interop::marshal_as<std::string>(OutputFFreeTexttemp);
			OutptFFreeName->Text = OutputFFreeTextName;
			checkfiles = 1;
			if (checkfiles2 == 1) {
				CompareButton->Enabled = true;
			}
		}
	}
	private: System::Void OpenOutputF_Click(System::Object^ sender, System::EventArgs^ e) {

		if (openFileDialog5->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ OutputFTexttemp = openFileDialog5->FileName;
			System::String^ OutputFTextName = System::IO::Path::GetFileName(OutputFTexttemp);
			faultyfile = msclr::interop::marshal_as<std::string>(OutputFTexttemp);
			OutputFName->Text = OutputFTextName;
			checkfiles2 = 1;
			if (checkfiles == 1) {
				CompareButton->Enabled = true;
			}
		}
	}
	private: System::Void CompareButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		CompareModules();
		checkfiles = 0;
		checkfiles2 = 0;
		if (faultDetectResult == 1) {
			CompareDetection-> Text = "FAULT DETECTED!";
		}
		else if (faultDetectResult == 2) {
			CompareDetection->Text = "FAULT-FREE MODULE!";
		}
		CompareButton->Enabled = false;
	}
	private: System::Void EDAPalyground_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://edaplayground.com/home");
	}
	private: System::Void SampleDirectory_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://edaplayground.com/x/XbuX");
	}
};
}
