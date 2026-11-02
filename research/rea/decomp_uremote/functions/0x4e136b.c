// rea decompile_all
// name: FUN_004e136b
// address: 0x4e136b
// body: available
// range: 0x4e136b-0x4e14a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e136b(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  int local_14;
  int local_10;
  int local_8;
  
  local_8 = 0;
  *(undefined4 *)(unaff_EBX + 200) = 0;
  local_10 = 0;
  local_14 = 0;
  if (0 < *(int *)(unaff_EBX + 0xc4)) {
    do {
      uVar2 = *(undefined4 *)(unaff_EBX + 0x94);
      iVar1 = FUN_00440367(*(int *)(unaff_EBX + 0xa0) - local_10);
      iVar3 = iVar1;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        uVar2 = FUN_00439b5a(uVar2);
      }
      iVar3 = FUN_00439b5a(1);
      iVar3 = FUN_00440367(param_1 / iVar3);
      FUN_004f65a9();
      local_8 = local_8 + iVar3;
      uVar2 = FUN_00439b5a(*(undefined4 *)(unaff_EBX + 200));
      *(undefined4 *)(unaff_EBX + 200) = uVar2;
      local_10 = local_10 + iVar1;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(unaff_EBX + 0xc4));
  }
  iVar3 = *(int *)(unaff_EBX + 0x8c);
  if ((local_8 < iVar3) && (param_1 = 0, local_8 = iVar3, 0 < *(int *)(unaff_EBX + 0xc4))) {
    do {
      FUN_004f65a9();
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(unaff_EBX + 0xc4));
  }
  return local_8;
}

