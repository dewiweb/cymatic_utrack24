// rea decompile_all
// name: FUN_006d43e0
// address: 0x6d43e0
// body: available
// range: 0x6d43e0-0x6d44ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d43e0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  FUN_0068b6f0();
  iVar3 = 2;
  piVar4 = (int *)(in_ECX + 0xf8);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) >> 4 & 1) == *(byte *)(in_ECX + 0x72)) {
        *(byte *)(iVar1 + 0x69) =
             (*(byte *)(in_ECX + 0x72) != 0) - 1U & 0x10 | *(byte *)(iVar1 + 0x69) & 0xef;
        iVar1 = *(int *)(iVar1 + 0xc);
        if ((iVar1 == 0) ||
           (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
            ((*(int *)(iVar1 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))))) {
          FUN_006cc240();
        }
      }
    }
    piVar4 = piVar4 + -1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = *(int *)(in_ECX + 0x100);
  if (iVar3 != 0) {
    if ((*(byte *)(iVar3 + 0x69) >> 4 & 1) == *(byte *)(in_ECX + 0x72)) {
      *(byte *)(iVar3 + 0x69) =
           (*(byte *)(in_ECX + 0x72) != 0) - 1U & 0x10 | *(byte *)(iVar3 + 0x69) & 0xef;
      iVar3 = *(int *)(iVar3 + 0xc);
      if ((iVar3 == 0) ||
         (((*(byte *)(iVar3 + 0x69) & 0x10) == 0 &&
          ((*(int *)(iVar3 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))))) {
        FUN_006cc240();
      }
    }
  }
  return;
}

