// rea decompile_all
// name: FUN_0042a66f
// address: 0x42a66f
// body: available
// range: 0x42a66f-0x42a6d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a66f(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(in_EDX + 0x164) + 1 + *(int *)(in_EDX + 0x168));
  uVar3 = (uint)bVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 2;
    uVar4 = uVar3;
    if (bVar1 != 0) {
      do {
        sVar2 = FUN_004299ae();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
        in_EDX = extraout_EDX;
      } while (uVar4 != 0);
    }
    *(int *)(in_EDX + 0x20) = *(int *)(in_EDX + 0x20) + uVar3;
    *(undefined1 *)(in_EDX + 0x178) = 0;
  }
  else {
    *(undefined4 *)(in_EDX + 0xc) = 0x82;
  }
  return;
}

