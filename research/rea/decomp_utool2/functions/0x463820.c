// rea decompile_all
// name: FUN_00463820
// address: 0x463820
// body: available
// range: 0x463820-0x4639e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463820(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *lParam;
  DWORD DVar4;
  DWORD DVar5;
  BOOL BVar6;
  DWORD DVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  
  uVar3 = timeGetTime();
  if ((DAT_00c8a644 <= uVar3) || (uVar3 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = uVar3;
  }
  lParam = operator_new(8);
  piVar9 = lParam + 1;
  *lParam = juce::ReferenceCountedObject::vftable;
  *piVar9 = 0;
  *lParam = juce::Timer::TimerThread::CallTimersMessage::vftable;
  LOCK();
  *piVar9 = *piVar9 + 1;
  UNLOCK();
  cVar1 = *(char *)(in_ECX + 0x3c);
  do {
    if (cVar1 != '\0') {
      piVar9 = lParam + 1;
      LOCK();
      iVar8 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*lParam)(1);
      }
      return;
    }
    DVar4 = timeGetTime();
    if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar4;
    }
    iVar8 = DVar4 - uVar3;
    if (DVar4 < uVar3) {
      iVar8 = iVar8 + -1;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    for (iVar2 = *(int *)(in_ECX + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) - iVar8;
    }
    if (*(int *)(in_ECX + 0x4c) == 0) {
      DVar7 = 1000;
    }
    else {
      DVar7 = *(DWORD *)(*(int *)(in_ECX + 0x4c) + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (((int)DVar7 < 1) && (DVar5 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x50),0), DVar5 != 0))
    {
      piVar9 = lParam + 1;
      if ((DAT_00c8a658 == 0) || (*(char *)(DAT_00c8a658 + 4) != '\0')) {
LAB_00463933:
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      else {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        BVar6 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar6 == 0) goto LAB_00463933;
      }
      DVar7 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x50),300);
      if (DVar7 != 0) {
        if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
          BVar6 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
          if (BVar6 != 0) goto LAB_004639bf;
        }
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        LOCK();
        iVar8 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*lParam)(1);
        }
      }
    }
    else {
      if ((int)DVar7 < 1) {
        DVar7 = 1;
      }
      else if (100 < (int)DVar7) {
        DVar7 = 100;
      }
      WaitForSingleObject(*(HANDLE *)(in_ECX + 0x2c),DVar7);
    }
LAB_004639bf:
    cVar1 = *(char *)(in_ECX + 0x3c);
    uVar3 = DVar4;
  } while( true );
}

