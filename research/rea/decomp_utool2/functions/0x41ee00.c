// rea decompile_all
// name: FUN_0041ee00
// address: 0x41ee00
// body: available
// range: 0x41ee00-0x41eebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ee00(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int in_EDX;
  int iVar11;
  
  iVar9 = (int)(param_1 - 1) / 2;
  while (in_EDX < iVar9) {
    puVar2 = *(uint **)(in_ECX + 4 + in_EDX * 8);
    iVar1 = in_EDX * 2 + 2;
    puVar3 = *(uint **)(in_ECX + iVar1 * 4);
    uVar4 = *puVar2;
    uVar5 = *puVar3;
    uVar6 = puVar2[1];
    uVar7 = puVar3[1];
    if ((uVar5 == uVar4) && (uVar7 == uVar6)) {
      iVar10 = 0;
    }
    else {
      if (((int)uVar7 < (int)uVar6) || (((int)uVar7 <= (int)uVar6 && (uVar5 <= uVar4)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      iVar10 = (uint)!bVar8 * 2 + -1;
    }
    iVar11 = in_EDX * 2 + 1;
    if (-1 < iVar10) {
      iVar11 = iVar1;
    }
    *(undefined4 *)(in_ECX + in_EDX * 4) = *(undefined4 *)(in_ECX + iVar11 * 4);
    in_EDX = iVar11;
  }
  if ((in_EDX == iVar9) && ((param_1 & 1) == 0)) {
    *(undefined4 *)(in_ECX + in_EDX * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
  }
  FUN_0041ef90();
  return;
}

