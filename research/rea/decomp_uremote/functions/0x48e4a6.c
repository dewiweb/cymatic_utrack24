// rea decompile_all
// name: FUN_0048e4a6
// address: 0x48e4a6
// body: available
// range: 0x48e4a6-0x48e5a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e4a6(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_1[0x6a];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_0048e18a;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0048e0e1;
    }
    *(code **)(iVar1 + 8) = FUN_0041f3a2;
    iVar4 = param_1[0x1c];
    if (iVar4 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar4) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      iVar4 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,iVar4);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_0048e721(*(undefined4 *)(iVar1 + 0x20),iVar4);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_0048e3fa();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0048d670;
    *(undefined1 **)(iVar1 + 8) = &LAB_0048e486;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar4 = 0;
    do {
      FUN_0048e721(*(undefined4 *)(iVar2 + iVar4 * 4),0x1000);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

