// rea decompile_all
// name: FUN_0041cd87
// address: 0x41cd87
// body: available
// range: 0x41cd87-0x41cdc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cd87(int param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 **)(in_EAX[5] + 4);
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(in_EAX[2] + 0x24);
    do {
      puVar2[-5] = 0;
      puVar2[-1] = 0;
      if (param_1 == 0) {
        *puVar2 = *puVar3;
        uVar4 = puVar3[1];
      }
      else {
        *puVar2 = puVar3[1];
        uVar4 = *puVar3;
      }
      puVar2[1] = uVar4;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 0xc;
      puVar3 = puVar3 + 2;
    } while (iVar1 != 0);
  }
  return;
}

