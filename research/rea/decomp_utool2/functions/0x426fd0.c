// rea decompile_all
// name: FUN_00426fd0
// address: 0x426fd0
// body: available
// range: 0x426fd0-0x4270fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00426fd0(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte *in_ECX;
  uint uVar6;
  int in_EDX;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  do {
    do {
      pbVar3 = in_ECX;
      in_EDX = in_EDX + -1;
      if ((in_EDX < 0) || (bVar1 = *pbVar3, bVar1 == 0)) {
        return 1;
      }
      in_ECX = pbVar3 + 1;
    } while (-1 < (char)bVar1);
    bVar5 = 0x40;
    iVar8 = 0;
    if ((bVar1 & 0x40) == 0) {
      return 0;
    }
    do {
      iVar9 = iVar8;
      if (bVar5 < 8) {
        return 0;
      }
      bVar5 = (char)bVar5 >> 1;
      iVar8 = iVar9 + 1;
      if (bVar5 == 8) {
        if (in_EDX < iVar8) {
          return 0;
        }
        bVar2 = *pbVar3;
        uVar7 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar4 = 0x40;
          iVar11 = 0;
          uVar6 = 0x7f;
          if ((bVar2 & 0x40) != 0) {
            do {
              if (uVar4 < 9) break;
              uVar4 = uVar4 >> 1;
              iVar11 = iVar11 + 1;
              uVar6 = uVar6 >> 1;
            } while ((uVar7 & uVar4) != 0);
          }
          iVar10 = 1;
          uVar7 = uVar7 & uVar6;
          if (0 < iVar11) {
            do {
              if ((pbVar3[iVar10] & 0xc0) != 0x80) break;
              uVar7 = pbVar3[iVar10] & 0x3f | uVar7 << 6;
              iVar10 = iVar10 + 1;
            } while (iVar10 <= iVar11);
          }
        }
        if (0x10ffff < uVar7) {
          return 0;
        }
      }
    } while ((bVar5 & bVar1) != 0);
    if (iVar8 == 0) {
      return 0;
    }
    in_EDX = in_EDX - iVar8;
    if (in_EDX < 0) {
      return 0;
    }
    for (; -1 < iVar9; iVar9 = iVar9 + -1) {
      bVar1 = *in_ECX;
      in_ECX = in_ECX + 1;
      if ((bVar1 & 0xc0) != 0x80) {
        return 0;
      }
    }
  } while( true );
}

