// rea decompile_all
// name: FUN_006c6c40
// address: 0x6c6c40
// body: available
// range: 0x6c6c40-0x6c6d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006c6c40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  undefined1 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725e6b;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar4 = FUN_006e9630(param_1,param_2);
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  if (*(char *)(in_ECX + 0xe2) == '\0') {
    ExceptionList = local_10;
    return 1;
  }
  FUN_006c70b0(&param_2);
  puVar3 = param_2;
  local_8 = 0;
  if (param_2 == (undefined4 *)0x0) {
LAB_006c6d21:
    uVar7 = 1;
  }
  else {
    if ((0 < *(int *)(in_ECX + 0xec)) && (0 < *(int *)(in_ECX + 0xf0))) {
      iVar6 = FUN_00672ea0(&param_1,((param_1 - *(int *)(in_ECX + 0xe4)) * param_2[3]) /
                                    *(int *)(in_ECX + 0xec),
                           (((int)puVar2 - *(int *)(in_ECX + 0xe8)) * param_2[4]) /
                           *(int *)(in_ECX + 0xf0));
      if (*(byte *)(in_ECX + 0xe2) < *(byte *)(iVar6 + 3)) goto LAB_006c6d21;
    }
    uVar7 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar3)(1,uVar5);
    }
  }
  ExceptionList = local_10;
  return uVar7;
}

