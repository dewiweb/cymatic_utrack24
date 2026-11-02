// rea decompile_all
// name: FUN_004711e0
// address: 0x4711e0
// body: available
// range: 0x4711e0-0x471332 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004711e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 local_3c [24];
  undefined1 local_24 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007019a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  if (piVar3 != (int *)0x0) {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 8) == 1)) {
      local_5c = (void *)0x0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_40 = 1;
      local_8 = 0;
      iVar2 = FUN_00673860(local_24);
      FUN_00682020((float)*(int *)(iVar2 + 0xc));
      FUN_00471340(&local_5c,param_2);
      FID_conflict__free(local_5c);
      ExceptionList = local_10;
      return;
    }
    if (1 < piVar3[1]) {
      piVar3 = (int *)(**(code **)(*piVar3 + 4))(&local_14,DAT_00c76070 ^ (uint)&stack0xfffffffc);
      iVar2 = *in_ECX;
      *in_ECX = *piVar3;
      *piVar3 = iVar2;
      if (local_14 != (undefined4 *)0x0) {
        piVar3 = local_14 + 1;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*local_14)(1);
        }
      }
    }
    iVar2 = in_ECX[0x13];
    iVar1 = *(int *)*in_ECX;
    uVar4 = FUN_00464550(local_3c,param_2);
    piVar3 = (int *)(**(code **)(iVar1 + 0x20))(&param_2,param_1,uVar4,iVar2);
    iVar2 = *in_ECX;
    *in_ECX = *piVar3;
    *piVar3 = iVar2;
    if (param_2 != (undefined4 *)0x0) {
      piVar3 = param_2 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*param_2)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

