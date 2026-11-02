// rea decompile_all
// name: FUN_0041d350
// address: 0x41d350
// body: available
// range: 0x41d350-0x41daa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0041d350(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  undefined4 *in_ECX;
  byte *pbVar8;
  int iVar9;
  int *in_EDX;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *local_18;
  int *local_c;
  int *local_8;
  
  piVar7 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1);
  FUN_0041dc40(param_1 + -1);
  local_8 = piVar7;
  if (in_EDX < piVar7) {
    do {
      pbVar10 = (byte *)*local_8;
      pbVar1 = pbVar10 + -8;
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
      }
      pbVar8 = (byte *)local_8[-1];
      piVar15 = local_8 + -1;
      pbVar2 = pbVar8 + -8;
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar2 = *(int *)pbVar2 + 1;
        UNLOCK();
      }
      iVar12 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d3e1;
          do {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
          } while ((*pbVar3 & 0xc0) == 0x80);
          iVar12 = iVar12 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d3e1:
        iVar12 = iVar12 + 1;
      }
      iVar9 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d407;
          do {
            pbVar8 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
          } while ((*pbVar8 & 0xc0) == 0x80);
          iVar9 = iVar9 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d407:
        iVar9 = iVar9 + 1;
      }
      if (iVar12 < iVar9) {
        iVar12 = 1;
      }
      else {
        iVar12 = (iVar12 <= iVar9) - 1;
      }
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar2;
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar2);
        }
      }
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar1;
        *(int *)pbVar1 = *(int *)pbVar1 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar1);
        }
      }
      if (iVar12 < 0) break;
      pbVar10 = (byte *)*piVar15;
      pbVar1 = pbVar10 + -8;
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
      }
      pbVar8 = (byte *)*local_8;
      pbVar2 = pbVar8 + -8;
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar2 = *(int *)pbVar2 + 1;
        UNLOCK();
      }
      iVar12 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d4b2;
          do {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
          } while ((*pbVar3 & 0xc0) == 0x80);
          iVar12 = iVar12 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d4b2:
        iVar12 = iVar12 + 1;
      }
      iVar9 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d4d8;
          do {
            pbVar8 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
          } while ((*pbVar8 & 0xc0) == 0x80);
          iVar9 = iVar9 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d4d8:
        iVar9 = iVar9 + 1;
      }
      if (iVar12 < iVar9) {
        iVar12 = 1;
      }
      else {
        iVar12 = (iVar12 <= iVar9) - 1;
      }
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar2;
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar2);
        }
      }
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar1;
        *(int *)pbVar1 = *(int *)pbVar1 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar1);
        }
      }
      if ((iVar12 < 0) || (local_8 = piVar15, piVar15 <= in_EDX)) break;
    } while( true );
  }
  do {
    piVar7 = piVar7 + 1;
    if (param_1 <= piVar7) break;
    pbVar10 = (byte *)*local_8;
    pbVar1 = pbVar10 + -8;
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar1 = *(int *)pbVar1 + 1;
      UNLOCK();
    }
    pbVar8 = (byte *)*piVar7;
    pbVar2 = pbVar8 + -8;
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar2 = *(int *)pbVar2 + 1;
      UNLOCK();
    }
    iVar12 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d5a5;
        do {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
        } while ((*pbVar3 & 0xc0) == 0x80);
        iVar12 = iVar12 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d5a5:
      iVar12 = iVar12 + 1;
    }
    iVar9 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d5d1;
        do {
          pbVar8 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
        } while ((*pbVar8 & 0xc0) == 0x80);
        iVar9 = iVar9 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d5d1:
      iVar9 = iVar9 + 1;
    }
    if (iVar12 < iVar9) {
      iVar12 = 1;
    }
    else {
      iVar12 = (iVar12 <= iVar9) - 1;
    }
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar2;
      *(int *)pbVar2 = *(int *)pbVar2 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar2);
      }
    }
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar1;
      *(int *)pbVar1 = *(int *)pbVar1 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar1);
      }
    }
    if (iVar12 < 0) break;
    pbVar10 = (byte *)*piVar7;
    pbVar1 = pbVar10 + -8;
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar1 = *(int *)pbVar1 + 1;
      UNLOCK();
    }
    pbVar8 = (byte *)*local_8;
    pbVar2 = pbVar8 + -8;
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar2 = *(int *)pbVar2 + 1;
      UNLOCK();
    }
    iVar12 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d681;
        do {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
        } while ((*pbVar3 & 0xc0) == 0x80);
        iVar12 = iVar12 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d681:
      iVar12 = iVar12 + 1;
    }
    iVar9 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d6a7;
        do {
          pbVar8 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
        } while ((*pbVar8 & 0xc0) == 0x80);
        iVar9 = iVar9 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d6a7:
      iVar9 = iVar9 + 1;
    }
    if (iVar12 < iVar9) {
      iVar12 = 1;
    }
    else {
      iVar12 = (iVar12 <= iVar9) - 1;
    }
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar2;
      *(int *)pbVar2 = *(int *)pbVar2 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar2);
      }
    }
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar1;
      *(int *)pbVar1 = *(int *)pbVar1 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar1);
      }
    }
  } while (-1 < iVar12);
  local_18 = local_8;
  piVar15 = local_8;
  piVar5 = piVar7;
  piVar14 = piVar7;
  do {
    while (piVar13 = piVar15, param_1 <= piVar7) {
joined_r0x0041d92f:
      while (piVar11 = piVar7, in_EDX < piVar15) {
        piVar13 = piVar13 + -1;
        piVar7 = (int *)(*local_8 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        iVar12 = *piVar13;
        piVar7 = (int *)(iVar12 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        cVar6 = FUN_0041dbc0(iVar12);
        if (cVar6 == '\0') {
          piVar7 = (int *)(*piVar13 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          iVar12 = *local_8;
          piVar7 = (int *)(iVar12 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          cVar6 = FUN_0041dbc0(iVar12);
          piVar11 = piVar5;
          local_18 = piVar15;
          if (cVar6 != '\0') break;
          local_8 = local_8 + -1;
          if (local_8 != piVar13) {
            iVar12 = *local_8;
            *local_8 = (int)&DAT_00bfe12c;
            *local_8 = *piVar13;
            *piVar13 = iVar12;
          }
        }
        local_18 = piVar15 + -1;
        piVar7 = piVar5;
        piVar15 = local_18;
      }
      if (piVar15 == in_EDX) {
        if (piVar11 == param_1) {
          *in_ECX = local_8;
          in_ECX[1] = piVar14;
          return in_ECX;
        }
        if (piVar14 != piVar11) {
          iVar12 = *local_8;
          *local_8 = (int)&DAT_00bfe12c;
          *local_8 = *piVar14;
          *piVar14 = iVar12;
        }
        piVar14 = piVar14 + 1;
        piVar7 = piVar11 + 1;
        iVar12 = *local_8;
        *local_8 = (int)&DAT_00bfe12c;
        *local_8 = *piVar11;
        *piVar11 = iVar12;
        piVar5 = piVar7;
        local_8 = local_8 + 1;
      }
      else {
        piVar15 = piVar15 + -1;
        local_18 = piVar15;
        if (piVar11 == param_1) {
          local_8 = local_8 + -1;
          if (piVar15 != local_8) {
            iVar12 = *piVar15;
            *piVar15 = (int)&DAT_00bfe12c;
            *piVar15 = *local_8;
            *local_8 = iVar12;
          }
          iVar12 = *local_8;
          piVar14 = piVar14 + -1;
          *local_8 = (int)&DAT_00bfe12c;
          *local_8 = *piVar14;
          *piVar14 = iVar12;
          piVar7 = piVar11;
        }
        else {
          iVar12 = *piVar11;
          *piVar11 = (int)&DAT_00bfe12c;
          *piVar11 = *piVar15;
          piVar7 = piVar11 + 1;
          *piVar15 = iVar12;
          piVar5 = piVar7;
        }
      }
    }
    pbVar10 = (byte *)*piVar7;
    pbVar1 = pbVar10 + -8;
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar1 = *(int *)pbVar1 + 1;
      UNLOCK();
    }
    pbVar8 = (byte *)*local_8;
    pbVar2 = pbVar8 + -8;
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar2 = *(int *)pbVar2 + 1;
      UNLOCK();
    }
    iVar12 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d788;
        do {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
        } while ((*pbVar3 & 0xc0) == 0x80);
        iVar12 = iVar12 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d788:
      iVar12 = iVar12 + 1;
    }
    iVar9 = 0;
    while( true ) {
      while( true ) {
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (-1 < (char)bVar4) break;
        if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d7b1;
        do {
          pbVar8 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
        } while ((*pbVar8 & 0xc0) == 0x80);
        iVar9 = iVar9 + 1;
      }
      if (bVar4 == 0) break;
LAB_0041d7b1:
      iVar9 = iVar9 + 1;
    }
    if (iVar12 < iVar9) {
      iVar12 = 1;
    }
    else {
      iVar12 = (iVar12 <= iVar9) - 1;
    }
    if (pbVar2 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar2;
      *(int *)pbVar2 = *(int *)pbVar2 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar2);
      }
    }
    if (pbVar1 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar9 = *(int *)pbVar1;
      *(int *)pbVar1 = *(int *)pbVar1 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(pbVar1);
      }
    }
    local_c = piVar14;
    piVar15 = local_18;
    if (-1 < iVar12) {
      pbVar10 = (byte *)*local_8;
      pbVar1 = pbVar10 + -8;
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
      }
      pbVar8 = (byte *)*piVar5;
      pbVar2 = pbVar8 + -8;
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        *(int *)pbVar2 = *(int *)pbVar2 + 1;
        UNLOCK();
      }
      iVar12 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041d865;
          do {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
          } while ((*pbVar3 & 0xc0) == 0x80);
          iVar12 = iVar12 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d865:
        iVar12 = iVar12 + 1;
      }
      iVar9 = 0;
      while( true ) {
        while( true ) {
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (-1 < (char)bVar4) break;
          if ((*pbVar10 & 0xc0) != 0x80) goto LAB_0041d891;
          do {
            pbVar8 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
          } while ((*pbVar8 & 0xc0) == 0x80);
          iVar9 = iVar9 + 1;
        }
        if (bVar4 == 0) break;
LAB_0041d891:
        iVar9 = iVar9 + 1;
      }
      if (iVar12 < iVar9) {
        iVar12 = 1;
      }
      else {
        iVar12 = (iVar12 <= iVar9) - 1;
      }
      if (pbVar2 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar2;
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar2);
        }
      }
      if (pbVar1 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar9 = *(int *)pbVar1;
        *(int *)pbVar1 = *(int *)pbVar1 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(pbVar1);
        }
      }
      piVar7 = piVar5;
      piVar13 = local_18;
      if (iVar12 < 0) goto joined_r0x0041d92f;
      local_c = piVar14 + 1;
      if (piVar14 != piVar5) {
        iVar12 = *piVar14;
        *piVar14 = (int)&DAT_00bfe12c;
        *piVar14 = *piVar5;
        *piVar5 = iVar12;
      }
    }
    piVar7 = piVar5 + 1;
    piVar5 = piVar5 + 1;
    piVar14 = local_c;
  } while( true );
}

