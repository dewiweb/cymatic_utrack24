// rea decompile_all
// name: FUN_0041c67c
// address: 0x41c67c
// body: available
// range: 0x41c67c-0x41c6dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c67c(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  uint *unaff_EDI;
  
  iVar3 = in_EAX * 0x1c + unaff_EDI[2];
  if ((in_EAX < *unaff_EDI) && ((*(uint *)(iVar3 + 0x10) & 4) == 0)) {
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 4;
    uVar1 = unaff_EDI[1];
    *(undefined4 *)(iVar3 + 0x14) = 0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      iVar2 = FUN_0041c5fd();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x14) = extraout_ECX;
        break;
      }
    }
    if (unaff_EDI[1] < *unaff_EDI) {
      *(int *)(unaff_EDI[4] + unaff_EDI[1] * 4) = iVar3;
      unaff_EDI[1] = unaff_EDI[1] + 1;
    }
  }
  return;
}

