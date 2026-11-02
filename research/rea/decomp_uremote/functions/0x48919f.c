// rea decompile_all
// name: FUN_0048919f
// address: 0x48919f
// body: available
// range: 0x48919f-0x489244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048919f(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 0x1a0);
  if (*(char *)(iVar3 + 0x24) == '\0') {
    uVar4 = 2;
    if (*(uint *)(iVar3 + 0x2c) < 2) {
      uVar4 = *(uint *)(iVar3 + 0x2c);
    }
    uVar2 = param_7 - *param_6;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    puVar1 = (undefined4 *)(param_5 + *param_6 * 4);
    local_c = *puVar1;
    if (uVar4 < 2) {
      local_8 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined1 *)(iVar3 + 0x24) = 1;
    }
    else {
      local_8 = puVar1[1];
    }
    (**(code **)(iVar3 + 0xc))(param_1,param_2,*param_3,&local_c);
  }
  else {
    uVar4 = 1;
    FUN_0048e6d5(param_5 + *param_6 * 4,0,*(undefined4 *)(iVar3 + 0x28));
    *(undefined1 *)(iVar3 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar4;
  *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) - uVar4;
  if (*(char *)(iVar3 + 0x24) == '\0') {
    *param_3 = *param_3 + 1;
  }
  return;
}

