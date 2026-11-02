// rea decompile_all
// name: FUN_00463bf0
// address: 0x463bf0
// body: available
// range: 0x463bf0-0x463bfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463bf0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar5 = DAT_00c8a668;
  if (DAT_00c8a668 == 0) {
    return;
  }
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00700ec0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  DVar6 = timeGetTime();
  if ((DAT_00c8a644 <= DVar6) || (DVar6 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  iVar1 = *(int *)(iVar5 + 0x4c);
  while( true ) {
    if ((iVar1 == 0) || (0 < *(int *)(*(int *)(iVar5 + 0x4c) + 4))) goto LAB_00463b5c;
    piVar2 = *(int **)(iVar5 + 0x4c);
    piVar2[1] = piVar2[2];
    if (piVar2[3] == 0) {
      *(int *)(iVar5 + 0x4c) = piVar2[4];
    }
    else {
      *(int *)(piVar2[3] + 0x10) = piVar2[4];
    }
    if (piVar2[4] != 0) {
      *(int *)(piVar2[4] + 0xc) = piVar2[3];
    }
    piVar2[4] = 0;
    piVar2[3] = 0;
    iVar1 = *(int *)(iVar5 + 0x4c);
    if ((iVar1 == 0) || (piVar2[1] < *(int *)(iVar1 + 4))) {
      piVar2[4] = *(int *)(iVar5 + 0x4c);
      *(int **)(iVar5 + 0x4c) = piVar2;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
      while ((iVar3 != 0 && (iVar4 = *(int *)(iVar1 + 0x10), *(int *)(iVar4 + 4) <= piVar2[1]))) {
        iVar3 = *(int *)(iVar4 + 0x10);
        iVar1 = iVar4;
      }
      piVar2[4] = *(int *)(iVar1 + 0x10);
      piVar2[3] = iVar1;
      *(int **)(iVar1 + 0x10) = piVar2;
    }
    if (piVar2[4] != 0) {
      *(int **)(piVar2[4] + 0xc) = piVar2;
    }
    SetEvent(*(HANDLE *)(iVar5 + 0x2c));
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    uStack_8._0_1_ = 1;
    (**(code **)(*piVar2 + 4))();
    DVar7 = timeGetTime();
    if ((DAT_00c8a644 <= DVar7) || (DVar7 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar7;
    }
    if (DVar6 + 100 < DVar7) break;
    uStack_8._0_1_ = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    iVar1 = *(int *)(iVar5 + 0x4c);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
LAB_00463b5c:
  SetEvent(*(HANDLE *)(iVar5 + 0x50));
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = pvStack_10;
  return;
}

