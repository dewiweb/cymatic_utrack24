// rea decompile_all
// name: FUN_0046bbf0
// address: 0x46bbf0
// body: available
// range: 0x46bbf0-0x46bc89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0046bbf0(void)

{
  uint c;
  LPWORD pgi;
  DWORD DVar1;
  int in_ECX;
  uint uVar2;
  float fVar3;
  float fStack00000004;
  LPCWSTR local_8;
  
  FUN_00458890();
  c = FUN_00464340();
  pgi = (LPWORD)FUN_004c554b(c * 2 + 2);
  fVar3 = 0.0;
  fStack00000004 = 0.0;
  pgi[c] = 0xffff;
  DVar1 = GetGlyphIndicesW(*(HDC *)(in_ECX + 0x34),local_8,c,pgi,1);
  if ((DVar1 != 0xffffffff) && (uVar2 = 0, c != 0)) {
    do {
      FUN_0046c790(*(undefined4 *)(in_ECX + 0x34),(int)(short)pgi[uVar2],(int)(short)pgi[uVar2 + 1])
      ;
      fVar3 = fVar3 + fStack00000004;
      uVar2 = uVar2 + 1;
      fStack00000004 = fVar3;
    } while (uVar2 < c);
  }
  FID_conflict__free(pgi);
  return (float10)fStack00000004;
}

