// rea decompile_all
// name: FUN_00636ad0
// address: 0x636ad0
// body: available
// range: 0x636ad0-0x636cb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00636ad0(undefined4 param_1,undefined2 param_2,int param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined *puVar4;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_1c;
  undefined1 *local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071ed7f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &DAT_00bfe12c;
  if ((char)param_2 != '\0') {
    FUN_0062ecc0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    FUN_0045d120();
    param_2 = 0x20;
    FUN_00621830(&param_2);
    uVar1 = FUN_0061d580(&local_1c,extraout_ECX);
    FUN_00636ec0(uVar1);
    local_14[0] = 0x20;
    FUN_00621830(local_14);
    FUN_0062edc0();
    FUN_0045d120();
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if ((char)param_3 == '\0') goto LAB_00636c78;
    param_2 = 0x20;
    FUN_00621830(&param_2);
  }
  if ((char)param_3 != '\0') {
    param_3 = FUN_0061d810();
    FUN_0061d870();
    FUN_0045d120();
    puVar4 = &DAT_00c0121c;
    if (9 < param_3) {
      puVar4 = &DAT_00c01218;
    }
    FUN_00621830(puVar4);
    FUN_0045d120();
    uVar1 = extraout_ECX_00;
    if (param_4 != '\0') {
      iVar2 = FUN_0061d7a0();
      puVar4 = &DAT_00c01224;
      if (9 < iVar2) {
        puVar4 = &DAT_00c01220;
      }
      FUN_00621830(puVar4);
      FUN_0045d120();
      uVar1 = extraout_ECX_01;
    }
    if (param_5 == '\0') {
      iVar2 = FUN_0061d870(uVar1);
      puVar4 = &DAT_00c0122c;
      if (iVar2 < 0xc) {
        puVar4 = &DAT_00c01228;
      }
      FUN_00621830(puVar4);
    }
  }
LAB_00636c78:
  FUN_0062cce0(param_1);
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

