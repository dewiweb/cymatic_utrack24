// rea decompile_all
// name: FUN_006e2100
// address: 0x6e2100
// body: available
// range: 0x6e2100-0x6e2277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e2100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  float in_XMM0_Da;
  undefined4 uVar6;
  int local_24;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728335;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  iVar1 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  (**(code **)(*(int *)(iVar1 + 0x28) + 8))(&local_14,in_ECX + -0x7c);
  local_8 = 0;
  if (*(char *)(in_ECX + 0x53) == '\0') {
    local_24 = SUB84((double)((float)local_14[5] + 0.5) + 6755399441055744.0,0);
    FUN_006e9790(*(undefined4 *)(in_ECX + -0x6c),*(undefined4 *)(in_ECX + -0x68),
                 *(undefined4 *)(param_1 + 0x18),
                 local_24 + *(int *)(in_ECX + 0x40) + *(int *)(in_ECX + 0x38) + 6);
    uVar6 = *(undefined4 *)(in_ECX + -0x60);
    iVar1 = *(int *)(in_ECX + -100);
    iVar4 = *(int *)(param_1 + 0x14) - *(int *)(local_18 + -0x60);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    uVar2 = FUN_0063ae00(&local_1c);
    local_8._0_1_ = 1;
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_006831f0(uVar2);
    local_24 = SUB84((double)(in_XMM0_Da + 0.5) + 6755399441055744.0,0);
    local_24 = local_24 + *(int *)(local_18 + 0x3c) + *(int *)(local_18 + 0x44);
    if (iVar1 < local_24) {
      local_24 = iVar1;
    }
    FUN_006e9790(*(undefined4 *)(in_ECX + -0x6c),*(undefined4 *)(in_ECX + -0x68),local_24,uVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    uVar6 = *(undefined4 *)(in_ECX + -0x60);
    iVar1 = *(int *)(in_ECX + -100);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x10) - iVar1;
  }
  FUN_006e9790(iVar3,iVar4,iVar1,uVar6);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_14 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

