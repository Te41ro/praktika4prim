#pragma once
#include<cmath>
namespace zadaniye4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(490, 159);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(881, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(103, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(282, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������� �������� ���������� �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(14, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(246, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"������� ��������� �������� XN=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(14, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"������� �������� �������� XK=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(14, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"������� �������� ���� XH=";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(508, 41);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(841, 511);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox1->Location = System::Drawing::Point(285, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 24);
			this->textBox1->TabIndex = 7;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox2->Location = System::Drawing::Point(285, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 24);
			this->textBox2->TabIndex = 8;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textBox3->Location = System::Drawing::Point(285, 278);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 24);
			this->textBox3->TabIndex = 9;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 108);
			this->button1->TabIndex = 10;
			this->button1->Text = L"���������� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 108);
			this->button2->TabIndex = 11;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(645, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(408, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"���������� ������� �� ��������� [xn; xk]";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1361, 564);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"�������� ������� ������ 23-�� ������ �. �.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, xn, xk, xh, y;
	Series^ plot1 = chart1->Series[0];
	//������� ���������� Chart1
	plot1->Points->Clear();
	//��������, ��� ������� ������ xn, xk, xh � �� �������������� � ���������� ���� Double
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != ""))
	{
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text);
		//�������� ������������ ����� ������
		if ((xn >= xk) || (xh > (xk - xn)))
		{
			MessageBox::Show("������ ��������� �������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
			while (x <= xk)
			{
				if (x <= 0) y = 2 * x + 2;
				else
					if (x > 0 && x < 5) y = sqrt(x + 3);
					else y = pow(cos(x + 2), 2);
				//��������� ����� � ������������ � � � � ���������� Chart1
				plot1->Points->AddXY(x, y);
				x = x + xh;
			}
		}
	}
	else
	{
		MessageBox::Show("���������, ����������, ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//������ �������, � ������� ��������
	t = 0;
	//����������� ������� � ������ (���� �������� �������� 0, 2384, 1254, 1251 � ��� �� �����)
	k = 0;
	//������� ����������, ���� ���� ����� �������������
	if (str[t] == '-')
	{
		t++;
	}
	//����� �� ����� ���������� � �������
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}
		//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'
		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("�������� � �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//������� ������ ���������� ����
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//������ �������, � ������� ��������
	t = 0;
	//����������� ������� � ������ (���� �������� �������� 0, 2384, 1254, 1251 � ��� �� �����)
	k = 0;
	//������� ����������, ���� ���� ����� �������������
	if (str[t] == '-')
	{
		t++;
	}
	//����� �� ����� ���������� � �������
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}
		//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'
		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("�������� � �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//������� ������ ���������� ����
		this->textBox2->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox3->Text;
	l = str->Length;
	//������ �������, � ������� ��������
	t = 0;
	//����������� ������� � ������ (���� �������� �������� 0, 2384, 1254, 1251 � ��� �� �����)
	k = 0;
	//������� ����������, ���� ���� ����� �������������
	if (str[t] == '-')
	{
		t++;
	}
	//����� �� ����� ���������� � �������
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//���� ������� ����� ��������� �������� ��� ������� ��� ���� �������
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}
		//���� t-�� ������ �� ����� � ��������� �� '0' �� '9'
		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("�������� � �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//������� ������ ���������� ����
		this->textBox3->Focus();
	}
}
};
}
