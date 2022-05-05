#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void newfile();
void printfile();
void nhapthemfile();
int main()
{
	string menu = "1.Tao file moi.\n2.In file ra man hinh.\n3.Nhap them vao file.";
	cout<<menu<<"\nHay chon chuc nang mong muon: ";
	int chucNang;
	cin>>chucNang;
	switch(chucNang)
	{
		case 1:
			newfile();
			break;
		case 2:
			printfile();
			break;
		case 3:
			nhapthemfile();
			break;
		case 4:
			string file;
			char kitu;
			cin>>file;
			scanf("%c",kitu);
			demKiTu(file,kitu);
		default:
			cout<<"Ban da nhap sai lua chon. Chuong trinh ket thuc !";
			break;
	}
	return 0;
}
void newfile()
{
	cin.ignore();
	cout<<"Nhap ten file muon tao: ";
	char tenfile[160];
	fgets(tenfile,160*sizeof(char),stdin);
	FILE *fptr;
	fptr = fopen(tenfile,"w");
	if(fptr == NULL)
   	{
   		printf("Error!");   
    	exit(1);             
   	}
   	cin.ignore();
   	cout<<"File da duoc tao thanh cong.\n";
   	cout<<"Nhap du lieu: ";
   	string inputData;
   	getline(cin,inputData);
   	fprintf(fptr,"%s",inputData.begin());
}
void printfile()
{
	cout<<"nhap ten file";
	
}
void nhapthemfile()
{
	cout<<"nhap them file";
}
int demKiTu(string file, char kiTu)
{
	ifstream fileInput(file);
	int count = 0;
	if (fileInput.fail())
	{
		cout << "Cannot open file at " << file << endl;
		return count;
	}

	while (!fileInput.eof())
	{
		char line[255];
		fileInput.getline(line, 255);
		cout << line << endl;
		for(int i=0;i<sizeof(line)/sizeof(char);i++)
		{
			if(line[i]==kiTu) count++;
		}
	}
	return count;
}
