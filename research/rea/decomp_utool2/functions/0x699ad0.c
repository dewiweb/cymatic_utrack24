// rea decompile_all
// name: FUN_00699ad0
// address: 0x699ad0
// body: available
// range: 0x699ad0-0x699b96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00699ad0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined1 local_60 [8];
  int local_58;
  int local_54;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007220bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != (int *)0x0) {
    iVar2 = FUN_004b1810(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (iVar2 != 0) {
      (**(code **)(*in_ECX + 0xb0))(&param_2,param_2,&local_18,&local_14);
      local_8 = 0;
      FUN_006cff90(local_60,in_ECX);
      local_20 = local_18 - local_58;
      local_1c = local_14 - local_54;
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      FUN_006e3f40(param_3,in_ECX,param_2,1,&local_20);
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = param_2 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*param_2)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

