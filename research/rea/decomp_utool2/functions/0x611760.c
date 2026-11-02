// rea decompile_all
// name: FUN_00611760
// address: 0x611760
// body: available
// range: 0x611760-0x61186c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00611760(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  code *pcVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c933;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 1));
  local_8 = 0;
  if (*in_ECX == 0) {
    operator_new(8);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar1 = in_ECX[7];
    piVar5 = (int *)(iVar1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    puVar4 = (undefined4 *)FUN_00458390(iVar1,param_1);
    pcVar6 = ReleaseMutex_exref;
    puVar2 = (undefined4 *)*in_ECX;
    if ((puVar2 != puVar4) && (*in_ECX = (int)puVar4, puVar2 != (undefined4 *)0x0)) {
      if ((HANDLE)*puVar2 != (HANDLE)0x0) {
        ReleaseMutex((HANDLE)*puVar2);
        CloseHandle((HANDLE)*puVar2);
        *puVar2 = 0;
      }
      FUN_004bfe14(puVar2,8,uVar3);
      pcVar6 = ReleaseMutex_exref;
    }
    piVar5 = (int *)*in_ECX;
    if ((*piVar5 == 0) && (piVar5 != (int *)0x0)) {
      *in_ECX = 0;
      if (*piVar5 != 0) {
        (*pcVar6)(*piVar5);
        CloseHandle((HANDLE)*piVar5);
        *piVar5 = 0;
      }
      FUN_004bfe14(piVar5,8);
    }
  }
  else {
    piVar5 = (int *)(*in_ECX + 4);
    *piVar5 = *piVar5 + 1;
  }
  iVar1 = *in_ECX;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 1));
  ExceptionList = local_10;
  return iVar1 != 0;
}

