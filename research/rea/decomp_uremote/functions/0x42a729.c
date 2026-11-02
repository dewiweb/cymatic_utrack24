// rea decompile_all
// name: FUN_0042a729
// address: 0x42a729
// body: available
// range: 0x42a729-0x42a781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a729(int *param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  
  uVar1 = *(byte *)(in_EDX + 0x170) - 0xb7;
  uVar3 = (uint)uVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 1;
    if (uVar1 != 0) {
      do {
        sVar2 = FUN_004299ae();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        in_EDX = extraout_EDX;
      } while (uVar3 != 0);
    }
    *(undefined1 *)(in_EDX + 0x178) = 0;
    return;
  }
  *(undefined4 *)(in_EDX + 0xc) = 0x82;
  return;
}

