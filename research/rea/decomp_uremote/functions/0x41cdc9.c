// rea decompile_all
// name: FUN_0041cdc9
// address: 0x41cdc9
// body: available
// range: 0x41cdc9-0x41ce23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cdc9(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  iVar2 = *(int *)(in_ECX[5] + 4);
  iVar3 = *(int *)(in_ECX[5] + 8);
  if (*in_ECX != 0) {
    puVar5 = (undefined4 *)(in_ECX[2] + 0x2c);
    do {
      if (param_1 == 0) {
        *(undefined4 *)(iVar2 + uVar4 * 8) = *puVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 4 + uVar4 * 8) = *puVar5;
      }
      if ((*(byte *)(puVar5 + -7) & 0x10) != 0) {
        pbVar1 = (byte *)(uVar4 + iVar3);
        *pbVar1 = *pbVar1 | ((param_1 != 0) - 1U & 0xe0) + 0x40;
      }
      puVar5 = puVar5 + 0xc;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *in_ECX);
  }
  return;
}

