// rea decompile_all
// name: FUN_0068b060
// address: 0x68b060
// body: available
// range: 0x68b060-0x68b0c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b060(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    cVar1 = *(char *)(in_ECX + 0x86);
  }
  else {
    piVar2 = (int *)FUN_006d1d80();
    if (piVar2 == (int *)0x0) goto LAB_0068b087;
    cVar1 = (**(code **)(*piVar2 + 0x3c))();
  }
  if (cVar1 != '\0') {
    return;
  }
LAB_0068b087:
  cVar1 = FUN_0068b220();
  if ((cVar1 == '\0') && (cVar1 = FUN_0068b100(), cVar1 == '\0')) {
    *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(in_ECX + 0x18);
    *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(in_ECX + 0x1c);
  }
  return;
}

