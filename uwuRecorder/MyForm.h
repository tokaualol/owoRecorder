#pragma once
#include "recorder.h"
#include <msclr/marshal_cppstd.h>
#include "fstream"

namespace uwuRecorder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Point currentMousePos;
	public:
		MyForm(void)
		{
			InitializeComponent();
			hotkey_check->RunWorkerAsync();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ recorder_panel;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ export_clicks;
	private: System::Windows::Forms::Button^ import_clicks;
	private: System::Windows::Forms::CheckBox^ replay_toggle_smartmode;
	private: System::Windows::Forms::CheckBox^ replay_toggle_shift;
	private: System::Windows::Forms::Panel^ multiplier_bot_panel;
	private: System::Windows::Forms::Panel^ multiplier_top_panel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ toggle_replay;
	private: System::Windows::Forms::CheckBox^ toggle_record;

	private: System::Windows::Forms::Panel^ header;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ exit;

	private: System::ComponentModel::BackgroundWorker^ record_worker;
	private: System::ComponentModel::BackgroundWorker^ replay_worker;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::SaveFileDialog^ sfd;
	private: System::Windows::Forms::CheckBox^ toggle_break_blocks;




	private: System::Windows::Forms::Button^ replay_bind;
	private: System::Windows::Forms::Button^ record_bind;
	private: System::ComponentModel::BackgroundWorker^ hotkey_check;
	private: System::Windows::Forms::PictureBox^ pictureBox2;






	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->recorder_panel = (gcnew System::Windows::Forms::Panel());
			this->import_clicks = (gcnew System::Windows::Forms::Button());
			this->replay_bind = (gcnew System::Windows::Forms::Button());
			this->record_bind = (gcnew System::Windows::Forms::Button());
			this->toggle_break_blocks = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->export_clicks = (gcnew System::Windows::Forms::Button());
			this->replay_toggle_smartmode = (gcnew System::Windows::Forms::CheckBox());
			this->replay_toggle_shift = (gcnew System::Windows::Forms::CheckBox());
			this->multiplier_bot_panel = (gcnew System::Windows::Forms::Panel());
			this->multiplier_top_panel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->toggle_replay = (gcnew System::Windows::Forms::CheckBox());
			this->toggle_record = (gcnew System::Windows::Forms::CheckBox());
			this->header = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->record_worker = (gcnew System::ComponentModel::BackgroundWorker());
			this->replay_worker = (gcnew System::ComponentModel::BackgroundWorker());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfd = (gcnew System::Windows::Forms::SaveFileDialog());
			this->hotkey_check = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->recorder_panel->SuspendLayout();
			this->multiplier_bot_panel->SuspendLayout();
			this->header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// recorder_panel
			// 
			this->recorder_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->recorder_panel->Controls->Add(this->pictureBox2);
			this->recorder_panel->Controls->Add(this->import_clicks);
			this->recorder_panel->Controls->Add(this->replay_bind);
			this->recorder_panel->Controls->Add(this->record_bind);
			this->recorder_panel->Controls->Add(this->toggle_break_blocks);
			this->recorder_panel->Controls->Add(this->label9);
			this->recorder_panel->Controls->Add(this->label8);
			this->recorder_panel->Controls->Add(this->export_clicks);
			this->recorder_panel->Controls->Add(this->replay_toggle_smartmode);
			this->recorder_panel->Controls->Add(this->replay_toggle_shift);
			this->recorder_panel->Controls->Add(this->multiplier_bot_panel);
			this->recorder_panel->Controls->Add(this->label7);
			this->recorder_panel->Controls->Add(this->toggle_replay);
			this->recorder_panel->Controls->Add(this->toggle_record);
			this->recorder_panel->Location = System::Drawing::Point(0, 42);
			this->recorder_panel->Name = L"recorder_panel";
			this->recorder_panel->Size = System::Drawing::Size(245, 288);
			this->recorder_panel->TabIndex = 6;
			this->recorder_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::recorder_panel_Paint);
			// 
			// import_clicks
			// 
			this->import_clicks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->import_clicks->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->import_clicks->FlatAppearance->BorderSize = 2;
			this->import_clicks->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->import_clicks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->import_clicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->import_clicks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->import_clicks->Location = System::Drawing::Point(13, 249);
			this->import_clicks->Name = L"import_clicks";
			this->import_clicks->Size = System::Drawing::Size(220, 30);
			this->import_clicks->TabIndex = 9;
			this->import_clicks->Text = L"Import Clicks";
			this->import_clicks->UseVisualStyleBackColor = false;
			this->import_clicks->Click += gcnew System::EventHandler(this, &MyForm::import_clicks_Click);
			// 
			// replay_bind
			// 
			this->replay_bind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->replay_bind->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->replay_bind->FlatAppearance->BorderSize = 2;
			this->replay_bind->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->replay_bind->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->replay_bind->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->replay_bind->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->replay_bind->Location = System::Drawing::Point(194, 104);
			this->replay_bind->Name = L"replay_bind";
			this->replay_bind->Size = System::Drawing::Size(52, 27);
			this->replay_bind->TabIndex = 31;
			this->replay_bind->Text = L"[ bind ]";
			this->replay_bind->UseVisualStyleBackColor = false;
			this->replay_bind->Click += gcnew System::EventHandler(this, &MyForm::replay_bind_Click);
			this->replay_bind->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::replay_bind_KeyPress);
			// 
			// record_bind
			// 
			this->record_bind->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->record_bind->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->record_bind->FlatAppearance->BorderSize = 2;
			this->record_bind->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->record_bind->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->record_bind->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->record_bind->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->record_bind->Location = System::Drawing::Point(194, 3);
			this->record_bind->Name = L"record_bind";
			this->record_bind->Size = System::Drawing::Size(52, 27);
			this->record_bind->TabIndex = 30;
			this->record_bind->Text = L"[ bind ]";
			this->record_bind->UseVisualStyleBackColor = false;
			this->record_bind->Click += gcnew System::EventHandler(this, &MyForm::record_bind_Click);
			this->record_bind->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::record_bind_KeyPress);
			// 
			// toggle_break_blocks
			// 
			this->toggle_break_blocks->AutoSize = true;
			this->toggle_break_blocks->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->toggle_break_blocks->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->toggle_break_blocks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toggle_break_blocks->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toggle_break_blocks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggle_break_blocks->Location = System::Drawing::Point(14, 223);
			this->toggle_break_blocks->Name = L"toggle_break_blocks";
			this->toggle_break_blocks->Size = System::Drawing::Size(96, 21);
			this->toggle_break_blocks->TabIndex = 29;
			this->toggle_break_blocks->Text = L"Break Blocks";
			this->toggle_break_blocks->UseVisualStyleBackColor = true;
			this->toggle_break_blocks->CheckedChanged += gcnew System::EventHandler(this, &MyForm::toggle_break_blocks_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Location = System::Drawing::Point(10, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Clicks Recorded: 0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Location = System::Drawing::Point(10, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Status: Paused";
			// 
			// export_clicks
			// 
			this->export_clicks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->export_clicks->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->export_clicks->FlatAppearance->BorderSize = 2;
			this->export_clicks->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->export_clicks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->export_clicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->export_clicks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->export_clicks->Location = System::Drawing::Point(13, 70);
			this->export_clicks->Name = L"export_clicks";
			this->export_clicks->Size = System::Drawing::Size(220, 30);
			this->export_clicks->TabIndex = 26;
			this->export_clicks->Text = L"Export Clicks";
			this->export_clicks->UseVisualStyleBackColor = false;
			this->export_clicks->Click += gcnew System::EventHandler(this, &MyForm::export_clicks_Click);
			// 
			// replay_toggle_smartmode
			// 
			this->replay_toggle_smartmode->AutoSize = true;
			this->replay_toggle_smartmode->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->replay_toggle_smartmode->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->replay_toggle_smartmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->replay_toggle_smartmode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->replay_toggle_smartmode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->replay_toggle_smartmode->Location = System::Drawing::Point(14, 196);
			this->replay_toggle_smartmode->Name = L"replay_toggle_smartmode";
			this->replay_toggle_smartmode->Size = System::Drawing::Size(97, 21);
			this->replay_toggle_smartmode->TabIndex = 25;
			this->replay_toggle_smartmode->Text = L"Smart Mode";
			this->replay_toggle_smartmode->UseVisualStyleBackColor = true;
			this->replay_toggle_smartmode->CheckedChanged += gcnew System::EventHandler(this, &MyForm::replay_toggle_smartmode_CheckedChanged);
			// 
			// replay_toggle_shift
			// 
			this->replay_toggle_shift->AutoSize = true;
			this->replay_toggle_shift->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->replay_toggle_shift->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->replay_toggle_shift->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->replay_toggle_shift->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->replay_toggle_shift->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->replay_toggle_shift->Location = System::Drawing::Point(14, 169);
			this->replay_toggle_shift->Name = L"replay_toggle_shift";
			this->replay_toggle_shift->Size = System::Drawing::Size(117, 21);
			this->replay_toggle_shift->TabIndex = 24;
			this->replay_toggle_shift->Text = L"Disable On Shift";
			this->replay_toggle_shift->UseVisualStyleBackColor = true;
			this->replay_toggle_shift->CheckedChanged += gcnew System::EventHandler(this, &MyForm::replay_toggle_shift_CheckedChanged);
			// 
			// multiplier_bot_panel
			// 
			this->multiplier_bot_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->multiplier_bot_panel->Controls->Add(this->multiplier_top_panel);
			this->multiplier_bot_panel->Location = System::Drawing::Point(13, 151);
			this->multiplier_bot_panel->Name = L"multiplier_bot_panel";
			this->multiplier_bot_panel->Size = System::Drawing::Size(220, 12);
			this->multiplier_bot_panel->TabIndex = 23;
			this->multiplier_bot_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::multiplier_bot_panel_MouseMove);
			// 
			// multiplier_top_panel
			// 
			this->multiplier_top_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->multiplier_top_panel->Location = System::Drawing::Point(0, 0);
			this->multiplier_top_panel->Name = L"multiplier_top_panel";
			this->multiplier_top_panel->Size = System::Drawing::Size(10, 15);
			this->multiplier_top_panel->TabIndex = 7;
			this->multiplier_top_panel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::multiplier_top_panel_MouseMove);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Location = System::Drawing::Point(13, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Multiplier: 1x";
			// 
			// toggle_replay
			// 
			this->toggle_replay->AutoSize = true;
			this->toggle_replay->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->toggle_replay->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->toggle_replay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toggle_replay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toggle_replay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggle_replay->Location = System::Drawing::Point(13, 106);
			this->toggle_replay->Name = L"toggle_replay";
			this->toggle_replay->Size = System::Drawing::Size(65, 21);
			this->toggle_replay->TabIndex = 19;
			this->toggle_replay->Text = L"Replay";
			this->toggle_replay->UseVisualStyleBackColor = true;
			this->toggle_replay->CheckedChanged += gcnew System::EventHandler(this, &MyForm::toggle_replay_CheckedChanged);
			// 
			// toggle_record
			// 
			this->toggle_record->AutoSize = true;
			this->toggle_record->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->toggle_record->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->toggle_record->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toggle_record->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toggle_record->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toggle_record->Location = System::Drawing::Point(10, 5);
			this->toggle_record->Name = L"toggle_record";
			this->toggle_record->Size = System::Drawing::Size(66, 21);
			this->toggle_record->TabIndex = 18;
			this->toggle_record->Text = L"Record";
			this->toggle_record->UseVisualStyleBackColor = true;
			this->toggle_record->CheckedChanged += gcnew System::EventHandler(this, &MyForm::toggle_record_CheckedChanged);
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->header->Controls->Add(this->logo);
			this->header->Controls->Add(this->exit);
			this->header->Location = System::Drawing::Point(0, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(245, 40);
			this->header->TabIndex = 7;
			this->header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::header_MouseDown);
			this->header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::header_MouseMove);
			// 
			// logo
			// 
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logo->Location = System::Drawing::Point(11, 8);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(60, 24);
			this->logo->TabIndex = 3;
			this->logo->TabStop = false;
			this->logo->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::header_MouseDown);
			this->logo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::header_MouseMove);
			// 
			// exit
			// 
			this->exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.BackgroundImage")));
			this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Location = System::Drawing::Point(218, 13);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(15, 15);
			this->exit->TabIndex = 2;
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// record_worker
			// 
			this->record_worker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::record_worker_DoWork);
			// 
			// replay_worker
			// 
			this->replay_worker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::replay_worker_DoWork);
			// 
			// hotkey_check
			// 
			this->hotkey_check->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::hotkey_check_DoWork);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(137, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 63);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->ClientSize = System::Drawing::Size(245, 330);
			this->Controls->Add(this->header);
			this->Controls->Add(this->recorder_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"owoRecorder";
			this->recorder_panel->ResumeLayout(false);
			this->recorder_panel->PerformLayout();
			this->multiplier_bot_panel->ResumeLayout(false);
			this->header->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void header_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		currentMousePos = Point(e->X, e->Y);
	}
	private: System::Void header_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {

			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - currentMousePos.X, currentScreenPos.Y - currentMousePos.Y);
		}
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void toggle_record_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toggle_record->Checked) {
			toggle_replay->Checked = false;
			Recorder::do_replay_clicks = false;

			Recorder::recorded_clicks = {};

			Recorder::num_clicks = 0;

			Recorder::do_record_clicks = true;
			if (!(record_worker->IsBusy)) {
				record_worker->RunWorkerAsync();
			}
		}
		else {
			Recorder::do_record_clicks = false;
		}
	}
	private: System::Void record_worker_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		while (Recorder::do_record_clicks) {
			Recorder::record_clicks();
			label9->Text = "Clicks Recorded: " + System::Convert::ToString(Recorder::num_clicks);

			if (!Recorder::recording && label8->Text != "Status: Paused") {
				label8->Text = "Status: Paused";
			}
			else if (Recorder::recording && label8->Text != "Status: Recording") {
				label8->Text = "Status: Recording";
			}
		}
	}
	private: System::Void toggle_replay_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toggle_replay->Checked) {
			if (Recorder::imported_clicks.size() > 0) {
				Recorder::do_record_clicks = false;
				toggle_record->Checked = false;
				Recorder::do_replay_clicks = true;

				if (!replay_worker->IsBusy) {
					replay_worker->RunWorkerAsync();
				}
			}
			else {
				MessageBox::Show("owo u forgot to import clicks", "^w^", MessageBoxButtons::OK, MessageBoxIcon::Error); // lol
				toggle_replay->Checked = false;
			}
		}
		else {
			Recorder::do_replay_clicks = false;
		}
	}
	private: System::Void replay_worker_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		Recorder::replay_clicks();
	}
	private: System::Void export_clicks_Click(System::Object^ sender, System::EventArgs^ e) {
		std::fstream file;
		sfd->Filter = "owo | *.owo";

		Recorder::do_record_clicks = false;
		toggle_record->Checked = false;

		std::string suffix = "";

		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string export_path = msclr::interop::marshal_as< std::string >(sfd->FileName);

			file.open(export_path, std::ios::out);
			if (file.is_open() && (Recorder::recorded_clicks.size() > 0)) {

				for (auto& x : Recorder::recorded_clicks) {
					std::cout << x << "\n";
					std::string cps_delay(std::to_string(x));
					std::cout << cps_delay + "\n";

					if (&x == &Recorder::recorded_clicks.back()) {
						suffix = "";
					}
					else {
						suffix = "\n";
					}

					file << cps_delay + suffix;
				}
				file.close();
			}
		}
	}
	private: System::Void import_clicks_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd->Filter = "owo | *.owo";

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			std::string import_path = msclr::interop::marshal_as< std::string >(ofd->FileName);
			std::fstream file;

			file.open(import_path, std::ios::in);

			Recorder::do_replay_clicks = false;
			toggle_replay->Checked = false;

			if (file.is_open()) {
				std::string line;
				Recorder::imported_clicks = {};
				while (getline(file, line)) {
					Recorder::imported_clicks.push_back(std::stof(line));
				}
				file.close();
			}
			import_clicks->Text = ofd->SafeFileName + " | " + System::Convert::ToString(Recorder::imported_clicks.size()) + " clicks";
		}
	}
	private: System::Void multiplier_top_panel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
			multiplier_top_panel->Width -= (multiplier_top_panel->Location.X + multiplier_top_panel->Width) - e->X;

			Recorder::multiplier = ((multiplier_top_panel->Width * 4) / float(multiplier_bot_panel->Width)) + 1;
			if (Recorder::multiplier > 5.00) {							// random bug idk
				Recorder::multiplier = 5.00;
			}
			Recorder::multiplier = round(Recorder::multiplier * 100.0) / 100.0;
			label7->Text = "Multiplier: " + System::Convert::ToString(Recorder::multiplier) + "x";
		}
	}
	private: System::Void multiplier_bot_panel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (GetAsyncKeyState(VK_LBUTTON) & 0x8000 && (e->X <= multiplier_bot_panel->Location.X + multiplier_bot_panel->Width)) {
			multiplier_top_panel->Width += e->X - (multiplier_top_panel->Location.X + multiplier_top_panel->Width);

			Recorder::multiplier = ((multiplier_top_panel->Width * 4) / float(multiplier_bot_panel->Width)) + 1;
			if (Recorder::multiplier > 5.00) {
				Recorder::multiplier = 5.00;
			}
			Recorder::multiplier = round(Recorder::multiplier * 100.0) / 100.0;
			label7->Text = "Multiplier: " + System::Convert::ToString(Recorder::multiplier) + "x";
		}
	}
	private: System::Void replay_toggle_shift_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (replay_toggle_shift->Checked) {
			Recorder::replay_shift = true;
		}
		else {
			Recorder::replay_shift = false;
		}
	}
	private: System::Void replay_toggle_smartmode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (replay_toggle_smartmode->Checked) {
			Recorder::replay_smartmode = true;
		}
		else {
			Recorder::replay_smartmode = false;
		}
	}
	private: System::Void toggle_break_blocks_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toggle_break_blocks->Checked) {
			Clicker::break_blocks = true;
		}
		else {
			Clicker::break_blocks = false;
		}
	}
	private: System::Void record_bind_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (record_bind->Text == "[ ... ]") {
			record_bind->Text = "[ " + e->KeyChar + " ]";

			if (e->KeyChar == 27) {
				record_bind->Text = "[ bind ]";
			}
			Recorder::record_bind = e->KeyChar;
		}
	}
	private: System::Void record_bind_Click(System::Object^ sender, System::EventArgs^ e) {
		record_bind->Text = "[ ... ]";
	}
	private: System::Void replay_bind_Click(System::Object^ sender, System::EventArgs^ e) {
		replay_bind->Text = "[ ... ]";
	}
	private: System::Void replay_bind_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (replay_bind->Text == "[ ... ]") {
			replay_bind->Text = "[ " + e->KeyChar + " ]";

			if (e->KeyChar == 27) {
				replay_bind->Text = "[ bind ]";
			}
			Recorder::replay_bind = e->KeyChar;
		}
	}
	private: System::Void hotkey_check_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		HKL currentKBL = GetKeyboardLayout(0);
		while (true) {
			Sleep(0.05);

			// record
			if ((GetAsyncKeyState(VkKeyScanEx(Recorder::record_bind, currentKBL)) & 1) && Recorder::record_bind != 27) {
				toggle_record->Checked = !toggle_record->Checked;
			}

			// replay
			if ((GetAsyncKeyState(VkKeyScanEx(Recorder::replay_bind, currentKBL)) & 1) && Recorder::replay_bind != 27) {
				toggle_replay->Checked = !toggle_replay->Checked;
			}
		}
	}
	private: System::Void recorder_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}