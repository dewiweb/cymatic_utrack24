// rea decompile_all
// name: FUN_006b6ad0
// address: 0x6b6ad0
// body: available
// range: 0x6b6ad0-0x6b6bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006b6ad0(uint param_1,undefined4 param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  int in_ECX;
  int *_Memory;
  undefined1 *local_38 [4];
  undefined8 local_28;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072400b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    operator_new(0xa8);
    local_8 = param_3;
    param_3 = FUN_00493780(in_ECX + -0xc0,*(undefined4 *)(*(int *)(in_ECX + -0x10) + 0x38));
  }
  local_38[0] = &DAT_00bfe12c;
  local_28 = 0;
  local_20 = 0;
  local_8 = 1;
  iVar1 = *(int *)(in_ECX + -0x10);
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar1 + 0x40);
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 < *(uint *)(iVar1 + 0x60)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x58) + param_1 * 4), iVar1 != 0)) {
    FUN_004ab330(iVar1);
    LeaveCriticalSection(lpCriticalSection);
    bVar2 = true;
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
    bVar2 = false;
  }
  ppuVar3 = local_38;
  if (!bVar2) {
    ppuVar3 = (undefined1 **)0x0;
  }
  FUN_00493ad0(*(int *)(in_ECX + -0x10) + 0x30,ppuVar3,param_1,param_2);
  _Memory = (int *)(local_38[0] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return param_3;
}

