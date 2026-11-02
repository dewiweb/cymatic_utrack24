// rea decompile_all
// name: FUN_005fc7b0
// address: 0x5fc7b0
// body: available
// range: 0x5fc7b0-0x5fc8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005fc7b0(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  uint *in_ECX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_c;
  
  _qsort((void *)in_ECX[1],*in_ECX,0x18,FUN_005fc8b0);
  uVar9 = 0;
  bVar7 = true;
  uVar11 = 0;
  if (*in_ECX != 0) {
    iVar10 = 0;
    local_c = 0;
    do {
      uVar3 = in_ECX[1];
      puVar8 = (uint *)(local_c + uVar3);
      if (((((*puVar8 & puVar8[1]) == 0xffffffff) || (bVar7)) ||
          (*puVar8 != *(uint *)(iVar10 + -0x18 + uVar3))) ||
         (puVar8[1] != *(uint *)(iVar10 + -0x14 + uVar3))) {
        uVar11 = uVar11 + 1;
        bVar7 = false;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar2 = (uint *)(iVar10 + uVar3);
        *puVar2 = *puVar8;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar4 = puVar8[5];
        puVar2 = (uint *)(iVar10 + 0x10 + uVar3);
        *puVar2 = puVar8[4];
        puVar2[1] = uVar4;
        iVar10 = iVar10 + 0x18;
      }
      uVar9 = uVar9 + 1;
      local_c = local_c + 0x18;
    } while (uVar9 < *in_ECX);
  }
  if (uVar11 < *in_ECX) {
    iVar10 = uVar11 * 0x18;
    uVar9 = uVar11;
    do {
      uVar3 = in_ECX[1];
      iVar1 = iVar10 + 0x18;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar10 + uVar3) = 0xffffffff;
      *(undefined4 *)(iVar10 + 4 + uVar3) = 0xffffffff;
      uVar3 = in_ECX[1];
      *(undefined4 *)((uVar3 - 0x10) + iVar1) = 0;
      *(undefined4 *)((uVar3 - 0xc) + iVar1) = 0;
      *(undefined4 *)((in_ECX[1] - 8) + iVar1) = 0;
      iVar10 = iVar1;
    } while (uVar9 < *in_ECX);
  }
  return uVar11;
}

