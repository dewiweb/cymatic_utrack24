// rea decompile_all
// name: FUN_004055de
// address: 0x4055de
// body: available
// range: 0x4055de-0x405638 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_004055de(int *param_1)

{
  undefined *puVar1;
  int *in_ECX;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar2 = 0;
  *param_1 = 0;
  if ((in_ECX == (int *)0x0) || (in_ECX[2] == 0)) {
    return (undefined *)0x0;
  }
  puVar1 = *(undefined **)*in_ECX;
  iVar4 = 0;
  if (in_ECX[2] != 0) {
    do {
      for (pcVar3 = *(char **)(*in_ECX + uVar2 * 4); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
        puVar1[iVar4] = *pcVar3;
        iVar4 = iVar4 + 1;
      }
      uVar2 = uVar2 + 1;
      if ((uint)in_ECX[2] <= uVar2) break;
      puVar1[iVar4] = 0x20;
      iVar4 = iVar4 + 1;
    } while (uVar2 < (uint)in_ECX[2]);
  }
  if (puVar1 != &DAT_005ffa1e) {
    puVar1[iVar4] = 0;
  }
  *param_1 = iVar4;
  return puVar1;
}

