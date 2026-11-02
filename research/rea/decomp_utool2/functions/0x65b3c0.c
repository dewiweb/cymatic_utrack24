// rea decompile_all
// name: FUN_0065b3c0
// address: 0x65b3c0
// body: available
// range: 0x65b3c0-0x65b51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b3c0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int *in_EDX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar12 = in_EDX[4];
  iVar8 = 0;
  iVar5 = *in_EDX;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  iVar1 = in_EDX[2];
  iVar7 = 0;
  if (iVar5 <= in_EDX[1]) {
    iVar10 = iVar5 * 8 + 4;
    do {
      if (iVar1 <= in_EDX[3]) {
        iVar7 = iVar1 * 4 + 2;
        puVar2 = (ushort *)
                 (*(int *)(*(int *)(*(int *)(in_ECX + 0x1a8) + 0x18) + iVar5 * 4) +
                 (iVar1 * 0x20 + iVar12) * 2);
        iVar4 = (in_EDX[3] - iVar1) + 1;
        do {
          if (iVar12 <= in_EDX[5]) {
            iVar6 = iVar12 * 8 + 4;
            iVar9 = (in_EDX[5] - iVar12) + 1;
            puVar11 = puVar2;
            do {
              uVar3 = (uint)*puVar11;
              puVar11 = puVar11 + 1;
              if (uVar3 != 0) {
                iVar8 = iVar8 + uVar3;
                local_18 = local_18 + iVar10 * uVar3;
                local_1c = local_1c + iVar7 * uVar3;
                local_20 = local_20 + iVar6 * uVar3;
              }
              iVar6 = iVar6 + 8;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          puVar2 = puVar2 + 0x20;
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 8;
      iVar7 = local_18;
    } while (iVar5 <= in_EDX[1]);
  }
  iVar12 = iVar8 >> 1;
  *(char *)(param_1 + **(int **)(in_ECX + 0x74)) = (char)((iVar7 + iVar12) / iVar8);
  *(char *)(param_1 + *(int *)(*(int *)(in_ECX + 0x74) + 4)) = (char)((local_1c + iVar12) / iVar8);
  *(char *)(param_1 + *(int *)(*(int *)(in_ECX + 0x74) + 8)) = (char)((local_20 + iVar12) / iVar8);
  return;
}

