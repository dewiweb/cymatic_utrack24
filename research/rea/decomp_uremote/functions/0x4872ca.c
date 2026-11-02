// rea decompile_all
// name: FUN_004872ca
// address: 0x4872ca
// body: available
// range: 0x4872ca-0x4873d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004872ca(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x184);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x188) + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  iVar3 = *(int *)(iVar2 + 0x44);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_00487377;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x18c) + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),
               (uint *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x34) < *(uint *)(iVar2 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)(iVar2 + 0x48) = *(int *)(param_1 + 0x118) + -1;
  if (*(int *)(iVar2 + 0x4c) == *(int *)(param_1 + 0x11c)) {
    FUN_00487164();
  }
  *(undefined4 *)(iVar2 + 0x44) = 1;
LAB_00487377:
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x18c) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x48) <= *puVar1) {
    if (*(int *)(iVar2 + 0x4c) == 1) {
      FUN_00487090();
    }
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) ^ 1;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *puVar1 = *(int *)(param_1 + 0x118) + 1;
    *(int *)(iVar2 + 0x48) = *(int *)(param_1 + 0x118) + 2;
    *(undefined4 *)(iVar2 + 0x44) = 2;
  }
  return;
}

