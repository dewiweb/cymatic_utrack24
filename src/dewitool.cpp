// DewiTool — membre CopperLan via CHAIFreeware.dll chargée dynamiquement
// GetProcAddress sur le symbole manglé MSVC, appels via vtable (interfaces pures)
#include <stdio.h>
#include <windows.h>
#include "CHAI.h"

typedef CPNS::ICHAI* (__cdecl *CreateCHAIFn)(const char*);

int main()
{
    printf("DewiTool - CopperLan member\n");
    HMODULE h = LoadLibraryA("research\\assets\\chai_sdk\\CHAIFreeware.dll");
    if (!h) h = LoadLibraryA("CHAIFreeware.dll");
    if (!h) { printf("DLL introuvable (err %lu)\n", GetLastError()); return 1; }

    CreateCHAIFn createCHAI = (CreateCHAIFn)GetProcAddress(h,
        "?CreateCHAI@Factory@CPNS@@SAPAVICHAI@2@QBD@Z");
    if (!createCHAI) { printf("CreateCHAI export introuvable\n"); return 1; }

    CPNS::ICHAI* pCHAI = createCHAI("PrJfracjwWc6FwXQPkzYeeS3NbxVBZwjry7AxLzTgTN@");
    if (!pCHAI) { printf("CreateCHAI a echoue\n"); return 1; }
    printf("CHAI cree\n");

    CPT::uint16 wChai = 0, wVnm = 0;
    pCHAI->GetVersion(wChai, wVnm);
    printf("CHAI %04x  VNM %04x\n", wChai, wVnm);

    CPNS::IMIDI2CPLocalDevice* pDev =
        pCHAI->AddMIDI2CPLocalDevice(CPNS::Enums::DC_Performance);
    if (!pDev) { printf("AddMIDI2CPLocalDevice a echoue\n"); return 1; }
    printf("Device cree\n");

    pCHAI->Connect();
    printf("Connecte — 'DewiTool' doit apparaitre dans CopperLan Manager!\n");
    printf("Ctrl+C pour quitter...\n");
    fflush(stdout);
    while (1) Sleep(1000);

    pCHAI->Disconnect();
    pCHAI->Destroy();
    FreeLibrary(h);
    return 0;
}
