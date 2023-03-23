#pragma once

#include <Windows.h>

#define SIGNATURE_EXPORT extern "C" __declspec(dllexport)

bool InitializeSignatureCheck();
void ResetDllSearch();
SIGNATURE_EXPORT HMODULE LoadLibraryCheckedW(const wchar_t* szDll, bool allowFailure);
SIGNATURE_EXPORT HMODULE LoadLibraryCheckedA(const char* szDll, bool allowFailure);