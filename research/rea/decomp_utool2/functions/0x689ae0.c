// rea decompile_all
// name: FUN_00689ae0
// address: 0x689ae0
// body: available
// range: 0x689ae0-0x689be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00689ae0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00721129;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  uVar1 = 0;
  local_2c = &DAT_00bfe12c;
  local_28 = &DAT_00bfe12c;
  local_24 = &DAT_00bfe12c;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_8 = 0;
  iVar4 = FUN_00689a20(*param_1,&local_30);
  if (iVar4 != 0) {
    local_54 = *param_1;
    local_4c = param_1[2];
    local_48 = param_1[3];
    local_44 = param_1[4];
    local_40 = param_1[5];
    local_3c = param_1[6];
    local_38 = *(undefined1 *)(param_1 + 7);
    local_34 = param_1[8];
    local_50 = uStack_14;
    FUN_006897a0(&local_54);
    uVar1 = FUN_006892a0(&local_54,param_2);
    piVar5 = (int *)(*(int *)(in_ECX + 4) + 0xc);
    LOCK();
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = 1;
      iVar4 = 0;
    }
    UNLOCK();
    if ((iVar4 == 0) && (cVar2 = FUN_0063e270(uVar3), cVar2 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
      UNLOCK();
    }
  }
  FUN_004915a0();
  ExceptionList = local_10;
  return uVar1;
}

