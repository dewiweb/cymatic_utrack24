// rea decompile_all
// name: FUN_005eece0
// address: 0x5eece0
// body: available
// range: 0x5eece0-0x5eef1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eece0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6,uint param_7,uint param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 *param_15,undefined4 param_16)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c [33];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_90 = param_1;
  if (param_6 < 0x11) {
    iVar2 = 0x1f;
    if (param_7 != 0) {
      for (; param_7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar1 = (0x20 - iVar2) - param_6;
    if (uVar1 < param_8) {
      param_8 = uVar1;
    }
  }
  iVar2 = FUN_005fb800(param_8,local_8c,&local_98);
  if (iVar2 != 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = 0x1f;
  if (param_7 != 0) {
    for (; param_7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (iVar2 + param_6 + param_8 < 0x21) {
    if ((param_6 < 0x11) && (param_8 < 0x11)) {
      iVar2 = in_EDX + param_7 * 4;
      pcVar3 = *(code **)(*(int *)(local_94 + 4) + 0x1c40);
    }
    else {
      iVar2 = in_EDX + param_7 * 4;
      pcVar3 = *(code **)(*(int *)(local_94 + 4) + 0x1c38);
    }
  }
  else {
    iVar2 = in_EDX + param_7 * 4;
    pcVar3 = *(code **)(*(int *)(local_94 + 4) + 0x1c3c);
  }
  (*pcVar3)(iVar2,param_5 - param_7,local_8c,param_7,local_98,local_90);
  puVar4 = param_15 + 1;
  *puVar4 = 0;
  param_15[3] = param_16;
  param_15[0x47] = local_90;
  *param_15 = 3;
  FUN_005eeac0(param_2,param_3,param_5 - param_7,param_7,param_9,param_10,param_11,param_12,param_6,
               param_13,puVar4,puVar4);
  param_15[5] = param_8;
  param_15[4] = param_7;
  param_15[6] = local_98;
  puVar4 = local_8c;
  puVar5 = param_15 + 7;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = 0;
  if (param_7 != 0) {
    puVar4 = param_15 + 0x27;
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *puVar4 = *(undefined4 *)(in_EDX + iVar2);
      puVar4 = puVar4 + 1;
    } while (uVar1 < param_7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

