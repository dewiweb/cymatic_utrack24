// rea decompile_all
// name: FUN_0041eec8
// address: 0x41eec8
// body: available
// range: 0x41eec8-0x41ef2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041eec8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_EDI;
  
  for (puVar4 = (undefined4 *)*unaff_EDI; puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[1]) {
    *puVar4 = *(undefined4 *)puVar4[2];
    puVar4[4] = puVar4[4] + -1;
    puVar4[2] = (undefined4 *)puVar4[2] + (uint)((*(byte *)(puVar4 + 3) & 8) != 0) * 2 + -1;
  }
  piVar5 = (int *)*unaff_EDI;
  if (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[1];
    piVar3 = piVar5 + 1;
    piVar2 = unaff_EDI;
    while (piVar6 = piVar3, piVar1 != (int *)0x0) {
      if (*piVar1 < *piVar5) {
        *piVar2 = (int)piVar1;
        *piVar6 = piVar1[1];
        piVar1[1] = (int)piVar5;
        piVar5 = (int *)*unaff_EDI;
        piVar6 = unaff_EDI;
      }
      else {
        piVar5 = (int *)*piVar6;
        if (piVar5 == (int *)0x0) {
          return;
        }
      }
      piVar3 = piVar5 + 1;
      piVar2 = piVar6;
      piVar1 = (int *)piVar5[1];
    }
  }
  return;
}

