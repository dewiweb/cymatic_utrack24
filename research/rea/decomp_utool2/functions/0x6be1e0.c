// rea decompile_all
// name: FUN_006be1e0
// address: 0x6be1e0
// body: available
// range: 0x6be1e0-0x6be28c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006be1e0(undefined4 **param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 *local_20;
  void *local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00724e35;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0063a890(&local_20,param_1,in_ECX);
  local_8 = 0;
  FUN_006bea40(&local_20,param_3,extraout_ECX);
  puVar3 = local_20;
  if ((0 < local_14) && (local_20 != (undefined4 *)0x0)) {
    param_1 = &local_20;
    uVar5 = FUN_00447770(&param_1);
    if (uVar5 < (uint)puVar3[0xb]) {
      FUN_00410320(uVar5);
    }
  }
  FID_conflict__free(local_1c);
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_20 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_20)(1,uVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

