// rea decompile_all
// name: FUN_0040102b
// address: 0x40102b
// body: available
// range: 0x40102b-0x401065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040102b(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EDI;
  uint local_8;
  
  local_8 = 1;
  uVar5 = local_8;
  if (1 < param_1) {
joined_r0x0040103e:
    do {
      if (uVar5 != 0) {
        piVar1 = (int *)(unaff_EDI + uVar5 * 4);
        iVar3 = *piVar1;
        piVar2 = (int *)(unaff_EDI + -4 + uVar5 * 4);
        iVar4 = *piVar2;
        if (iVar3 <= iVar4) {
          *piVar1 = iVar4;
          *piVar2 = iVar3;
          uVar5 = uVar5 - 1;
          goto joined_r0x0040103e;
        }
      }
      local_8 = local_8 + 1;
      uVar5 = local_8;
    } while (local_8 < param_1);
  }
  return;
}

