// rea decompile_all
// name: FUN_00405362
// address: 0x405362
// body: available
// range: 0x405362-0x4053bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00405362(char *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int unaff_EBX;
  char *pcVar5;
  undefined4 *puVar6;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 0xc);
  uVar2 = 0;
  cVar4 = *param_1;
  pcVar5 = param_1;
  while (cVar4 != '\0') {
    uVar2 = uVar2 * 0x1f + (int)cVar4;
    pcVar5 = pcVar5 + 1;
    cVar4 = *pcVar5;
  }
  puVar6 = puVar1 + uVar2 % *(uint *)(unaff_EBX + 4);
  while (((undefined4 *)*puVar6 != (undefined4 *)0x0 &&
         ((pcVar5 = *(char **)*puVar6, *pcVar5 != *param_1 ||
          (iVar3 = _strcmp(pcVar5,param_1), iVar3 != 0))))) {
    puVar6 = puVar6 + -1;
    if (puVar6 < puVar1) {
      puVar6 = puVar1 + *(int *)(unaff_EBX + 4) + -1;
    }
  }
  return puVar6;
}

