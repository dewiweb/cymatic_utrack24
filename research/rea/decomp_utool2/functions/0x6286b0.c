// rea decompile_all
// name: FUN_006286b0
// address: 0x6286b0
// body: available
// range: 0x6286b0-0x62884b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006286b0(undefined4 param_1,char param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dac7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_00628510(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if ((param_2 == '\0') && (*(int *)(in_ECX + 8) < 2)) {
    local_18 = *param_3;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_1c = &local_18;
    local_8 = 1;
    local_20 = 1;
  }
  else {
    FUN_0045c990(&DAT_00c00ac8);
    local_1c = &local_24;
    local_8 = 2;
    local_20 = 2;
  }
  iVar2 = local_18;
  uVar6 = 8;
  local_14 = local_20;
  pvVar3 = operator_new(8);
  local_8 = 3;
  FUN_00634140();
  FUN_00637730(uVar6);
  *(undefined4 *)((int)pvVar3 + 4) = 0xffffffff;
  *(void **)(in_ECX + 0xc) = pvVar3;
  local_8 = 4;
  uVar5 = local_20;
  if ((local_20 & 2) != 0) {
    uVar5 = local_20 & 0xfffffffd;
    piVar4 = (int *)(local_24 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  if (((uVar5 & 1) != 0) && (piVar4 = (int *)(iVar2 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar2 = *param_3;
  *(int *)(in_ECX + 0x10) = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00634140();
  *(undefined4 *)(in_ECX + 0x20) = param_4;
  *(char *)(in_ECX + 0x24) = param_2;
  *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 **)(in_ECX + 0x2c) = &DAT_00bfe12c;
  ExceptionList = local_10;
  return in_ECX;
}

