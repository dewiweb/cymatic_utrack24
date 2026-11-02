// rea decompile_all
// name: FUN_0063ed30
// address: 0x63ed30
// body: available
// range: 0x63ed30-0x63eda5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0063ed30(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  float in_XMM2_Da;
  
  iVar2 = 0;
  if (0 < param_2) {
    while( true ) {
      fVar1 = *(float *)(in_EDX + iVar2 * 4);
      if ((fVar1 <= in_XMM2_Da) && (in_XMM2_Da <= fVar1)) {
        return iVar2 + 1;
      }
      iVar3 = iVar2 + param_2 >> 1;
      fVar1 = *(float *)(in_EDX + iVar3 * 4);
      if (iVar3 == iVar2) break;
      if (fVar1 <= in_XMM2_Da) {
        iVar2 = iVar3;
        iVar3 = param_2;
      }
      param_2 = iVar3;
      if (iVar3 <= iVar2) {
        return iVar2;
      }
    }
    if ((fVar1 <= in_XMM2_Da) && (-1 < (int)(uint)(fVar1 < in_XMM2_Da))) {
      return iVar2 + 1;
    }
  }
  return iVar2;
}

