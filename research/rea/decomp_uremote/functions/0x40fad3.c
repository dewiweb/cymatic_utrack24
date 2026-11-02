// rea decompile_all
// name: FUN_0040fad3
// address: 0x40fad3
// body: available
// range: 0x40fad3-0x40fb12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040fad3(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_ECX;
  int *unaff_ESI;
  
  if ((unaff_ESI != (int *)0x0) && (*unaff_ESI != 0)) {
    piVar1 = *(int **)(*unaff_ESI + 0x60);
    pcVar2 = *(code **)(*piVar1 + 0x20);
    if (pcVar2 != (code *)0x0) {
      puVar3 = (undefined4 *)(*pcVar2)(piVar1,"tt-cmaps");
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = (*(code *)*puVar3)();
        if (iVar4 == 0) {
          return in_ECX;
        }
      }
    }
  }
  return 0xffffffff;
}

