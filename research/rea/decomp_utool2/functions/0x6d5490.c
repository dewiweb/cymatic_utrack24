// rea decompile_all
// name: FUN_006d5490
// address: 0x6d5490
// body: available
// range: 0x6d5490-0x6d556d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006d5490(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007273f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (**(char **)(in_ECX + 0x80) != '\0') {
    piVar2 = (int *)FUN_00643f40();
    if (*(int *)(*param_2 + 0xc) != *piVar2) {
      iVar3 = FUN_00448730(*(undefined4 *)(*param_2 + 0xc));
      if (iVar3 != 0) goto LAB_006d554e;
    }
    puVar1 = (undefined4 *)*param_2;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      puVar1[1] = puVar1[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    FUN_00643e40();
    FUN_0063edd0();
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar1 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar1)();
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
LAB_006d554e:
  FUN_0063eee0();
  ExceptionList = local_10;
  return param_1;
}

