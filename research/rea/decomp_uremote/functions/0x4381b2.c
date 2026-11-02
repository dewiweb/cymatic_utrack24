// rea decompile_all
// name: FUN_004381b2
// address: 0x4381b2
// body: available
// range: 0x4381b2-0x438213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004381b2(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_ESI;
  uint uVar3;
  int local_8;
  
  uVar2 = *(uint *)(unaff_ESI + 0x60);
  if (*(uint *)(unaff_ESI + 0x5c) < uVar2) {
LAB_0043820e:
    uVar1 = 0;
  }
  else {
    uVar3 = (uVar2 >> 1) + 4 + uVar2;
    if (*(int *)(unaff_ESI + 0x58) == unaff_ESI + 100) {
      uVar2 = 0;
      *(undefined4 *)(unaff_ESI + 0x58) = 0;
    }
    if ((uVar3 < 0x10001) || (uVar3 = 0x10000, uVar2 != 0x10000)) {
      uVar1 = FUN_00411976(1,*(undefined4 *)(unaff_ESI + 0x58),&local_8);
      *(undefined4 *)(unaff_ESI + 0x58) = uVar1;
      if (local_8 == 0) {
        *(uint *)(unaff_ESI + 0x60) = uVar3;
        goto LAB_0043820e;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

