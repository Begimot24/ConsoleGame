#pragma once

namespace Project1 {

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
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::TextBox^ TaskBox;


	private: System::Windows::Forms::ListBox^ listBox1;
	protected:





	public:






	private:
	public:

	public:
	private:

	private:

	private:





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->TaskBox = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(50, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add task:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(355, 157);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(159, 53);
			this->AddButton->TabIndex = 1;
			this->AddButton->Text = L"ADD";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TaskBox
			// 
			this->TaskBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TaskBox->Location = System::Drawing::Point(42, 157);
			this->TaskBox->MaximumSize = System::Drawing::Size(500, 500);
			this->TaskBox->Name = L"TaskBox";
			this->TaskBox->Size = System::Drawing::Size(265, 26);
			this->TaskBox->TabIndex = 2;
			this->TaskBox->TextChanged += gcnew System::EventHandler(this, &MyForm::TaskBox_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(42, 245);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(276, 204);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AccessibleName = L"lbWelcome";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(539, 494);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->TaskBox);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonDiscard_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TaskBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
