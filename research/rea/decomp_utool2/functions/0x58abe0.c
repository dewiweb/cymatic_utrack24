// rea decompile_all
// name: FUN_0058abe0
// address: 0x58abe0
// body: available
// range: 0x58abe0-0x58ad5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058abe0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713b8a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  FUN_006104a0();
  uStack_74 = 0x58ac3c;
  FUN_004557e0();
  local_48 = (undefined1 *)&uStack_74;
  local_44 = (undefined1 *)&uStack_78;
  local_8 = 0;
  local_4c = &stack0xffffff90;
  FUN_00410ea0(&local_58);
  local_8._0_1_ = 1;
  uVar5 = extraout_ECX;
  uVar6 = extraout_ECX;
  uVar2 = FUN_005bdda0(extraout_ECX,extraout_ECX);
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar4 = extraout_ECX_00;
  FUN_00637690(uVar2);
  FUN_006377c0(uVar4);
  FUN_00637730(uVar5);
  FUN_006377c0(uVar6);
  FUN_00637730();
  uStack_78 = 0x58acc9;
  FUN_006377c0();
  uStack_74 = 0x58acd6;
  FUN_00637730();
  piVar3 = (int *)(local_54 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_74 = 0x58acf8;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_58 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_74 = 0x58ad1b;
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_40 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_74 = 0x58ad3b;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

