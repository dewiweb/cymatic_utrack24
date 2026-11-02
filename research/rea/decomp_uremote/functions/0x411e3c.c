// rea decompile_all
// name: FUN_00411e3c
// address: 0x411e3c
// body: available
// range: 0x411e3c-0x411e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411e3c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_EAX;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(in_EAX + 8);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      cVar3 = FUN_00411fe3(puVar4,param_1);
      if (cVar3 == '\0') break;
      FUN_00411e0d(puVar4);
      puVar4 = *(undefined4 **)(in_EAX + 8);
    } while (puVar4 != (undefined4 *)0x0);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar4;
      while (puVar2 != puVar4) {
        puVar1 = (undefined4 *)*puVar2;
        cVar3 = FUN_00411fe3(puVar2,param_1);
        puVar2 = puVar1;
        if (cVar3 != '\0') {
          FUN_00411e0d(extraout_ECX);
        }
      }
    }
  }
  return;
}

