// rea decompile_all
// name: FUN_005f1c10
// address: 0x5f1c10
// body: available
// range: 0x5f1c10-0x5f1d3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_005f1c10(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *in_ECX;
  uint in_EDX;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if (*(int *)*in_ECX != 1) {
    return 0;
  }
  uVar5 = 8;
  if (in_EDX < 9) {
    uVar5 = in_EDX;
  }
  iVar6 = uVar5 * 0x2c;
  ((int *)*in_ECX)[4] = *(int *)(&DAT_00c7e9c0 + iVar6);
  bVar7 = *(int *)*in_ECX == 1;
  if (bVar7) {
    ((int *)*in_ECX)[5] = *(int *)(&DAT_00c7e9c4 + iVar6);
  }
  bVar4 = FUN_005f1500();
  bVar8 = *(int *)*in_ECX == 1;
  if (bVar8) {
    ((int *)*in_ECX)[0x8b] = *(int *)(&DAT_00c7e9c8 + iVar6);
  }
  bVar9 = *(int *)*in_ECX == 1;
  if (bVar9) {
    ((int *)*in_ECX)[0x8c] = *(int *)(&DAT_00c7e9cc + iVar6);
  }
  bVar10 = *(int *)*in_ECX == 1;
  if (bVar10) {
    ((int *)*in_ECX)[0x8d] = *(int *)(&DAT_00c7e9d0 + iVar6);
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = *piVar1;
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    piVar1[0x8e] = *(int *)(&DAT_00c7e9d8 + iVar6);
  }
  bVar11 = *(int *)*in_ECX == 1;
  if (bVar11) {
    ((int *)*in_ECX)[0x90] = *(int *)(&DAT_00c7e9dc + iVar6);
  }
  if (*(int *)*in_ECX == 1) {
    ((int *)*in_ECX)[0x91] = *(int *)(&DAT_00c7e9e0 + iVar6);
    return *(int *)*in_ECX == 1 &
           bVar4 & bVar7 & bVar8 & bVar9 & bVar10 & iVar2 == 1 & iVar3 == 1 & bVar11;
  }
  return 0;
}

