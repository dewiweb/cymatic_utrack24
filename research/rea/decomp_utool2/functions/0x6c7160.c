// rea decompile_all
// name: FUN_006c7160
// address: 0x6c7160
// body: available
// range: 0x6c7160-0x6c72d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7160(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 **ppuStack_50;
  undefined1 *local_4c;
  undefined4 *local_48;
  uint uStack_44;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725eec;
  local_10 = ExceptionList;
  uStack_44 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (undefined4 *)0x0;
  local_4c = (undefined1 *)0x1001f00;
  ppuStack_50 = &local_14;
  local_14 = (undefined4 *)0x0;
  puStack_54 = (undefined1 *)0x6c71a1;
  FUN_006e8e70();
  local_48 = extraout_ECX;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      local_48 = (undefined4 *)0x6c71b3;
      cVar4 = FUN_006e6320();
      local_48 = extraout_ECX_00;
      if (cVar4 == '\0') goto LAB_006c720f;
    }
    if ((char)param_2 == '\0') {
      param_2 = local_14;
      local_48 = local_14;
    }
    else if (param_3 == '\0') {
      local_48 = &param_2;
      local_4c = (undefined1 *)0x6c71f4;
      local_48 = (undefined4 *)FUN_006841a0();
      local_48 = (undefined4 *)*local_48;
    }
    else {
      local_48 = &param_2;
      local_4c = (undefined1 *)0x6c71d7;
      local_48 = (undefined4 *)FUN_006841a0();
      local_48 = (undefined4 *)*local_48;
    }
  }
  else {
LAB_006c720f:
    local_4c = (undefined1 *)&local_48;
    ppuStack_50 = (undefined4 **)0x6c7221;
    FUN_00684d10();
  }
  local_4c = (undefined1 *)0x6c722b;
  FUN_00684c50();
  local_48 = &param_2;
  local_4c = (undefined1 *)0x6c7236;
  puVar5 = (undefined4 *)FUN_006c7320();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    local_48 = (undefined4 *)0x6c7250;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  local_4c = (undefined1 *)0x6c7258;
  local_48 = puVar5;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      local_4c = (undefined1 *)0x1;
      ppuStack_50 = (undefined4 **)0x6c727c;
      (**(code **)*param_2)();
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x118);
  puStack_54 = local_24;
  local_4c = (undefined1 *)0x0;
  ppuStack_50 = (undefined4 **)0x1;
  puStack_58 = local_34;
  uStack_5c = 0x6c729b;
  FUN_006e6400();
  puStack_58 = (undefined1 *)0x6c72a2;
  FUN_00418f80();
  local_4c = (undefined1 *)0x1;
  ppuStack_50 = (undefined4 **)(uVar3 & 0x47 | 0x20);
  FUN_0040e4d0(auStack_60);
  FUN_006830c0(in_ECX + 0x88);
  ExceptionList = local_10;
  return;
}

