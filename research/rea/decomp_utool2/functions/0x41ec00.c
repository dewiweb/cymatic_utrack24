// rea decompile_all
// name: FUN_0041ec00
// address: 0x41ec00
// body: available
// range: 0x41ec00-0x41ed00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ec00(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int in_EDX;
  uint uVar9;
  int iVar10;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar9 = in_EDX - in_ECX >> 2;
  if ((1 < (int)uVar9) && (iVar10 = (int)(uVar9 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar10)) {
    local_8 = (int)(uVar9 - 1) / 2;
    local_1c = uVar9;
    local_c = in_ECX;
    do {
      local_20 = *(undefined4 *)(in_ECX + -4 + iVar10 * 4);
      iVar10 = iVar10 + -1;
      iVar6 = iVar10;
      while (iVar6 < local_8) {
        puVar2 = *(uint **)(in_ECX + 4 + iVar6 * 8);
        iVar1 = iVar6 * 2 + 2;
        puVar3 = *(uint **)(in_ECX + iVar1 * 4);
        local_14 = *puVar2;
        local_10 = *puVar3;
        uVar9 = puVar2[1];
        uVar4 = puVar3[1];
        if ((local_10 == local_14) && (uVar4 == uVar9)) {
          iVar7 = 0;
        }
        else {
          if (((int)uVar4 < (int)uVar9) || (((int)uVar4 <= (int)uVar9 && (local_10 <= local_14)))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar7 = (uint)!bVar5 * 2 + -1;
        }
        iVar8 = iVar6 * 2 + 1;
        if (-1 < iVar7) {
          iVar8 = iVar1;
        }
        *(undefined4 *)(local_c + iVar6 * 4) = *(undefined4 *)(local_c + iVar8 * 4);
        iVar6 = iVar8;
        uVar9 = local_1c;
        in_ECX = local_c;
      }
      if ((iVar6 == local_8) && ((uVar9 & 1) == 0)) {
        *(undefined4 *)(in_ECX + iVar6 * 4) = *(undefined4 *)(in_ECX + -4 + uVar9 * 4);
      }
      local_18 = iVar10;
      FUN_0041ef90(iVar10,&local_20,iVar6);
    } while (0 < iVar10);
  }
  return;
}

