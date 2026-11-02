// rea decompile_all
// name: FUN_00429740
// address: 0x429740
// body: available
// range: 0x429740-0x429781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00429740(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  int local_8;
  
  if (*(int *)(unaff_ESI + 0x1c) == 0) {
    uVar1 = FUN_00411912(0x260,&local_8);
    if (local_8 == 0) {
      iVar2 = FUN_004293e7();
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_ESI + 0x1c) = uVar1;
        goto LAB_0042977b;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_0042977b:
    uVar1 = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  return uVar1;
}

