// rea decompile_all
// name: FUN_00490df7
// address: 0x490df7
// body: available
// range: 0x490df7-0x490e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490df7(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0049174b(param_1,0x100);
  *param_2 = iVar2;
  iVar3 = FUN_00490a15();
  if (iVar3 == 0) {
    uVar4 = 0;
    do {
      *(char *)(uVar4 + iVar2) = (char)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = FUN_00490ab6(param_3);
      *(undefined1 *)(uVar4 + iVar2) = uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  return;
}

