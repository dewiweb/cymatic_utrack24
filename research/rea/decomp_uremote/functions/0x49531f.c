// rea decompile_all
// name: FUN_0049531f
// address: 0x49531f
// body: available
// range: 0x49531f-0x4956c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049531f(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int in_EAX;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *in_EDX;
  byte bVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  char *pcVar15;
  uint local_1c;
  byte *local_10;
  
  iVar7 = *in_EDX;
  if ((char)in_EDX[2] == '\0') {
    if (in_EAX == 0) {
      local_1c = 0;
    }
    else {
      local_1c = (uint)*(ushort *)(in_EAX + 8);
    }
    bVar12 = *(byte *)((int)in_EDX + 9);
    if (bVar12 < 8) {
      if (bVar12 == 1) {
        local_1c = (local_1c & 1) * 0xff;
        local_10 = (byte *)((iVar7 - 1U >> 3) + in_ECX);
        pcVar15 = (char *)(iVar7 + -1 + in_ECX);
        iVar9 = 7 - (iVar7 - 1U & 7);
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pcVar15 = -((*local_10 >> ((byte)iVar9 & 0x1f) & 1) != 0);
          if (iVar9 == 7) {
            iVar9 = 0;
            local_10 = local_10 + -1;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          pcVar15 = pcVar15 + -1;
        }
      }
      else if (bVar12 == 2) {
        local_1c = (local_1c & 3) * 0x55;
        local_10 = (byte *)((iVar7 - 1U >> 2) + in_ECX);
        pbVar14 = (byte *)(iVar7 + -1 + in_ECX);
        iVar9 = (3 - (iVar7 - 1U & 3)) * 2;
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          bVar12 = *local_10 >> ((byte)iVar9 & 0x1f) & 3;
          *pbVar14 = ((bVar12 << 2 | bVar12) << 2 | bVar12) << 2 | bVar12;
          if (iVar9 == 6) {
            iVar9 = 0;
            local_10 = local_10 + -1;
          }
          else {
            iVar9 = iVar9 + 2;
          }
          pbVar14 = pbVar14 + -1;
        }
      }
      else if (bVar12 == 4) {
        local_1c = (local_1c & 0xf) * 0x11;
        local_10 = (byte *)((iVar7 - 1U >> 1) + in_ECX);
        pbVar14 = (byte *)(iVar7 + -1 + in_ECX);
        iVar9 = (iVar7 - 1U & 1) * -4 + 4;
        for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
          bVar12 = *local_10 >> ((byte)iVar9 & 0x1f);
          *pbVar14 = bVar12 << 4 | bVar12 & 0xf;
          iVar8 = 4;
          if (iVar9 == 4) {
            iVar8 = 0;
            local_10 = local_10 + -1;
          }
          pbVar14 = pbVar14 + -1;
          iVar9 = iVar8;
        }
      }
      *(undefined1 *)((int)in_EDX + 9) = 8;
      *(undefined1 *)((int)in_EDX + 0xb) = 8;
      in_EDX[1] = iVar7;
    }
    if (in_EAX == 0) {
      return;
    }
    if (*(char *)((int)in_EDX + 9) == '\b') {
      pbVar14 = (byte *)(iVar7 + -1 + in_ECX);
      puVar13 = (undefined1 *)(in_ECX + -1 + iVar7 * 2);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if ((uint)*pbVar14 == (local_1c & 0xff)) {
          *puVar13 = 0;
        }
        else {
          *puVar13 = 0xff;
        }
        puVar13[-1] = *pbVar14;
        puVar13 = puVar13 + -2;
        pbVar14 = pbVar14 + -1;
      }
    }
    else if (*(char *)((int)in_EDX + 9) == '\x10') {
      pbVar14 = (byte *)(in_EDX[1] + -1 + in_ECX);
      puVar13 = (undefined1 *)(in_ECX + -1 + in_EDX[1] * 2);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((uint)pbVar14[-1] == local_1c >> 8) && ((uint)*pbVar14 == (local_1c & 0xff))) {
          *puVar13 = 0;
          puVar13[-1] = 0;
        }
        else {
          *puVar13 = 0xff;
          puVar13[-1] = 0xff;
        }
        puVar13[-2] = *pbVar14;
        puVar13[-3] = pbVar14[-1];
        puVar13 = puVar13 + -4;
        pbVar14 = pbVar14 + -2;
      }
    }
    *(undefined1 *)(in_EDX + 2) = 4;
    *(undefined1 *)((int)in_EDX + 10) = 2;
    bVar12 = *(char *)((int)in_EDX + 9) * '\x02';
  }
  else {
    if ((char)in_EDX[2] != '\x02') {
      return;
    }
    if (in_EAX == 0) {
      return;
    }
    if (*(char *)((int)in_EDX + 9) == '\b') {
      cVar1 = *(char *)(in_EAX + 4);
      cVar2 = *(char *)(in_EAX + 2);
      cVar3 = *(char *)(in_EAX + 6);
      pcVar15 = (char *)(in_EDX[1] + -1 + in_ECX);
      puVar13 = (undefined1 *)(in_ECX + -1 + iVar7 * 4);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((pcVar15[-2] == cVar2) && (pcVar15[-1] == cVar1)) && (*pcVar15 == cVar3)) {
          *puVar13 = 0;
        }
        else {
          *puVar13 = 0xff;
        }
        puVar13[-1] = *pcVar15;
        puVar13[-2] = pcVar15[-1];
        puVar13[-3] = pcVar15[-2];
        puVar13 = puVar13 + -4;
        pcVar15 = pcVar15 + -3;
      }
    }
    else if (*(char *)((int)in_EDX + 9) == '\x10') {
      cVar1 = *(char *)(in_EAX + 3);
      cVar2 = *(char *)(in_EAX + 5);
      cVar3 = *(char *)(in_EAX + 7);
      cVar4 = *(char *)(in_EAX + 2);
      cVar5 = *(char *)(in_EAX + 4);
      cVar6 = *(char *)(in_EAX + 6);
      pcVar15 = (char *)(in_EDX[1] + -1 + in_ECX);
      puVar13 = (undefined1 *)(in_ECX + -1 + iVar7 * 8);
      for (iVar10 = iVar7; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (((((pcVar15[-5] == cVar1) && (pcVar15[-4] == cVar4)) && (pcVar15[-3] == cVar2)) &&
            ((pcVar15[-2] == cVar5 && (pcVar15[-1] == cVar3)))) && (*pcVar15 == cVar6)) {
          *puVar13 = 0;
          puVar13[-1] = 0;
        }
        else {
          *puVar13 = 0xff;
          puVar13[-1] = 0xff;
        }
        puVar13[-2] = *pcVar15;
        puVar13[-3] = pcVar15[-1];
        puVar13[-4] = pcVar15[-2];
        puVar13[-5] = pcVar15[-3];
        puVar13[-6] = pcVar15[-4];
        puVar13[-7] = pcVar15[-5];
        puVar13 = puVar13 + -8;
        pcVar15 = pcVar15 + -6;
      }
    }
    *(undefined1 *)(in_EDX + 2) = 6;
    *(undefined1 *)((int)in_EDX + 10) = 4;
    bVar12 = *(char *)((int)in_EDX + 9) << 2;
  }
  *(byte *)((int)in_EDX + 0xb) = bVar12;
  if (bVar12 < 8) {
    uVar11 = (uint)bVar12 * iVar7 + 7 >> 3;
  }
  else {
    uVar11 = (uint)(bVar12 >> 3) * iVar7;
  }
  in_EDX[1] = uVar11;
  return;
}

