// rea decompile_all
// name: FUN_00415460
// address: 0x415460
// body: available
// range: 0x415460-0x4154ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00415460(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  uVar2 = in_ECX[2];
  piVar4 = (int *)*in_ECX;
  piVar1 = piVar4 + uVar2;
  while( true ) {
    if (piVar4 == piVar1) {
      return uVar2 & 0xffffff00;
    }
    iVar3 = *piVar4;
    if (*param_1 == iVar3) break;
    uVar2 = FUN_0045c1e0(*param_1);
    iVar3 = 0;
    if (uVar2 == 0) break;
    piVar4 = piVar4 + 1;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

