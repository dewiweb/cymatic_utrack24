// rea decompile_all
// name: FUN_005e9f20
// address: 0x5e9f20
// body: available
// range: 0x5e9f20-0x5ea220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e9f20(void)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *in_ECX;
  int *in_EDX;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int local_10;
  
  local_10 = in_EDX[2];
  iVar15 = in_EDX[3];
  iVar6 = *in_EDX;
  iVar16 = 0;
  cVar3 = *(char *)(iVar6 + 4);
  bVar4 = *(byte *)(iVar6 + 5);
  bVar9 = bVar4 & 2;
  uVar17 = FUN_005eaad0();
  iVar14 = *(int *)(iVar6 + 0xe);
  iVar8 = *(int *)(iVar6 + 0x12);
  uVar10 = (uint)*(byte *)(iVar6 + 0x1a);
  iVar11 = in_ECX[3];
  iVar7 = in_ECX[9];
  if (iVar11 != 0) {
    piVar1 = in_ECX + 2;
    *piVar1 = *piVar1 - iVar11;
    if (*piVar1 != 0) {
      FUN_004c1df0(*in_ECX,iVar11 + *in_ECX,in_ECX[2]);
    }
    in_ECX[3] = 0;
  }
  if (iVar7 != 0) {
    if (in_ECX[7] - iVar7 != 0) {
      FUN_004c1df0(in_ECX[4],in_ECX[4] + iVar7 * 4,(in_ECX[7] - iVar7) * 4);
      FUN_004c1df0(in_ECX[5],in_ECX[5] + iVar7 * 8,(in_ECX[7] - iVar7) * 8);
    }
    in_ECX[7] = in_ECX[7] - iVar7;
    in_ECX[8] = in_ECX[8] - iVar7;
    in_ECX[9] = 0;
  }
  if ((iVar14 != in_ECX[0x54]) || (cVar3 != '\0')) {
    return 0xffffffff;
  }
  if (in_ECX[6] <= (int)(in_ECX[7] + uVar10 + 1)) {
    iVar11 = uVar10 + 0x21 + in_ECX[6];
    in_ECX[6] = iVar11;
    iVar11 = FUN_004c553b(in_ECX[4],iVar11 * 4);
    in_ECX[4] = iVar11;
    iVar11 = FUN_004c553b(in_ECX[5],in_ECX[6] << 3);
    in_ECX[5] = iVar11;
  }
  iVar11 = in_ECX[0x55];
  if (iVar8 != iVar11) {
    iVar7 = in_ECX[8];
    if (iVar7 < in_ECX[7]) {
      iVar11 = in_ECX[2];
      iVar14 = in_ECX[7] - iVar7;
      pbVar13 = (byte *)(in_ECX[4] + iVar7 * 4);
      do {
        bVar5 = *pbVar13;
        pbVar13 = pbVar13 + 4;
        iVar11 = iVar11 - (uint)bVar5;
        in_ECX[2] = iVar11;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      iVar11 = in_ECX[0x55];
    }
    in_ECX[7] = iVar7;
    if (iVar11 != -1) {
      *(undefined4 *)(in_ECX[4] + iVar7 * 4) = 0x400;
      in_ECX[7] = in_ECX[7] + 1;
      in_ECX[8] = in_ECX[8] + 1;
    }
  }
  if (((bVar4 & 1) != 0) && ((in_ECX[7] < 1 || (*(int *)(in_ECX[4] + -4 + in_ECX[7] * 4) == 0x400)))
     ) {
    bVar9 = 0;
    if (uVar10 != 0) {
      do {
        uVar12 = (uint)*(byte *)(iVar6 + 0x1b + iVar16);
        iVar16 = iVar16 + 1;
        local_10 = local_10 + uVar12;
        iVar15 = iVar15 - uVar12;
        if (uVar12 < 0xff) break;
      } while (iVar16 < (int)uVar10);
    }
  }
  if (iVar15 != 0) {
    if (in_ECX[1] <= in_ECX[2] + iVar15) {
      iVar11 = in_ECX[1] + 0x400 + iVar15;
      in_ECX[1] = iVar11;
      iVar11 = FUN_004c553b(*in_ECX,iVar11);
      *in_ECX = iVar11;
    }
    FUN_004c2c30(*in_ECX + in_ECX[2],local_10,iVar15);
    in_ECX[2] = in_ECX[2] + iVar15;
  }
  local_10 = -1;
  if (iVar16 < (int)uVar10) {
    do {
      uVar12 = (uint)*(byte *)(iVar6 + 0x1b + iVar16);
      *(uint *)(in_ECX[4] + in_ECX[7] * 4) = uVar12;
      iVar15 = in_ECX[5];
      iVar11 = in_ECX[7];
      *(undefined4 *)(iVar15 + iVar11 * 8) = 0xffffffff;
      *(undefined4 *)(iVar15 + 4 + iVar11 * 8) = 0xffffffff;
      if (bVar9 != 0) {
        puVar2 = (uint *)(in_ECX[4] + in_ECX[7] * 4);
        *puVar2 = *puVar2 | 0x100;
        bVar9 = 0;
      }
      if (uVar12 < 0xff) {
        local_10 = in_ECX[7];
      }
      in_ECX[7] = in_ECX[7] + 1;
      iVar16 = iVar16 + 1;
      if (uVar12 < 0xff) {
        in_ECX[8] = in_ECX[7];
      }
    } while (iVar16 < (int)uVar10);
    if (local_10 != -1) {
      iVar15 = in_ECX[5];
      *(int *)(iVar15 + local_10 * 8) = (int)uVar17;
      *(int *)(iVar15 + 4 + local_10 * 8) = (int)((ulonglong)uVar17 >> 0x20);
    }
  }
  if ((bVar4 & 4) != 0) {
    in_ECX[0x52] = 1;
    if (0 < in_ECX[7]) {
      puVar2 = (uint *)(in_ECX[4] + -4 + in_ECX[7] * 4);
      *puVar2 = *puVar2 | 0x200;
    }
  }
  in_ECX[0x55] = iVar8 + 1;
  return 0;
}

