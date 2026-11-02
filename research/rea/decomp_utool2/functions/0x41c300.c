// rea decompile_all
// name: FUN_0041c300
// address: 0x41c300
// body: available
// range: 0x41c300-0x41c3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c300(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int in_EDX;
  int iVar7;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_14 = in_EDX - in_ECX >> 2;
  if ((1 < (int)local_14) && (iVar7 = (int)(local_14 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar7))
  {
    local_18 = local_14 - 1;
    local_c = local_18 / 2;
    do {
      local_1c = *(undefined4 *)(in_ECX + -4 + iVar7 * 4);
      iVar7 = iVar7 + -1;
      iVar4 = iVar7;
      while (iVar4 < local_c) {
        iVar1 = iVar4 * 2 + 2;
        dVar2 = *(double *)(*(int *)(*(int *)(in_ECX + 8 + iVar4 * 8) + 0xdc) + 0x38);
        dVar3 = *(double *)(*(int *)(*(int *)(in_ECX + -4 + iVar1 * 4) + 0xdc) + 0x38);
        if (dVar3 <= dVar2) {
          uVar5 = (uint)(dVar3 < dVar2);
        }
        else {
          uVar5 = 0xffffffff;
        }
        iVar6 = iVar4 * 2 + 1;
        if (-1 < (int)uVar5) {
          iVar6 = iVar1;
        }
        *(undefined4 *)(in_ECX + iVar4 * 4) = *(undefined4 *)(in_ECX + iVar6 * 4);
        iVar4 = iVar6;
      }
      if ((iVar4 == local_c) && ((local_14 & 1) == 0)) {
        *(undefined4 *)(in_ECX + iVar4 * 4) = *(undefined4 *)(in_ECX + -4 + local_14 * 4);
      }
      local_10 = iVar7;
      FUN_0041c620(iVar7,&local_1c,iVar4);
    } while (0 < iVar7);
  }
  return;
}

