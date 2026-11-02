// rea decompile_all
// name: FUN_0040871a
// address: 0x40871a
// body: available
// range: 0x40871a-0x4087d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040871a(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  
  iVar3 = param_1;
  uVar1 = param_1 + 0x28;
  iVar2 = *(int *)(param_1 + 0x19c);
  param_1 = 0xa1;
  if (uVar1 <= *(uint *)(iVar3 + 0x194)) {
    param_1 = 0;
    *(undefined1 *)(iVar2 + 0x40) = 1;
    uVar4 = FUN_00408693(&local_8);
    *(undefined4 *)(iVar2 + 0x30) = uVar4;
    if ((uint)-local_8 < 9 || local_8 == -9) {
      uVar4 = FUN_00408667();
      *(undefined4 *)(iVar2 + 0x38) = uVar4;
      uVar4 = FUN_00408667();
      *(undefined4 *)(iVar2 + 0x34) = uVar4;
      uVar4 = FUN_00408667();
      *(undefined4 *)(iVar2 + 0x3c) = uVar4;
      uVar4 = FUN_00408667();
      *(undefined4 *)(iVar2 + 0x48) = uVar4;
      uVar4 = FUN_00408667();
      *(undefined4 *)(iVar2 + 0x4c) = uVar4;
      *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(&DAT_008fa5d8 + local_8 * -4);
    }
    else {
      *(undefined4 *)(iVar2 + 0x30) = 0x10000;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0x10000;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x4c) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 1;
    }
  }
  return param_1;
}

