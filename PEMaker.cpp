// PEMaker.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "pecrypt.h"

int _tmain(int argc, _TCHAR* argv[])
{
	_TCHAR* cFnameOpen = _T("C:\\Users\\dsns\\Documents\\Visual Studio 2012\\Projects\\TestProgram\\Debug\\TestProgram.exe");
	_TCHAR* cFnameSave = _T("C:\\Users\\dsns\\Documents\\Visual Studio 2012\\Projects\\TestProgram\\Debug\\TestProgram_pack.exe");
	CPECryptor* PEfile = new (CPECryptor);
	PEfile->OpenFile(cFnameOpen);
	_tprintf(_T("PE file open ok!!\n"));
	PEfile->CryptFile();
	PEfile->SaveFile(cFnameSave);
	return 0;
}

