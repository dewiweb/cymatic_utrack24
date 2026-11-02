// rea decompile_all
// name: FUN_0047c466
// address: 0x47c466
// body: available
// range: 0x47c466-0x47c7c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c466(undefined4 param_1,int *param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *param_2;
  local_14 = *(undefined4 *)(iVar1 + 0x10);
  local_10 = *(undefined4 *)(iVar1 + 0x14);
  local_c = *(undefined4 *)(iVar1 + 0x18);
  local_8 = *(undefined4 *)(iVar1 + 0x1c);
  if (param_3 == '\0') {
    FUN_00478b0d(*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c));
    FUN_0047c254(param_7,*(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c),local_14,
                 local_10,param_4);
  }
  else {
    FUN_00478b0d(local_14,local_10);
  }
  local_1c = 1;
  if (1 < param_2[2]) {
    local_18 = 0x30;
    do {
      puVar3 = (undefined4 *)(*param_2 + local_18);
      FUN_0047bf68(param_6,param_5,param_4,local_14,local_10,local_c,local_8,puVar3[4],puVar3[5],
                   puVar3[6],puVar3[7],*puVar3,puVar3[1]);
      local_14 = puVar3[4];
      local_18 = local_18 + 0x30;
      local_10 = puVar3[5];
      local_1c = local_1c + 1;
      local_c = puVar3[6];
      local_8 = puVar3[7];
    } while (local_1c < param_2[2]);
  }
  iVar1 = param_2[2];
  puVar3 = (undefined4 *)*param_2;
  if (param_3 == '\0') {
    FUN_00478ba1(local_c,local_8);
    FUN_0047c254(param_7,local_c,local_8,puVar3[iVar1 * 0xc + -4],puVar3[iVar1 * 0xc + -3],param_4);
  }
  else {
    FUN_0047bf68(param_6,param_5,param_4,local_14,local_10,local_c,local_8,puVar3[4],puVar3[5],
                 puVar3[6],puVar3[7],*puVar3,puVar3[1]);
    FUN_00478e1f();
    FUN_00478b0d(puVar3[iVar1 * 0xc + -4],puVar3[iVar1 * 0xc + -3]);
  }
  local_14 = puVar3[iVar1 * 0xc + -4];
  local_10 = puVar3[iVar1 * 0xc + -3];
  local_18 = param_2[2] + -2;
  local_c = puVar3[iVar1 * 0xc + -2];
  local_8 = puVar3[iVar1 * 0xc + -1];
  if (-1 < local_18) {
    iVar2 = local_18 * 0x30;
    do {
      iVar4 = *param_2 + iVar2;
      FUN_0047bf68(param_6,param_5,param_4,local_14,local_10,local_c,local_8,
                   *(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
                   *(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      local_14 = *(undefined4 *)(iVar4 + 0x20);
      iVar2 = iVar2 + -0x30;
      local_10 = *(undefined4 *)(iVar4 + 0x24);
      local_18 = local_18 + -1;
      local_c = *(undefined4 *)(iVar4 + 0x28);
      local_8 = *(undefined4 *)(iVar4 + 0x2c);
    } while (-1 < local_18);
  }
  if (param_3 == '\0') {
    FUN_00478ba1(local_c,local_8);
  }
  else {
    FUN_0047bf68(param_6,param_5,param_4,local_14,local_10,local_c,local_8,puVar3[iVar1 * 0xc + -4],
                 puVar3[iVar1 * 0xc + -3],puVar3[iVar1 * 0xc + -2],puVar3[iVar1 * 0xc + -1],
                 puVar3[iVar1 * 0xc + -10],puVar3[iVar1 * 0xc + -9]);
  }
  FUN_00478e1f();
  return;
}

