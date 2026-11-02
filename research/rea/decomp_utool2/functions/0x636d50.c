// rea decompile_all
// name: FUN_00636d50
// address: 0x636d50
// body: available
// range: 0x636d50-0x636eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00636d50(longlong param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071edcc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((((uint)param_1 == 1) && (param_1._4_4_ == 0)) ||
     ((param_1._4_4_ < 1 && ((param_1 < 0 || ((uint)param_1 < 0x400)))))) {
    puVar4 = (undefined4 *)FUN_00633ba0((uint)param_1,param_1._4_4_);
    local_8 = 1;
    bVar3 = false;
    bVar2 = true;
    goto LAB_00636e38;
  }
  if (param_1._4_4_ < 1) {
    if ((param_1 < 0) || ((uint)param_1 < 0x100000)) {
      param_1 = 0x4090000000000000;
    }
    else {
      if ((0 < param_1._4_4_) || ((-1 < param_1 && (0x3fffffff < (uint)param_1))))
      goto LAB_00636e01;
      param_1 = 0x4130000000000000;
    }
  }
  else {
LAB_00636e01:
    param_1 = 0x41d0000000000000;
  }
  uVar6 = 1;
  FUN_006f5730(1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar4 = (undefined4 *)FUN_00637cf0(uVar6);
  local_8 = 0;
  bVar3 = true;
  bVar2 = false;
LAB_00636e38:
  uVar6 = *puVar4;
  *puVar4 = &DAT_00bfe12c;
  FUN_006377c0(uVar6);
  if (bVar2) {
    piVar5 = (int *)(param_1._4_4_ + -8);
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
  if ((bVar3) && (piVar5 = (int *)(in_ECX + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

