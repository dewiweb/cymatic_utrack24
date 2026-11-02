// rea decompile_all
// name: FUN_006e2370
// address: 0x6e2370
// body: available
// range: 0x6e2370-0x6e240a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e2370(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_006d1d80(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x6c))();
  }
  if (in_ECX == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_0040de70(in_ECX);
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_004b1ed0(&local_14,FUN_00410548,in_ECX,param_1);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_14 + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

