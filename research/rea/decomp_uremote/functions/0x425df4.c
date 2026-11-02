// rea decompile_all
// name: FUN_00425df4
// address: 0x425df4
// body: available
// range: 0x425df4-0x425eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425df4(int param_1)

{
  ushort uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x274) != '\0') {
    if (*(int *)(param_1 + 0x1d4) == 0x20000) {
      FUN_00411a5c(*(undefined4 *)(param_1 + 0x27c));
      uVar1 = 0;
      bVar2 = *(short *)(param_1 + 0x27a) != 0;
      *(undefined4 *)(param_1 + 0x27c) = 0;
      *(undefined2 *)(param_1 + 0x278) = 0;
      while (bVar2) {
        FUN_00411a5c(*(undefined4 *)(*(int *)(param_1 + 0x280) + (uint)uVar1 * 4));
        *(undefined4 *)((uint)uVar1 * 4 + *(int *)(param_1 + 0x280)) = 0;
        uVar1 = uVar1 + 1;
        bVar2 = uVar1 < *(ushort *)(param_1 + 0x27a);
      }
      FUN_00411a5c(*(undefined4 *)(param_1 + 0x280));
      *(undefined4 *)(param_1 + 0x280) = 0;
      *(undefined2 *)(param_1 + 0x27a) = 0;
    }
    else if (*(int *)(param_1 + 0x1d4) == 0x28000) {
      FUN_00411a5c(*(undefined4 *)(param_1 + 0x27c));
      *(undefined4 *)(param_1 + 0x27c) = 0;
      *(undefined2 *)(param_1 + 0x278) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x274) = 0;
  return;
}

