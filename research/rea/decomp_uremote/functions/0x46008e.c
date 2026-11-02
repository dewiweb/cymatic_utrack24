// rea decompile_all
// name: FUN_0046008e
// address: 0x46008e
// body: available
// range: 0x46008e-0x4600cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046008e(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = *(int *)(in_ECX + 0x10) != 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    do {
      if (bVar3) {
        iVar1 = *(int *)(*(int *)(in_ECX + 8) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != param_1) {
        FUN_0043ffa6();
      }
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < *(uint *)(in_ECX + 0x10);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x10));
  }
  return;
}

