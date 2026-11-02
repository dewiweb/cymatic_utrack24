// rea decompile_all
// name: FUN_00664ec0
// address: 0x664ec0
// body: available
// range: 0x664ec0-0x665025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664ec0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint local_28;
  uint local_24;
  byte local_18 [16];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  puVar2 = (undefined4 *)param_1[6];
  iVar6 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') goto LAB_00664ef2;
    pbVar7 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
LAB_00664ef2:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar7 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  uVar4 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar7;
  iVar6 = iVar6 + -1;
  pbVar7 = pbVar7 + 1;
  if ((int)uVar4 < 0xe) {
    local_28 = 0;
    if (0 < (int)uVar4) {
      local_28 = uVar4;
    }
    local_24 = 0;
    if (local_28 == 0) goto LAB_00664f99;
  }
  else {
    local_28 = 0xe;
    local_24 = 0;
  }
  do {
    if (iVar6 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') goto LAB_00664ef2;
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    local_18[local_24] = *pbVar7;
    pbVar7 = pbVar7 + 1;
    local_24 = local_24 + 1;
  } while (local_24 < local_28);
LAB_00664f99:
  iVar5 = uVar4 - local_28;
  if (param_1[0x5f] == 0xe0) {
    FUN_00665110(local_28,iVar5);
  }
  else if (param_1[0x5f] == 0xee) {
    FUN_00665030(local_28,iVar5);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x44;
    *(int *)(*param_1 + 0x18) = param_1[0x5f];
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = pbVar7;
  puVar2[1] = iVar6;
  if (0 < iVar5) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

