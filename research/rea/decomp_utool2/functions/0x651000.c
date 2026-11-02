// rea decompile_all
// name: FUN_00651000
// address: 0x651000
// body: available
// range: 0x651000-0x6513f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651000(int param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int *in_ECX;
  undefined1 *puVar9;
  byte bVar10;
  int in_EDX;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  uint local_1c;
  
  iVar8 = *in_ECX;
  if ((char)in_ECX[2] == '\0') {
    if (param_1 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = (uint)*(ushort *)(param_1 + 8);
    }
    bVar10 = *(byte *)((int)in_ECX + 9);
    if (bVar10 < 8) {
      if (bVar10 == 1) {
        local_1c = (local_1c & 1) * 0xff;
        pbVar14 = (byte *)((iVar8 - 1U >> 3) + in_EDX);
        pcVar15 = (char *)(in_EDX + -1 + iVar8);
        iVar11 = 7 - (iVar8 - 1U & 7);
        for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
          *pcVar15 = -((*pbVar14 >> ((byte)iVar11 & 0x1f) & 1) != 0);
          if (iVar11 == 7) {
            iVar11 = 0;
            pbVar14 = pbVar14 + -1;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          pcVar15 = pcVar15 + -1;
        }
      }
      else if (bVar10 == 2) {
        local_1c = (local_1c & 3) * 0x55;
        pbVar14 = (byte *)(in_EDX + -1 + iVar8);
        pbVar12 = (byte *)((iVar8 - 1U >> 2) + in_EDX);
        iVar11 = (3 - (iVar8 - 1U & 3)) * 2;
        for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
          bVar10 = *pbVar12 >> ((byte)iVar11 & 0x1f) & 3;
          *pbVar14 = ((bVar10 << 2 | bVar10) << 2 | bVar10) << 2 | bVar10;
          if (iVar11 == 6) {
            iVar11 = 0;
            pbVar12 = pbVar12 + -1;
          }
          else {
            iVar11 = iVar11 + 2;
          }
          pbVar14 = pbVar14 + -1;
        }
      }
      else if (bVar10 == 4) {
        local_1c = (local_1c & 0xf) * 0x11;
        pbVar14 = (byte *)(in_EDX + -1 + iVar8);
        pbVar12 = (byte *)((iVar8 - 1U >> 1) + in_EDX);
        iVar11 = (iVar8 - 1U & 1) * -4 + 4;
        for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
          bVar10 = *pbVar12 >> ((byte)iVar11 & 0x1f);
          *pbVar14 = bVar10 << 4 | bVar10 & 0xf;
          if (iVar11 == 4) {
            iVar11 = 0;
            pbVar12 = pbVar12 + -1;
          }
          else {
            iVar11 = 4;
          }
          pbVar14 = pbVar14 + -1;
        }
      }
      *(undefined1 *)((int)in_ECX + 9) = 8;
      *(undefined1 *)((int)in_ECX + 0xb) = 8;
      in_ECX[1] = iVar8;
    }
    if (param_1 == 0) {
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\b') {
      pbVar12 = (byte *)(in_EDX + -1 + iVar8);
      pbVar14 = (byte *)(in_EDX + iVar8 * 2);
      for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
        if ((uint)*pbVar12 == (local_1c & 0xff)) {
          pbVar14[-1] = 0;
        }
        else {
          pbVar14[-1] = 0xff;
        }
        bVar10 = *pbVar12;
        pbVar14 = pbVar14 + -2;
        pbVar12 = pbVar12 + -1;
        *pbVar14 = bVar10;
      }
    }
    else if (*(char *)((int)in_ECX + 9) == '\x10') {
      pbVar14 = (byte *)(in_EDX + -1 + in_ECX[1]);
      iVar11 = in_EDX + in_ECX[1] * 2 + -1;
      for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (((uint)pbVar14[-1] == local_1c >> 8) && ((uint)*pbVar14 == (local_1c & 0xff))) {
          *(undefined2 *)(iVar11 + -1) = 0;
        }
        else {
          *(undefined2 *)(iVar11 + -1) = 0xffff;
        }
        *(byte *)(iVar11 + -2) = *pbVar14;
        pbVar12 = pbVar14 + -1;
        pbVar14 = pbVar14 + -2;
        *(byte *)(iVar11 + -3) = *pbVar12;
        iVar11 = iVar11 + -4;
      }
    }
    bVar10 = *(byte *)((int)in_ECX + 9) * '\x02';
    *(undefined1 *)(in_ECX + 2) = 4;
    *(byte *)((int)in_ECX + 0xb) = bVar10;
    *(undefined1 *)((int)in_ECX + 10) = 2;
    if (7 < bVar10) {
      in_ECX[1] = (uint)((*(byte *)((int)in_ECX + 9) & 0x7f) >> 2) * iVar8;
      return;
    }
  }
  else {
    if ((char)in_ECX[2] != '\x02') {
      return;
    }
    if (param_1 == 0) {
      return;
    }
    if (*(char *)((int)in_ECX + 9) == '\b') {
      cVar2 = *(char *)(param_1 + 2);
      cVar3 = *(char *)(param_1 + 4);
      cVar4 = *(char *)(param_1 + 6);
      pcVar15 = (char *)(in_EDX + -1 + in_ECX[1]);
      puVar9 = (undefined1 *)(in_EDX + iVar8 * 4 + -1);
      for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (((pcVar15[-2] == cVar2) && (pcVar15[-1] == cVar3)) && (*pcVar15 == cVar4)) {
          *puVar9 = 0;
        }
        else {
          *puVar9 = 0xff;
        }
        puVar9[-1] = *pcVar15;
        puVar9[-2] = pcVar15[-1];
        pcVar1 = pcVar15 + -2;
        pcVar15 = pcVar15 + -3;
        puVar9[-3] = *pcVar1;
        puVar9 = puVar9 + -4;
      }
    }
    else if (*(char *)((int)in_ECX + 9) == '\x10') {
      cVar2 = *(char *)(param_1 + 3);
      cVar3 = *(char *)(param_1 + 5);
      cVar4 = *(char *)(param_1 + 7);
      cVar5 = *(char *)(param_1 + 2);
      cVar6 = *(char *)(param_1 + 4);
      cVar7 = *(char *)(param_1 + 6);
      pcVar15 = (char *)(in_EDX + -1 + in_ECX[1]);
      iVar11 = in_EDX + iVar8 * 8 + -1;
      for (iVar13 = iVar8; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (((((pcVar15[-5] == cVar2) && (pcVar15[-4] == cVar5)) && (pcVar15[-3] == cVar3)) &&
            ((pcVar15[-2] == cVar6 && (pcVar15[-1] == cVar4)))) && (*pcVar15 == cVar7)) {
          *(undefined2 *)(iVar11 + -1) = 0;
        }
        else {
          *(undefined2 *)(iVar11 + -1) = 0xffff;
        }
        *(char *)(iVar11 + -2) = *pcVar15;
        *(char *)(iVar11 + -3) = pcVar15[-1];
        *(char *)(iVar11 + -4) = pcVar15[-2];
        *(char *)(iVar11 + -5) = pcVar15[-3];
        *(char *)(iVar11 + -6) = pcVar15[-4];
        pcVar1 = pcVar15 + -5;
        pcVar15 = pcVar15 + -6;
        *(char *)(iVar11 + -7) = *pcVar1;
        iVar11 = iVar11 + -8;
      }
    }
    bVar10 = *(byte *)((int)in_ECX + 9) << 2;
    *(byte *)((int)in_ECX + 0xb) = bVar10;
    *(undefined1 *)(in_ECX + 2) = 6;
    *(undefined1 *)((int)in_ECX + 10) = 4;
    if (7 < bVar10) {
      in_ECX[1] = (uint)((*(byte *)((int)in_ECX + 9) & 0x3f) >> 1) * iVar8;
      return;
    }
  }
  in_ECX[1] = (uint)bVar10 * iVar8 + 7 >> 3;
  return;
}

