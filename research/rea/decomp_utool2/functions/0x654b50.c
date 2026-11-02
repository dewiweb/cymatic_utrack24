// rea decompile_all
// name: FUN_00654b50
// address: 0x654b50
// body: available
// range: 0x654b50-0x654c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00654b50(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int in_ECX;
  byte *pbVar23;
  uint uVar24;
  
  bVar20 = false;
  uVar4 = *(ushort *)(in_ECX + 0x104);
  bVar21 = false;
  if ((uVar4 != 0) && (iVar22 = 0, uVar4 != 0)) {
    do {
      cVar3 = *(char *)(*(int *)(in_ECX + 0x168) + iVar22);
      if (cVar3 != -1) {
        if (cVar3 == '\0') {
          bVar21 = true;
        }
        else {
          bVar20 = true;
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < (int)(uint)uVar4);
    if (bVar20) goto LAB_00654bbd;
  }
  *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xff7fffff;
  *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) & 0xffffdfff;
  if (!bVar21) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xfffffe7f;
  }
LAB_00654bbd:
  if ((*(uint *)(in_ECX + 0x30) & 0x1100) == 0x1100) {
    pbVar23 = (byte *)((uint)*(byte *)(in_ECX + 0x11c) * 3 + *(int *)(in_ECX + 0xf8));
    *(ushort *)(in_ECX + 0x11e) = (ushort)*pbVar23;
    *(ushort *)(in_ECX + 0x120) = (ushort)pbVar23[1];
    *(ushort *)(in_ECX + 0x122) = (ushort)pbVar23[2];
    if ((*(uint *)(in_ECX + 0x30) & 0x2080000) == 0x80000) {
      uVar24 = (uint)*(ushort *)(in_ECX + 0x104);
      iVar22 = 0;
      if ((uVar24 != 0) && (0x1f < uVar24)) {
        iVar5 = *(int *)(in_ECX + 0x168);
        do {
          pcVar1 = (char *)(iVar5 + iVar22);
          cVar3 = pcVar1[1];
          cVar6 = pcVar1[2];
          cVar7 = pcVar1[3];
          cVar8 = pcVar1[4];
          cVar9 = pcVar1[5];
          cVar10 = pcVar1[6];
          cVar11 = pcVar1[7];
          cVar12 = pcVar1[8];
          cVar13 = pcVar1[9];
          cVar14 = pcVar1[10];
          cVar15 = pcVar1[0xb];
          cVar16 = pcVar1[0xc];
          cVar17 = pcVar1[0xd];
          cVar18 = pcVar1[0xe];
          cVar19 = pcVar1[0xf];
          pcVar2 = (char *)(iVar5 + iVar22);
          *pcVar2 = -1 - *pcVar1;
          pcVar2[1] = -1 - cVar3;
          pcVar2[2] = -1 - cVar6;
          pcVar2[3] = -1 - cVar7;
          pcVar2[4] = -1 - cVar8;
          pcVar2[5] = -1 - cVar9;
          pcVar2[6] = -1 - cVar10;
          pcVar2[7] = -1 - cVar11;
          pcVar2[8] = -1 - cVar12;
          pcVar2[9] = -1 - cVar13;
          pcVar2[10] = -1 - cVar14;
          pcVar2[0xb] = -1 - cVar15;
          pcVar2[0xc] = -1 - cVar16;
          pcVar2[0xd] = -1 - cVar17;
          pcVar2[0xe] = -1 - cVar18;
          pcVar2[0xf] = -1 - cVar19;
          pcVar1 = (char *)(iVar5 + 0x10 + iVar22);
          cVar3 = pcVar1[1];
          cVar6 = pcVar1[2];
          cVar7 = pcVar1[3];
          cVar8 = pcVar1[4];
          cVar9 = pcVar1[5];
          cVar10 = pcVar1[6];
          cVar11 = pcVar1[7];
          cVar12 = pcVar1[8];
          cVar13 = pcVar1[9];
          cVar14 = pcVar1[10];
          cVar15 = pcVar1[0xb];
          cVar16 = pcVar1[0xc];
          cVar17 = pcVar1[0xd];
          cVar18 = pcVar1[0xe];
          cVar19 = pcVar1[0xf];
          pcVar2 = (char *)(iVar5 + 0x10 + iVar22);
          *pcVar2 = -1 - *pcVar1;
          pcVar2[1] = -1 - cVar3;
          pcVar2[2] = -1 - cVar6;
          pcVar2[3] = -1 - cVar7;
          pcVar2[4] = -1 - cVar8;
          pcVar2[5] = -1 - cVar9;
          pcVar2[6] = -1 - cVar10;
          pcVar2[7] = -1 - cVar11;
          pcVar2[8] = -1 - cVar12;
          pcVar2[9] = -1 - cVar13;
          pcVar2[10] = -1 - cVar14;
          pcVar2[0xb] = -1 - cVar15;
          pcVar2[0xc] = -1 - cVar16;
          pcVar2[0xd] = -1 - cVar17;
          pcVar2[0xe] = -1 - cVar18;
          pcVar2[0xf] = -1 - cVar19;
          iVar22 = iVar22 + 0x20;
        } while (iVar22 < (int)(uVar24 & 0xffffffe0));
      }
      if (iVar22 < (int)uVar24) {
        iVar5 = *(int *)(in_ECX + 0x168);
        do {
          pbVar23 = (byte *)(iVar5 + iVar22);
          *pbVar23 = ~*pbVar23;
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)uVar24);
      }
    }
  }
  return;
}

