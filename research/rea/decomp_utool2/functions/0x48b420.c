// rea decompile_all
// name: FUN_0048b420
// address: 0x48b420
// body: available
// range: 0x48b420-0x48b4c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b420(byte *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  do {
    iVar3 = 0x100 - (param_2 >> 0x18);
    uVar2 = (((uint)param_1[2] << 0x10 | (uint)*param_1) * iVar3 >> 8 & 0xff00ff) +
            (param_2 & 0xff00ff);
    uVar2 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
    *param_1 = (byte)uVar2;
    iVar3 = ((uint)param_1[1] * iVar3 >> 8) + (param_2 >> 8 & 0xff00ff);
    param_1[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
    param_1[2] = (byte)(uVar2 >> 0x10);
    param_1 = param_1 + iVar1;
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}

