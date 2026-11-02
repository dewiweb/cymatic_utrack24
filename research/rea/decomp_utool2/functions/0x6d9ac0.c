// rea decompile_all
// name: FUN_006d9ac0
// address: 0x6d9ac0
// body: available
// range: 0x6d9ac0-0x6d9c24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006d9ac0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  float fVar8;
  int local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072791a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(code **)(*in_ECX + 8) == FUN_006a7780) {
    iVar7 = (param_2 / 3) * 2 + 2;
  }
  else {
    iVar7 = -2;
  }
  uVar3 = FUN_006378b0(&local_18);
  local_8 = 0;
  local_14 = (float)param_2 * 0.6;
  operator_new(0x28);
  fVar8 = local_14;
  puVar4 = (undefined4 *)FUN_00468a40(0);
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006831f0(uVar3);
  FUN_004363b0(uVar2);
  iVar7 = (int)fVar8 + iVar7;
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar4 + 1;
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar6 = *(int *)(param_1 + 0xe8);
  if (iVar6 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x8c);
    if ((iVar1 == 2) || (iVar1 == 3)) {
      iVar6 = *(int *)(iVar6 + 0x1c);
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x18);
    }
    iVar7 = iVar7 + iVar6;
  }
  iVar6 = param_2 * 2;
  if ((param_2 * 2 <= iVar7) && (iVar6 = iVar7, param_2 * 8 < iVar7)) {
    iVar6 = param_2 * 8;
  }
  ExceptionList = local_10;
  return iVar6;
}

