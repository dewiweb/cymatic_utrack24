// rea decompile_all
// name: FUN_00696b80
// address: 0x696b80
// body: available
// range: 0x696b80-0x696cb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00696b80(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00721f54;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *param_3;
  *param_1 = iVar1;
  piVar5 = (int *)(iVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_14 = 1;
  local_18 = in_ECX;
  if (**(char **)(in_ECX + 4) != '\0') {
    piVar5 = (int *)FUN_00620ac0(&param_3,*(char **)(in_ECX + 4));
    iVar1 = *param_1;
    *param_1 = *piVar5;
    *piVar5 = iVar1;
    piVar5 = param_3 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if (0 < *(int *)(in_ECX + 8)) {
    pcVar2 = *(code **)(*(int *)(param_2 + 0x70) + 8);
    if (pcVar2 == FUN_0048c960) {
      local_20 = *(int *)(param_2 + 0xf4);
      local_1c = *(undefined4 *)(param_2 + 0xf8);
      piVar5 = &local_20;
    }
    else {
      piVar5 = (int *)(*pcVar2)(&local_20,uVar4);
    }
    iVar1 = piVar5[1];
    iVar3 = *piVar5;
    iVar6 = FUN_00693140();
    piVar5 = (int *)FUN_006379a0(&param_3,0,(*(int *)(local_18 + 8) + (iVar1 - iVar3)) - iVar6);
    iVar1 = *param_1;
    *param_1 = *piVar5;
    *piVar5 = iVar1;
    piVar5 = param_3 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

