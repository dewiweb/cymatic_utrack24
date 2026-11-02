// rea decompile_all
// name: FUN_0050bb50
// address: 0x50bb50
// body: available
// range: 0x50bb50-0x50bcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050bb50(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int in_ECX;
  int local_30;
  int local_2c;
  int local_8;
  
  FUN_00521b40(&DAT_0095c848);
  if (((*(char *)(in_ECX + 0xae) == '\0') || (*param_2 != DAT_0095100c)) ||
     (param_2[1] != DAT_00951014)) {
    if (*(char *)(in_ECX + 0xaf) != '\0') {
      iVar1 = FUN_00526ac0(param_2);
      if (iVar1 != 0) goto LAB_0050bcec;
    }
    local_8 = FUN_0051f960(param_2);
    if (local_8 == 0) {
      local_8 = FUN_0051b100(in_ECX,param_2,param_3,param_5,param_6,param_4,param_8,param_9,param_7,
                             param_10,param_11,param_12,param_13,param_14);
    }
    if (local_8 != 0) {
      *(undefined1 *)(local_8 + 0xd8) = 1;
      if (local_8 == 0) {
        local_2c = 0;
      }
      else {
        local_2c = local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc);
      }
      if (in_ECX == 0) {
        local_30 = 0;
      }
      else {
        local_30 = in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4);
      }
      FUN_00537e00(1,local_30,param_1,local_2c);
      (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
    }
  }
LAB_0050bcec:
  FUN_0050f2a0(0);
  return;
}

