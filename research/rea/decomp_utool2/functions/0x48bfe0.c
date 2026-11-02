// rea decompile_all
// name: FUN_0048bfe0
// address: 0x48bfe0
// body: available
// range: 0x48bfe0-0x48c0e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048bfe0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar7 = in_EDX - in_ECX >> 3;
  if ((1 < (int)uVar7) && (iVar6 = (int)(uVar7 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar6)) {
    iVar4 = (int)(uVar7 - 1) / 2;
    iVar8 = in_ECX + iVar6 * 8;
    do {
      iVar2 = *(int *)(iVar8 + -8);
      iVar6 = iVar6 + -1;
      uVar3 = *(undefined4 *)(iVar8 + -4);
      iVar1 = iVar6;
      while (iVar1 < iVar4) {
        iVar5 = iVar1 * 2 + 2;
        iVar9 = iVar1 * 2 + 1;
        if (*(int *)(in_ECX + -8 + iVar5 * 8) <= *(int *)(in_ECX + iVar5 * 8)) {
          iVar9 = iVar5;
        }
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar9 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar9 * 8);
        iVar1 = iVar9;
      }
      if ((iVar1 == iVar4) && ((uVar7 & 1) == 0)) {
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + -8 + uVar7 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + -4 + uVar7 * 8);
        iVar1 = uVar7 - 1;
      }
      while ((iVar6 < iVar1 && (iVar5 = (iVar1 + -1) / 2, *(int *)(in_ECX + iVar5 * 8) < iVar2))) {
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar5 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar5 * 8);
        iVar1 = iVar5;
      }
      *(int *)(in_ECX + iVar1 * 8) = iVar2;
      *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = uVar3;
      iVar8 = iVar8 + -8;
    } while (0 < iVar6);
  }
  return;
}

