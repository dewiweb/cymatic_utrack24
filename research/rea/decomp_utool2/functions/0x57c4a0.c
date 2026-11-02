// rea decompile_all
// name: FUN_0057c4a0
// address: 0x57c4a0
// body: available
// range: 0x57c4a0-0x57c62e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c4a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  int **ppiStack_40;
  uint uStack_3c;
  undefined4 local_2c;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007122b3;
  local_10 = ExceptionList;
  uStack_3c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uStack_3c;
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      ppiStack_40 = (int **)0x57c4e5;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') goto LAB_0057c4ef;
    }
    local_2c = 1;
  }
  else {
LAB_0057c4ef:
    local_2c = 0;
  }
  ppiStack_40 = local_24;
  local_8 = 0;
  puStack_44 = (undefined1 *)0x57c509;
  puVar3 = (undefined4 *)FUN_0063bf80();
  ppiStack_40 = (int **)(puVar3 + 2);
  puStack_44 = (undefined1 *)0x57c516;
  uVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  puStack_44 = local_1c;
  uStack_48 = 0x57c525;
  (**(code **)(*local_24[0] + 0x54))();
  uStack_48 = param_4;
  local_8 = 0xffffffff;
  FUN_0057c150(param_1,param_2,0x40800000,((float)*(int *)(param_2 + 0x1c) - 15.0) * 0.5,0x41700000,
               0x41700000,uVar2,local_2c,param_3);
  puVar3 = &uStack_48;
  uVar4 = 0x1006501;
  uStack_48 = extraout_ECX;
  FUN_006e8e70(&uStack_48,0x1006501,0);
  uVar5 = 0x57c592;
  FUN_00684c50();
  if ((*(byte *)(param_2 + 0x69) & 0x10) == 0) {
    if (*(int *)(param_2 + 0xc) == 0) goto LAB_0057c5c8;
    uStack_48 = 0x57c5a4;
    cVar1 = FUN_006e6320();
    if (cVar1 != '\0') goto LAB_0057c5c8;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    uStack_48 = 0x57c5b9;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  uStack_48 = 0x3f000000;
  uVar5 = 0x57c5c8;
  (**(code **)(*(int *)*param_1 + 0x48))();
LAB_0057c5c8:
  if (**(char **)(param_2 + 0x88) != '\0') {
    FUN_00472d90(0,*(int *)(param_2 + 0x18) + -0x16,*(undefined4 *)(param_2 + 0x1c));
    FUN_00682290(param_2 + 0x88,0x21,10,0,puVar3,uVar4,uVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

