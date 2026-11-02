// rea decompile_all
// name: FUN_005c9b90
// address: 0x5c9b90
// body: available
// range: 0x5c9b90-0x5c9c5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c9b90(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  double dVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071adbd;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  local_8 = 0;
  *(undefined8 *)(in_ECX + 0x58) = param_2;
  *(undefined4 *)(in_ECX + 0x68) = param_1;
  if (*(int **)(in_ECX + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x30) + 4))(param_1,param_2,uVar2);
  }
  iVar1 = *(int *)(in_ECX + 0x24);
  if ((iVar1 != 0) && (0.0 < *(double *)(in_ECX + 0x60))) {
    dVar3 = *(double *)(in_ECX + 0x60) / *(double *)(in_ECX + 0x58);
    FUN_00637f30();
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    *(double *)(iVar1 + 0x10) = dVar3;
    LOCK();
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    UNLOCK();
  }
  *(undefined1 *)(in_ECX + 0x71) = 0;
  *(undefined1 *)(in_ECX + 0x70) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  ExceptionList = local_10;
  return;
}

