// rea decompile_all
// name: FUN_0063d4d0
// address: 0x63d4d0
// body: available
// range: 0x63d4d0-0x63d63a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063d4d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int *in_ECX;
  
  iVar2 = DAT_00c8a658;
  if (DAT_00c8a658 == 0) {
    return 0;
  }
  DVar5 = GetCurrentThreadId();
  if ((DVar5 == *(DWORD *)(iVar2 + 8)) || (DVar5 == *(DWORD *)(iVar2 + 0xc))) {
    return 1;
  }
  if (param_2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x10));
  }
  else {
    iVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x10));
    while (iVar6 == 0) {
      if (*(char *)(param_2 + 0xc) != '\0') {
        return 0;
      }
      Sleep(0);
      iVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x10));
    }
  }
  operator_new(0x10);
  iVar6 = FUN_00463270();
  if (*in_ECX != iVar6) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)*in_ECX;
    *in_ECX = iVar6;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  cVar4 = FUN_0063e270();
  if (cVar4 == '\0') {
    puVar3 = (undefined4 *)*in_ECX;
    if (puVar3 != (undefined4 *)0x0) {
      *in_ECX = 0;
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
    return 0;
  }
  DVar5 = WaitForSingleObject(*(HANDLE *)(*in_ECX + 8),0x14);
  while( true ) {
    if (DVar5 == 0) {
      DVar5 = GetCurrentThreadId();
      *(DWORD *)(iVar2 + 0xc) = DVar5;
      return 1;
    }
    if ((param_2 != 0) && (*(char *)(param_2 + 0xc) != '\0')) break;
    DVar5 = WaitForSingleObject(*(HANDLE *)(*in_ECX + 8),0x14);
  }
  SetEvent(*(HANDLE *)(*in_ECX + 0xc));
  puVar3 = (undefined4 *)*in_ECX;
  if (puVar3 != (undefined4 *)0x0) {
    *in_ECX = 0;
    LOCK();
    piVar1 = puVar3 + 1;
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x10));
  return 0;
}

