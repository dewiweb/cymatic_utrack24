// rea decompile_all
// name: FUN_004e4c5d
// address: 0x4e4c5d
// body: available
// range: 0x4e4c5d-0x4e4ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e4c5d(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [16];
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = 0;
  FUN_004718a7(local_1c);
  FUN_0046173a();
  iVar2 = FUN_004e4ab1();
  FUN_004615f7();
  if (iVar2 != 0) {
    local_8 = 1;
    FUN_004e4ed2(local_c);
    cVar1 = FUN_00465948();
    if (cVar1 != '\0') {
      uVar3 = *(undefined4 *)(iVar2 + 4);
      goto LAB_004e4cb9;
    }
  }
  uVar3 = 0;
LAB_004e4cb9:
  if ((local_8 & 1) != 0) {
    FUN_004652d6();
  }
  return uVar3;
}

