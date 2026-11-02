// rea decompile_all
// name: FUN_005d5d00
// address: 0x5d5d00
// body: available
// range: 0x5d5d00-0x5d5e0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d5d00(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  int in_EDX;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)&DAT_00bfc940;
  piVar2 = *(int **)(in_ECX + 0x1c);
  piVar13 = *(int **)(in_EDX + (int)(double)CONCAT44(in_XMM2_Db,in_XMM2_Da) * 8);
  iVar3 = *(int *)(in_EDX + 4 + (int)(double)CONCAT44(in_XMM2_Db,in_XMM2_Da) * 8);
  iVar4 = *piVar2;
  iVar1 = piVar2[1];
  iVar10 = 0;
  piVar11 = piVar2 + 0x88;
  do {
    iVar8 = FUN_004c5556(1,0xc88);
    *piVar11 = iVar8;
    puVar9 = (undefined4 *)FUN_004c5556(1,0x10);
    piVar11[-0x80] = (int)puVar9;
    uVar5 = local_10[1];
    uVar6 = local_10[2];
    uVar7 = local_10[3];
    *puVar9 = *local_10;
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    if (piVar2[2] <= iVar10) {
      piVar2[2] = iVar10 + 1;
    }
    piVar11[-0x40] = 0;
    piVar12 = piVar13;
    piVar14 = (int *)*piVar11;
    for (iVar8 = 0x322; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar14 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar14 = piVar14 + 1;
    }
    if (piVar2[3] <= iVar10) {
      piVar2[3] = iVar10 + 1;
    }
    iVar8 = 0;
    if (0 < *piVar13) {
      piVar12 = piVar13 + 0x111;
      do {
        FUN_005d5e10(iVar10,*piVar12 * 0x20 + iVar3);
        piVar12 = piVar12 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *piVar13);
    }
    iVar10 = iVar10 + 1;
    local_10 = local_10 + 4;
    piVar11 = piVar11 + 1;
    piVar13 = piVar13 + 0x322;
  } while (iVar10 < (int)((iVar4 != iVar1) + 1));
  return;
}

