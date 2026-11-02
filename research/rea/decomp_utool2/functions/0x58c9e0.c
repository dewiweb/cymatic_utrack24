// rea decompile_all
// name: FUN_0058c9e0
// address: 0x58c9e0
// body: available
// range: 0x58c9e0-0x58cac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058c9e0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 **ppuStack_2c;
  undefined4 **ppuStack_28;
  uint uStack_24;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713df7;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppuStack_28 = &local_14;
  ppuStack_2c = (undefined4 **)0x58ca30;
  FUN_0053f050();
  local_8 = CONCAT31(local_8._1_3_,1);
  ppuStack_2c = (undefined4 **)local_14[4];
  uVar3 = local_14[5];
  param_2[0xc] = ppuStack_2c;
  param_2[0xd] = uVar3;
  ppuStack_28 = ppuStack_2c;
  FUN_0058e7e0(&ppuStack_28);
  FUN_00410ea0(&ppuStack_2c);
  ppuStack_2c = (undefined4 **)FUN_00591a70();
  ppuStack_28 = (undefined4 **)0x1;
  FUN_0062f560();
  ppuStack_28 = (undefined4 **)0x58ca86;
  FUN_00591890();
  LOCK();
  piVar1 = local_14 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    ppuStack_28 = (undefined4 **)0x1;
    ppuStack_2c = (undefined4 **)0x58ca9b;
    (**(code **)*local_14)();
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ppuStack_28 = (undefined4 **)0x1;
      ppuStack_2c = (undefined4 **)0x58cab0;
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
}

