// rea decompile_all
// name: FUN_004218b9
// address: 0x4218b9
// body: available
// range: 0x4218b9-0x42193e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004218b9(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7));
  uVar5 = *param_2 + 1;
  uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
  local_8 = 0;
  uVar2 = local_8;
  if (uVar5 < 0x10000) {
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
    uVar6 = uVar5 - uVar6;
    if (uVar6 < uVar7) {
      pcVar3 = (char *)(iVar1 + uVar6 * 2 + 9);
      do {
        pcVar4 = pcVar3 + 1;
        pcVar3 = pcVar3 + 2;
        uVar2 = uVar5;
        if (*pcVar4 != '\0' || *pcVar3 != '\0') break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 1;
        uVar2 = local_8;
      } while (uVar6 < uVar7);
    }
  }
  local_8 = uVar2;
  *param_2 = local_8;
  return;
}

