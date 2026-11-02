// rea decompile_all
// name: FUN_00615850
// address: 0x615850
// body: available
// range: 0x615850-0x615a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615850(void)

{
  int iVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *in_EDX;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  int local_2c;
  int local_18;
  
  iVar5 = in_EDX[1];
  piVar8 = (int *)in_EDX[2];
  local_18 = 0;
  iVar6 = *in_EDX;
  iVar16 = *piVar8;
  iVar10 = piVar8[1];
  iVar7 = piVar8[2];
  uVar14 = piVar8[4];
  *(undefined4 *)(in_ECX + 0xb3c) = 0;
  *(undefined4 *)(in_ECX + 0xb40) = 0;
  *(undefined4 *)(in_ECX + 0xb44) = 0;
  *(undefined4 *)(in_ECX + 0xb48) = 0;
  *(undefined4 *)(in_ECX + 0xb4c) = 0;
  *(undefined4 *)(in_ECX + 0xb50) = 0;
  *(undefined4 *)(in_ECX + 0xb54) = 0;
  *(undefined4 *)(in_ECX + 0xb58) = 0;
  *(undefined2 *)(iVar6 + 2 + *(int *)(in_ECX + 0xb5c + *(int *)(in_ECX + 0x1454) * 4) * 4) = 0;
  iVar12 = *(int *)(in_ECX + 0x1454) + 1;
  if (iVar12 < 0x23d) {
    local_2c = 0x23d - iVar12;
    piVar8 = (int *)(in_ECX + 0xb5c + iVar12 * 4);
    iVar12 = iVar12 + local_2c;
    iVar13 = 0;
    do {
      iVar15 = *piVar8;
      iVar1 = iVar15 * 4;
      uVar9 = *(ushort *)(iVar6 + 2 + (uint)*(ushort *)(iVar1 + 2 + iVar6) * 4) + 1;
      if ((int)uVar14 < (int)uVar9) {
        iVar13 = iVar13 + 1;
        uVar9 = uVar14;
        local_18 = iVar13;
      }
      *(short *)(iVar1 + 2 + iVar6) = (short)uVar9;
      if (iVar15 <= iVar5) {
        psVar2 = (short *)(in_ECX + 0xb3c + uVar9 * 2);
        *psVar2 = *psVar2 + 1;
        if (iVar15 < iVar7) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)(iVar10 + (iVar15 - iVar7) * 4);
        }
        uVar3 = *(ushort *)(iVar1 + iVar6);
        *(int *)(in_ECX + 0x16a8) = *(int *)(in_ECX + 0x16a8) + (iVar15 + uVar9) * (uint)uVar3;
        iVar13 = local_18;
        if (iVar16 != 0) {
          *(int *)(in_ECX + 0x16ac) =
               *(int *)(in_ECX + 0x16ac) +
               ((uint)*(ushort *)(iVar1 + 2 + iVar16) + iVar15) * (uint)uVar3;
        }
      }
      piVar8 = piVar8 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    if (iVar13 != 0) {
      iVar16 = uVar14 - 1;
      puVar17 = (ushort *)(in_ECX + (uVar14 + 0x59e) * 2);
      do {
        psVar2 = (short *)(in_ECX + 0xb3c + iVar16 * 2);
        sVar4 = *(short *)(in_ECX + 0xb3c + iVar16 * 2);
        iVar10 = iVar16;
        while (sVar4 == 0) {
          psVar2 = psVar2 + -1;
          iVar10 = iVar10 + -1;
          sVar4 = *psVar2;
        }
        psVar2 = (short *)(in_ECX + 0xb3e + iVar10 * 2);
        *psVar2 = *psVar2 + 2;
        psVar2 = (short *)(in_ECX + 0xb3c + iVar10 * 2);
        *psVar2 = *psVar2 + -1;
        local_18 = local_18 + -2;
        *puVar17 = *puVar17 - 1;
      } while (0 < local_18);
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        uVar9 = (uint)*puVar17;
        if (uVar9 != 0) {
          iVar16 = in_ECX + (iVar12 + 0x2d7) * 4;
          do {
            iVar10 = *(int *)(iVar16 + -4);
            iVar16 = iVar16 + -4;
            iVar12 = iVar12 + -1;
            if (iVar10 <= iVar5) {
              uVar11 = (uint)*(ushort *)(iVar6 + 2 + iVar10 * 4);
              if (uVar11 != uVar14) {
                *(int *)(in_ECX + 0x16a8) =
                     *(int *)(in_ECX + 0x16a8) +
                     (uVar14 - uVar11) * (uint)*(ushort *)(iVar6 + iVar10 * 4);
                *(short *)(iVar6 + 2 + iVar10 * 4) = (short)uVar14;
              }
              uVar9 = uVar9 - 1;
            }
          } while (uVar9 != 0);
        }
        puVar17 = puVar17 + -1;
      }
    }
  }
  return;
}

