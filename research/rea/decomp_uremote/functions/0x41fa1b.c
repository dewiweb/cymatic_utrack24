// rea decompile_all
// name: FUN_0041fa1b
// address: 0x41fa1b
// body: available
// range: 0x41fa1b-0x41fbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041fa1b(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *local_4c;
  int local_48;
  uint local_44;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x10)) {
    if (param_3 == 2) {
      bVar6 = *(undefined **)(param_1 + 0xc) == &DAT_008fc384;
    }
    else {
      bVar6 = *(undefined **)(param_1 + 0xc) == &DAT_008fbe8c;
    }
    if (bVar6) {
      return 0x13;
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_00410751(*param_4,param_4[1]);
    }
    FUN_004106d2();
    uVar5 = local_1c + 0x20U & 0xffffffc0;
    local_10 = local_10 + 0x20 & 0xffffffc0;
    local_18 = local_18 + 0x20 & 0xffffffc0;
    local_8 = (int)((local_14 + 0x20U & 0xffffffc0) - uVar5) >> 6;
    uVar4 = (int)(local_10 - local_18) >> 6;
    if ((local_8 < 0x10000) && (uVar4 < 0x10000)) {
      local_c = *(undefined4 *)(param_1 + 8);
      if ((*(byte *)(*(int *)(param_2 + 0x9c) + 4) & 1) != 0) {
        FUN_00411a5c(*(undefined4 *)(param_2 + 0x58));
        *(undefined4 *)(param_2 + 0x58) = 0;
        puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      if ((param_3 & 2) == 0) {
        uVar2 = local_8 + 3 & 0xfffffffc;
        *(undefined1 *)(param_2 + 0x5e) = 2;
        *(undefined2 *)(param_2 + 0x5c) = 0x100;
      }
      else {
        uVar2 = local_8 + 0xf >> 3 & 0x1ffffffe;
        *(undefined1 *)(param_2 + 0x5e) = 1;
      }
      *(uint *)(param_2 + 0x4c) = uVar4;
      *(uint *)(param_2 + 0x50) = local_8;
      *(uint *)(param_2 + 0x54) = uVar2;
      uVar3 = FUN_00411976(uVar4,0,&local_8);
      *(undefined4 *)(param_2 + 0x58) = uVar3;
      if (local_8 == 0) {
        puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
        *puVar1 = *puVar1 | 1;
        FUN_00410751(-uVar5,-local_18);
        local_48 = param_2 + 0x6c;
        local_44 = (uint)(*(char *)(param_2 + 0x5e) == '\x02');
        local_4c = (uint *)(param_2 + 0x4c);
        local_8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_4c);
        FUN_00410751(uVar5,local_18);
        if (local_8 == 0) {
          *(undefined4 *)(param_2 + 0x48) = 0x62697473;
          *(int *)(param_2 + 100) = (int)(local_1c + 0x20U) >> 6;
          *(int *)(param_2 + 0x68) = (int)local_10 >> 6;
        }
      }
    }
    else {
      local_8 = 6;
    }
  }
  else {
    local_8 = 6;
  }
  return local_8;
}

