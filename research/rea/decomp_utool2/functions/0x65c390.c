// rea decompile_all
// name: FUN_0065c390
// address: 0x65c390
// body: available
// range: 0x65c390-0x65c4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c390(void)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  iVar2 = *(int *)(in_ECX + 0x1a8);
  if (*(int *)(in_ECX + 0x4c) == 1) {
    iVar4 = 0x1fe;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  else {
    iVar4 = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 0;
  }
  uVar5 = (**(code **)(*(int *)(in_ECX + 4) + 8))();
  *(undefined4 *)(iVar2 + 0x18) = uVar5;
  iVar6 = *(int *)(iVar2 + 0x14);
  local_c = 0;
  if (0 < *(int *)(in_ECX + 100)) {
    do {
      iVar9 = *(int *)(iVar2 + 0x20 + local_c * 4);
      iVar6 = iVar6 / iVar9;
      if (iVar4 != 0) {
        piVar1 = (int *)(*(int *)(iVar2 + 0x18) + local_c * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      puVar3 = *(undefined1 **)(*(int *)(iVar2 + 0x18) + local_c * 4);
      iVar7 = (iVar9 + 0xfe) / (iVar9 * 2 + -2);
      iVar11 = 0;
      iVar12 = 0;
      do {
        if (iVar7 < iVar12) {
          iVar8 = iVar9 + 0xfe + iVar11 * 0x1fe;
          do {
            iVar8 = iVar8 + 0x1fe;
            iVar11 = iVar11 + 1;
            iVar7 = iVar8 / (iVar9 * 2 + -2);
          } while (iVar7 < iVar12);
        }
        puVar3[iVar12] = (char)iVar6 * (char)iVar11;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x100);
      if (iVar4 != 0) {
        iVar9 = 1;
        puVar10 = puVar3;
        do {
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar3;
          puVar3[iVar9 + 0xff] = puVar3[0xff];
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x100);
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(in_ECX + 100));
  }
  return;
}

