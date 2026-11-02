// rea decompile_all
// name: FUN_006d8fd0
// address: 0x6d8fd0
// body: available
// range: 0x6d8fd0-0x6d919c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d8fd0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int **ppiStack_68;
  uint uStack_64;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  char local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007278aa;
  local_10 = ExceptionList;
  uStack_64 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppiStack_68 = (int **)&local_34;
  local_34 = 0;
  puStack_6c = (undefined4 *)0x6d9016;
  local_14 = uStack_64;
  FUN_006ae7f0();
  ppiStack_68 = &piStack_24;
  local_8 = 0;
  puStack_6c = (undefined4 *)0x6d902c;
  puVar2 = (undefined4 *)FUN_0063bf80();
  ppiStack_68 = (int **)(puVar2 + 2);
  puStack_6c = (undefined4 *)0x6d9039;
  local_2d = (**(code **)(*(int *)*puVar2 + 0x14))();
  puStack_6c = &local_1c;
  puStack_70 = (undefined4 *)0x6d9048;
  (**(code **)(*piStack_24 + 0x54))();
  local_8 = 0xffffffff;
  if (local_2d == '\0') {
    puStack_70 = &local_3c;
    puStack_70 = (undefined4 *)FUN_00684d10();
  }
  else {
    puStack_70 = &local_34;
  }
  puStack_70 = (undefined4 *)*puStack_70;
  FUN_00684c50();
  puStack_70 = (undefined4 *)0x6d908b;
  cVar1 = (**(code **)(*(int *)*param_2 + 0x30))();
  puStack_70 = extraout_ECX;
  if (cVar1 == '\0') {
    puStack_70 = (undefined4 *)0x6d909e;
    cVar1 = FUN_00682580();
    puStack_70 = extraout_ECX_00;
    if (cVar1 == '\0') {
      puStack_70 = &local_2c;
      local_2c = 0x3f800000;
      uStack_28 = 0;
      piStack_24 = (int *)0x0;
      uStack_20 = 0;
      local_1c = 0x3f800000;
      local_18 = 0;
      (**(code **)(*(int *)*param_2 + 0x5c))(param_3);
      puStack_70 = extraout_ECX_01;
    }
  }
  uVar3 = 0x3f800000;
  if ((*(byte *)(param_1 + 0x69) & 0x10) == 0) {
    puStack_70 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_006d90f9;
    puStack_70 = (undefined4 *)0x6d90e1;
    cVar1 = FUN_006e6320();
    puStack_70 = extraout_ECX_02;
    if (cVar1 != '\0') goto LAB_006d90f9;
  }
  local_34 = 0x3f000000;
  uVar3 = local_34;
LAB_006d90f9:
  local_34 = uVar3;
  ppuVar4 = &puStack_70;
  FUN_006e8e70(local_38,(uint)(local_2d != '\0') * 2 + 0x1005812,0);
  FUN_00684d10(ppuVar4);
  FUN_00684c50();
  if (local_2d == '\0') {
    uStack_20 = 0x3f000000;
  }
  else {
    uStack_20 = 0x3f800000;
  }
  puStack_70 = &local_54;
  local_44 = 0x3f800000;
  local_40 = 0;
  local_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00682be0(param_3,&uStack_20);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

