#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
#include "AC.h"
namespace CALCLAB4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ THEFORM
	/// </summary>
	public ref class THEFORM : public System::Windows::Forms::Form
	{
	public:
		THEFORM(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~THEFORM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ table;
	protected:

	private: System::Windows::Forms::TextBox^ xStr;
	private: System::Windows::Forms::TextBox^ yStr;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ yLabel;
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Button^ btnRUN;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ statusbar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ filec;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->xStr = (gcnew System::Windows::Forms::TextBox());
			this->yStr = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRUN = (gcnew System::Windows::Forms::Button());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusbar = (gcnew System::Windows::Forms::TextBox());
			this->filec = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(12, 211);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(728, 129);
			this->table->TabIndex = 0;
			// 
			// xStr
			// 
			this->xStr->Location = System::Drawing::Point(11, 58);
			this->xStr->Name = L"xStr";
			this->xStr->Size = System::Drawing::Size(560, 30);
			this->xStr->TabIndex = 1;
			// 
			// yStr
			// 
			this->yStr->Location = System::Drawing::Point(11, 123);
			this->yStr->Name = L"yStr";
			this->yStr->Size = System::Drawing::Size(560, 30);
			this->yStr->TabIndex = 2;
			this->yStr->TextChanged += gcnew System::EventHandler(this, &THEFORM::yStr_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->filec);
			this->groupBox1->Controls->Add(this->btnRUN);
			this->groupBox1->Controls->Add(this->yLabel);
			this->groupBox1->Controls->Add(this->xLabel);
			this->groupBox1->Controls->Add(this->xStr);
			this->groupBox1->Controls->Add(this->yStr);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(728, 167);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INPUT AREA";
			// 
			// btnRUN
			// 
			this->btnRUN->Location = System::Drawing::Point(577, 18);
			this->btnRUN->Name = L"btnRUN";
			this->btnRUN->Size = System::Drawing::Size(145, 135);
			this->btnRUN->TabIndex = 5;
			this->btnRUN->Text = L"GO!!!!";
			this->btnRUN->UseVisualStyleBackColor = true;
			this->btnRUN->Click += gcnew System::EventHandler(this, &THEFORM::btnRUN_Click);
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yLabel->Location = System::Drawing::Point(6, 91);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(85, 29);
			this->yLabel->TabIndex = 4;
			this->yLabel->Text = L"Y array";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(6, 26);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(87, 29);
			this->xLabel->TabIndex = 3;
			this->xLabel->Text = L"X array";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 346);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(728, 358);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// statusbar
			// 
			this->statusbar->Location = System::Drawing::Point(12, 185);
			this->statusbar->Name = L"statusbar";
			this->statusbar->Size = System::Drawing::Size(728, 20);
			this->statusbar->TabIndex = 5;
			// 
			// filec
			// 
			this->filec->FormattingEnabled = true;
			this->filec->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"no thanks", L"yes please" });
			this->filec->Location = System::Drawing::Point(446, 18);
			this->filec->Name = L"filec";
			this->filec->Size = System::Drawing::Size(125, 31);
			this->filec->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(353, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 29);
			this->label1->TabIndex = 7;
			this->label1->Text = L"File\?";
			this->label1->Click += gcnew System::EventHandler(this, &THEFORM::label1_Click);
			// 
			// THEFORM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 716);
			this->Controls->Add(this->statusbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table);
			this->Name = L"THEFORM";
			this->Text = L"THEFORM";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double to_double(System::String^ str) {
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
		std::string ss = chars;

		// Free the allocated memory for const char*
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
		std::istringstream iss(ss);
		double result;
		iss >> result;
		return result;
	}
private: std::string to_normal(System::String^ str) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
	std::string ss = chars;
	return ss;
}
private: System::String^ to_system(std::string s) {
	array<Byte>^ bytes = gcnew array<Byte>(s.length());
	System::Runtime::InteropServices::Marshal::Copy((IntPtr)(char*)s.c_str(), bytes, 0, s.length());

	System::String^ managedString = System::Text::Encoding::UTF8->GetString(bytes);
	return managedString;
}
private: double min(double a, double b) {
	if (a < b) return a; else return b;
}
private: double max(double a, double b) {
	if (a > b) return a; else return b;
}
private: void drawitall(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy, System::String^ col) {
	Graphics^ canvas = pictureBox1->CreateGraphics();
	Color c_color = Color::FromName(col);
	Pen^ colorPen = (gcnew Pen(c_color, 2.0));

	Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
	Brush^ brush = Brushes::Black;
	Brush^ brushr = Brushes::Red;

	SizeF textSize;

	double horiz = maxx - minx;
	double vert = maxy - miny;

	try {
		for (int i = 0;i < vx.size() - 1;i++) {
			double gx1 = vx[i];double gx2 = vx[i + 1];
			double gy1 = vy[i];double gy2 = vy[i + 1];
			canvas->DrawLine(colorPen,
				float((gx1 - minx) / horiz * pictureBox1->Width),
				float((1 - (gy1 - miny) / vert) * pictureBox1->Height),
				float((gx2 - minx) / horiz * pictureBox1->Width),
				float((1 - (gy2 - miny) / vert) * pictureBox1->Height));
		}
	}
	catch (...) {
	}
	return;
}
private: void drawdots(double minx, double miny, double maxx, double maxy, std::vector <double> vx, std::vector <double> vy) {
	Graphics^ canvas = pictureBox1->CreateGraphics();
	Color c_color = Color::FromName("Black");
	Pen^ colorPen = (gcnew Pen(c_color, 5.0));

	Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
	Brush^ brush = Brushes::Black;
	Brush^ brushr = Brushes::Red;

	SizeF textSize;

	double horiz = maxx - minx;
	double vert = maxy - miny;

	for (int i = 0;i < vx.size();i++) {
		double gx1 = vx[i];
		double gy1 = vy[i];
		canvas->DrawEllipse(colorPen, (gx1 - minx) / horiz * pictureBox1->Width,
			(1 - (gy1 - miny) / vert) * pictureBox1->Height, 1.0, 1);
	}
	return;
}
private: void canv_clear(double minx, double miny, double maxx, double maxy) {
	Graphics^ canvas = pictureBox1->CreateGraphics();
	Color c_white = Color::FromName("White");
	canvas->Clear(c_white);
	
	Color c_color = Color::FromName("LightGray");
	Pen^ colorPen = (gcnew Pen(c_color, 2.0));

	Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
	Brush^ brush = Brushes::LightGray;
	Brush^ brushr = Brushes::Red;

	SizeF textSize;

	double horiz = maxx - minx;
	double vert = maxy - miny;

	float x1 = 0;
	float x2 = 0;
	float y1 = 0;
	float y2 = 0;

	double tx = 1;
	while (fabs(horiz) < 10) {horiz *= 10; tx *= 10;}
	double xrange = 1 / tx;
	horiz /= tx;
	double ty = 1;
	while (fabs(vert) < 10) { vert *= 10; ty *= 10; }
	double yrange = 1 / ty;
	vert /= ty;

	for (double i = floor(minx); i < ceil(maxx); i += xrange) {
		x1 = i;
		x2 = i;
		canvas->DrawLine(colorPen,
			(x1 - minx) / horiz * pictureBox1->Width,
			pictureBox1->Height+5,
			(x2 - minx) / horiz * pictureBox1->Width,
			pictureBox1->Height-5);
		textSize = canvas->MeasureString((i).ToString("F2"), font);
		canvas->DrawString((i).ToString("F2"), font, brush,
			(x1 - minx) / horiz * pictureBox1->Width - textSize.Width / 2,
			pictureBox1->Height- textSize.Height);
	}

	for (double i = floor(miny); i < ceil(maxy); i += yrange) {
		y1 = i;
		y2 = i;
		canvas->DrawLine(colorPen,
			-5,
			(1 - (y1 - miny) / vert) * pictureBox1->Height,
			5,
			(1 - (y2 - miny) / vert) * pictureBox1->Height);
		textSize = canvas->MeasureString((i).ToString("F2"), font);
		canvas->DrawString((i).ToString("F2"), font, brush,
			5,
			(1 - ((y1)-miny) / vert) * pictureBox1->Height - textSize.Height / 2);
	}
	return;
}
private: std::vector<std::string> split(std::string k) {
	std::vector<std::string> result;
	System::String^ s = to_system(k);
	array<System::String^>^ parts = s->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < parts->Length; i++)
	{
		System::String^ b = parts[i];
		result.push_back(to_normal(b));
	}

	return result;
}
	   private: void tableit(std::vector <std::string> a) {
		   std::vector <std::vector<std::string> > v;
		   int i, j;
		   for (i = 0;i < a.size();i++) {
			   v.push_back(split(a[i]));
		   }
		   table->ColumnHeadersVisible = true;
		   table->Columns->Clear();
		   for (j = 0;j < v[0].size();j++) {
			   table->Columns->Add(to_system(v[0][j]), to_system(v[0][j]));
		   }
		   for (i = 1;i < v.size();i++) {
			   table->Rows->Add();
			   for (j = 0;j < v[i].size();j++) {
				   table->Rows[i - 1]->Cells[j]->Value = to_system(v[i][j]);
			   }
		   }
		   return;
	   }
	private: System::Void yStr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   double quad_dt(double m[4][4]) {
			   return m[0][0] * (m[1][1] * (m[2][2] * m[3][3] - m[2][3] * m[3][2]) - m[1][2] * (m[2][1] * m[3][3] - m[2][3] * m[3][1]) + m[1][3] * (m[2][1] * m[3][2] - m[2][2] * m[3][1])) -
				   m[0][1] * (m[1][0] * (m[2][2] * m[3][3] - m[2][3] * m[3][2]) - m[1][2] * (m[2][0] * m[3][3] - m[2][3] * m[3][0]) + m[1][3] * (m[2][0] * m[3][2] - m[2][2] * m[3][0])) +
				   m[0][2] * (m[1][0] * (m[2][1] * m[3][3] - m[2][3] * m[3][1]) - m[1][1] * (m[2][0] * m[3][3] - m[2][3] * m[3][0]) + m[1][3] * (m[2][0] * m[3][1] - m[2][1] * m[3][0])) -
				   m[0][3] * (m[1][0] * (m[2][1] * m[3][2] - m[2][2] * m[3][1]) - m[1][1] * (m[2][0] * m[3][2] - m[2][2] * m[3][0]) + m[1][2] * (m[2][0] * m[3][1] - m[2][1] * m[3][0]));
		   }
		   ac linapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0;
			   double sy = 0, sxy = 0;
			   for (i = 0;i < n;i++) {
				   sx += vx[i];
				   sx2 += vx[i] * vx[i];
				   sy += vy[i];
				   sxy += vx[i] * vy[i];
			   }
			   ans.a1 = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
			   ans.a0 = (sy - ans.a1 * sx) / n;
			   return ans;
		   }
		   ac powapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0;
			   double sy = 0, sxy = 0;
			   for (i = 0;i < n;i++) {
				   sx += log(vx[i]);
				   sx2 += log(vx[i]) * log(vx[i]);
				   sy += log(vy[i]);
				   sxy += log(vx[i]) * log(vy[i]);
			   }
			   ans.a1 = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
			   ans.a0 = exp((sy - ans.a1 * sx) / n);
			   return ans;
		   }
		   ac expapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0;
			   double sy = 0, sxy = 0;
			   for (i = 0;i < n;i++) {
				   sx += vx[i];
				   sx2 += vx[i] * vx[i];
				   sy += log(vy[i]);
				   sxy += vx[i] * log(vy[i]);
			   }
			   ans.a1 = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
			   ans.a0 = exp((sy - ans.a1 * sx) / n);
			   return ans;
		   }
		   ac lnapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0;
			   double sy = 0, sxy = 0;
			   for (i = 0;i < n;i++) {
				   sx += log(vx[i]);
				   sx2 += log(vx[i]) * log(vx[i]);
				   sy += vy[i];
				   sxy += log(vx[i]) * vy[i];
			   }
			   ans.a1 = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
			   ans.a0 = (sy - ans.a1 * sx) / n;
			   return ans;
		   }
		   ac squareapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0, sx3 = 0, sx4 = 0;
			   double sy = 0, sxy = 0, sx2y = 0;
			   for (i = 0;i < n;i++) {
				   sx += vx[i];
				   sx2 += vx[i] * vx[i];
				   sx3 += vx[i] * vx[i] * vx[i];
				   sx4 += vx[i] * vx[i] * vx[i] * vx[i];
				   sy += vy[i];
				   sxy += vx[i] * vy[i];
				   sx2y += vx[i] * vx[i] * vy[i];
			   }
			   double xtx[3][3] = {
				   {n, sx, sx2},
				   {sx, sx2, sx3},
				   {sx2, sx3, sx4}
			   };
			   double xty[3] = { sy, sxy, sx2y };

			   double det = xtx[0][0] * (xtx[1][1] * xtx[2][2] - xtx[1][2] * xtx[2][1]) -
				   xtx[0][1] * (xtx[1][0] * xtx[2][2] - xtx[1][2] * xtx[2][0]) +
				   xtx[0][2] * (xtx[1][0] * xtx[2][1] - xtx[1][1] * xtx[2][0]);

			   double det_w0 = xty[0] * (xtx[1][1] * xtx[2][2] - xtx[1][2] * xtx[2][1]) -
				   xtx[0][1] * (xty[1] * xtx[2][2] - xtx[1][2] * xty[2]) +
				   xtx[0][2] * (xty[1] * xtx[2][1] - xtx[1][1] * xty[2]);

			   double det_w1 = xtx[0][0] * (xty[1] * xtx[2][2] - xtx[1][2] * xty[2]) -
				   xty[0] * (xtx[1][0] * xtx[2][2] - xtx[1][2] * xtx[2][0]) +
				   xtx[0][2] * (xtx[1][0] * xty[2] - xty[1] * xtx[2][0]);

			   double det_w2 = xtx[0][0] * (xtx[1][1] * xty[2] - xty[1] * xtx[2][1]) -
				   xtx[0][1] * (xtx[1][0] * xty[2] - xty[1] * xtx[2][0]) +
				   xty[0] * (xtx[1][0] * xtx[2][1] - xtx[1][1] * xtx[2][0]);


			   ans.a0 = det_w0 / det;
			   ans.a1 = det_w1 / det;
			   ans.a2 = det_w2 / det;
			   return ans;
		   }
		   ac cubeapp(std::vector <double> vx, std::vector <double> vy) {
			   ac ans = { 0,0,0,0 };
			   int i = 0, j = 0, k = 0;
			   double n = vx.size();
			   double sx = 0, sx2 = 0, sx3 = 0, sx4 = 0, sx5 = 0, sx6 = 0;
			   double sy = 0, sxy = 0, sx2y = 0, sx3y = 0;
			   for (i = 0;i < n;i++) {
				   sx += vx[i];
				   sx2 += vx[i] * vx[i];
				   sx3 += vx[i] * vx[i] * vx[i];
				   sx4 += vx[i] * vx[i] * vx[i] * vx[i];
				   sx5 += vx[i] * vx[i] * vx[i] * vx[i] * vx[i];
				   sx6 += vx[i] * vx[i] * vx[i] * vx[i] * vx[i] * vx[i];
				   sy += vy[i];
				   sxy += vx[i] * vy[i];
				   sx2y += vx[i] * vx[i] * vy[i];
				   sx3y += vx[i] * vx[i] * vx[i] * vy[i];
			   }
			   double xtx[4][4] = {
				   {n, sx, sx2, sx3},
				   {sx, sx2, sx3, sx4},
				   {sx2, sx3, sx4, sx5},
				   {sx3, sx4, sx5, sx6}
			   };

			   double xty[4] = { sy, sxy, sx2y, sx3y };
			   double det = quad_dt(xtx);
			   double ma[4] = { 0,0,0,0 };

			   for (i = 0;i < 4;i++) {
				   double d[4][4] = {
					   {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}
				   };
				   for (j = 0;j < 4;j++) {
					   for (k = 0;k < 4;k++) {
						   if (k != i)
							   d[j][k] = xtx[j][k];
						   else
							   d[j][k] = xty[j];
					   }
				   }
				   ma[i] = quad_dt(d);
			   }

			   ans.a0 = ma[0] / det;
			   ans.a1 = ma[1] / det;
			   ans.a2 = ma[2] / det;
			   ans.a3 = ma[3] / det;
			   return ans;
		   }
		   double sumsq(std::vector <double> vy, std::vector <double> phi) {
			   double ans = 0;
			   for (int i = 0;i < phi.size();i++) {
				   ans += (phi[i] - vy[i]) * (phi[i] - vy[i]);
			   }
			   return ans;
		   }
		   double rsq(std::vector <double> vy, std::vector <double> phi) {
			   double ans = 0;
			   for (int i = 0;i < phi.size();i++) {
				   ans += phi[i];
			   }
			   ans /= phi.size();
			   std::vector <double> mid(phi.size(), ans);
			   double top = sumsq(vy, phi);
			   double bottom = sumsq(vy, mid);
			   return 1 - top / bottom;
		   }
		   double sqdiff(std::vector <double> vy, std::vector <double> phi) {
			   double ans = sumsq(vy, phi);
			   return sqrt(ans / phi.size());
		   }
		   aeff effectiveness(std::vector <double> vy, std::vector <double> phi) {
			   aeff ans;
			   ans.s = sumsq(vy, phi);
			   ans.b = sqdiff(vy, phi);
			   ans.r2 = rsq(vy, phi);
			   return ans;
		   }
		   double correlation(std::vector <double> vx, std::vector <double> vy) {
			   double midx = 0, midy = 0;
			   for (int i = 0;i < vx.size();i++) {
				   midx += vx[i];
				   midy += vy[i];
			   }
			   midx /= vx.size();
			   midy /= vy.size();
			   double xy = 0, xx = 0, yy = 0;
			   for (int i = 0;i < vx.size();i++) {
				   xx += (vx[i] - midx) * (vx[i] - midx);
				   yy += (vy[i] - midy) * (vy[i] - midy);
				   xy += (vx[i] - midx) * (vy[i] - midy);
			   }
			   return xy / sqrt(xx * yy);
		   }
	private: System::Void btnRUN_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector <double> vx;
		std::vector <double> vy;
		std::string xfs, yfs;

		if (filec->SelectedIndex == 0) {
			xfs = to_normal(xStr->Text);
			yfs = to_normal(yStr->Text);
		}
		else {
			std::ifstream fin("input.txt");
			getline(fin, xfs);
			getline(fin, yfs);
			xStr->Text = to_system(xfs);
			yStr->Text = to_system(yfs);
		}

	try {
		std::vector <std::string> vxs = split(xfs);
		vx.resize(vxs.size());
		for (int i = 0;i < vxs.size();i++) {
			vx[i] = to_double(to_system(vxs[i]));
		}
	}
	catch (...) {
		statusbar->Text = "X value input is invalid.";
		return;
	}
	try {
		std::vector <std::string> vys = split(yfs);
		vy.resize(vys.size());
		for (int i = 0;i < vys.size();i++) {
			vy[i] = to_double(to_system(vys[i]));
		}
	}
	catch (...) {
		statusbar->Text = "Y value input is invalid.";
		return;
	}
	if (vx.size() != vy.size()) {
		statusbar->Text = "X input size isn't equal to the Y input size.";
		return;
	}
	int n = vx.size();
	std::vector <double> vlinear(n);
	ac clinear = linapp(vx, vy);
	for (int i = 0;i < n;i++) { vlinear[i] = clinear.a0 + vx[i] * clinear.a1; }
	aeff elinear = effectiveness(vy, vlinear);

	std::vector <double> vpower(n);
	ac cpower = powapp(vx, vy);
	for (int i = 0;i < n;i++) { vpower[i] = cpower.a0 * pow(vx[i], cpower.a1); }
	aeff epower = effectiveness(vy, vpower);

	std::vector <double> vexpo(n);
	ac cexpo = expapp(vx, vy);
	for (int i = 0;i < n;i++) { vexpo[i] = cexpo.a0 * exp(vx[i] * cexpo.a1); }
	aeff eexpo = effectiveness(vy, vexpo);

	std::vector <double> vnat(n);
	ac cnat = lnapp(vx, vy);
	for (int i = 0;i < n;i++) { vnat[i] = cnat.a0 + log(vx[i]) * cnat.a1; }
	aeff enat = effectiveness(vy, vnat);

	std::vector <double> vsquare(n);
	ac csquare = squareapp(vx, vy);
	for (int i = 0;i < n;i++) { vsquare[i] = csquare.a0 + vx[i] * csquare.a1 + vx[i] * vx[i] * csquare.a2; }
	aeff esquare = effectiveness(vy, vsquare);

	std::vector <double> vcube(n);
	ac ccube = cubeapp(vx, vy);
	for (int i = 0;i < n;i++) { vcube[i] = ccube.a0 + vx[i] * ccube.a1 + vx[i] * vx[i] * ccube.a2 + vx[i] * vx[i] * vx[i] * ccube.a3; }
	aeff ecube = effectiveness(vy, vcube);

	std::vector <std::string> to_table(7);
	to_table[0] = "Name a b c d S beta R^2";

	to_table[1] = to_normal("Linear " + clinear.a0.ToString() + " " + clinear.a1.ToString() + " " + clinear.a2.ToString() + " " + clinear.a3.ToString() + " "
		+ elinear.s.ToString() + " " + elinear.b.ToString() + " " + elinear.r2.ToString());
	to_table[2] = to_normal("Power " + cpower.a0.ToString() + " " + cpower.a1.ToString() + " " + cpower.a2.ToString() + " " + cpower.a3.ToString() + " "
		+ epower.s.ToString() + " " + epower.b.ToString() + " " + epower.r2.ToString());
	to_table[3] = to_normal("Exponential " + cexpo.a0.ToString() + " " + cexpo.a1.ToString() + " " + cexpo.a2.ToString() + " " + cexpo.a3.ToString() + " "
		+ eexpo.s.ToString() + " " + eexpo.b.ToString() + " " + eexpo.r2.ToString());
	to_table[4] = to_normal("Natural " + cnat.a0.ToString() + " " + cnat.a1.ToString() + " " + cnat.a2.ToString() + " " + cnat.a3.ToString() + " "
		+ enat.s.ToString() + " " + enat.b.ToString() + " " + enat.r2.ToString());
	to_table[5] = to_normal("Quadratic " + csquare.a0.ToString() + " " + csquare.a1.ToString() + " " + csquare.a2.ToString() + " " + csquare.a3.ToString() + " "
		+ esquare.s.ToString() + " " + esquare.b.ToString() + " " + esquare.r2.ToString());
	to_table[6] = to_normal("Cube " + ccube.a0.ToString() + " " + ccube.a1.ToString() + " " + ccube.a2.ToString() + " " + ccube.a3.ToString() + " "
		+ ecube.s.ToString() + " " + ecube.b.ToString() + " " + ecube.r2.ToString());
	tableit(to_table);

	double minx = 999999999, miny = 999999999;
	double maxx = -999999999, maxy = -999999999;

	for (int i = 0;i < n;i++) {
		minx = min(minx, vx[i]);
		miny = min(miny, vy[i]);
		maxx = max(maxx, vx[i]);
		maxy = max(maxy, vy[i]);
	}
	canv_clear(minx, miny, maxx, maxy);
	drawitall(minx, miny, maxx, maxy, vx, vlinear, "Red");
	drawitall(minx, miny, maxx, maxy, vx, vpower, "Blue");
	drawitall(minx, miny, maxx, maxy, vx, vexpo, "Yellow");
	drawitall(minx, miny, maxx, maxy, vx, vnat, "Green");
	drawitall(minx, miny, maxx, maxy, vx, vsquare, "Pink");
	drawitall(minx, miny, maxx, maxy, vx, vcube, "Purple");
	drawdots(minx, miny, maxx, maxy, vx, vy);

	std::vector <double> betas = {elinear.b, epower.b, eexpo.b, enat.b, esquare.b, ecube.b};
	double bbest = min(min(min(elinear.b, epower.b), min(eexpo.b, enat.b)), min(esquare.b, ecube.b));
	int what = 0;
	for (int i = 0;i < 6;i++) if (betas[i] == bbest) what = i;
	switch (what) {
		case 0: statusbar->Text = "The most optimal function: Linear (red)"; break;
		case 1: statusbar->Text = "The most optimal function: Power (blue)"; break;
		case 2: statusbar->Text = "The most optimal function: Exponential (yellow)"; break;
		case 3: statusbar->Text = "The most optimal function: Natural (green)"; break;
		case 4: statusbar->Text = "The most optimal function: Quadratic (pink)"; break;
		case 5: statusbar->Text = "The most optimal function: Cubic (purple)"; break;
	}
	statusbar->Text += "; Linear correlation: " + correlation(vx, vy).ToString();
	return;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
