// rea decompile_all
// name: FUN_00438f40
// address: 0x438f40
// body: available
// range: 0x438f40-0x43914f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_3c [4];
  uint local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd07b;
  local_14 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  iVar2 = FUN_0040e3ca(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  if ((iVar2 == 0) && ((*(byte *)(local_40 + 8) & 1) != 0)) {
    FUN_004652cd(uVar1);
    FUN_004652cd();
    local_c = 0;
    local_38 = (uint)((*(byte *)(extraout_EDX + 0xc) & 2) != 0);
    if ((*(byte *)(extraout_EDX + 0xc) & 1) != 0) {
      local_38 = local_38 | 2;
    }
    FUN_0046537e(local_3c);
    FUN_00465317(local_30);
    FUN_004652d6();
    uVar3 = thunk_FUN_00465b22(local_30);
    thunk_FUN_00465aae(uVar3);
    FUN_0046537e(local_3c);
    FUN_00465317(local_34);
    FUN_004652d6();
    local_2c = param_2;
    local_28 = param_3;
    local_24 = 0;
    FUN_0046537e(local_44);
    local_c._0_1_ = 1;
    uVar3 = thunk_FUN_00465aae(local_44);
    uVar3 = thunk_FUN_00465aae(uVar3);
    uVar3 = thunk_FUN_00465aae(uVar3);
    thunk_FUN_00465aae(uVar3);
    if (((local_38 == 3) || (local_38 == 1)) || (local_38 == 2)) {
      thunk_FUN_00465aae(local_44);
    }
    else if (local_38 != 0) {
      uVar3 = FUN_00465858(local_38);
      local_c._0_1_ = 2;
      thunk_FUN_00465aae(local_44);
      thunk_FUN_00465ac3(uVar3);
      local_c._0_1_ = 1;
      FUN_004652d6();
    }
    FUN_0046d22e(local_44);
    FUN_0040f070();
    FUN_00439532(&local_38);
    FUN_004652d6();
    FUN_004652d6();
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return;
}

