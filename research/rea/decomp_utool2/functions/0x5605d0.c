// rea decompile_all
// name: FUN_005605d0
// address: 0x5605d0
// body: available
// range: 0x5605d0-0x5606ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005605d0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00711dff;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
  iVar3 = *(int *)(in_ECX + 100) + 1;
  if (*(int *)(in_ECX + 0x60) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 100) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(in_ECX + 100);
  *(int *)(in_ECX + 100) = iVar3 + 1;
  piVar2 = (int *)(*(int *)(in_ECX + 0x5c) + iVar3 * 4);
  if (piVar2 != (int *)0x0) {
    iVar3 = *param_1;
    *piVar2 = iVar3;
    piVar2 = (int *)(iVar3 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(in_ECX + 0x38) == 0) {
    *(undefined4 *)(in_ECX + 0x34) = 100;
    *(undefined4 *)(in_ECX + 0x38) = 100;
    local_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(in_ECX + 0x30);
  }
  else {
    FUN_00463b90(uVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
  ExceptionList = local_10;
  return;
}

