// rea decompile_all
// name: FUN_00618f20
// address: 0x618f20
// body: available
// range: 0x618f20-0x61972b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00618f20(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int *in_ECX;
  uint in_EDX;
  uint uVar9;
  uint uVar10;
  uint local_8;
  
  if (((in_ECX == (int *)0x0) || (puVar2 = (undefined4 *)in_ECX[7], puVar2 == (undefined4 *)0x0)) ||
     (4 < in_EDX)) {
    return 0xfffffffe;
  }
  if (((in_ECX[3] == 0) || ((*in_ECX == 0 && (in_ECX[1] != 0)))) ||
     ((puVar2[1] == 0x29a && (in_EDX != 4)))) {
    in_ECX[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (in_ECX[4] == 0) {
    in_ECX[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  iVar7 = puVar2[10];
  *puVar2 = in_ECX;
  puVar2[10] = in_EDX;
  if (puVar2[1] == 0x2a) {
    if (puVar2[6] == 2) {
      in_ECX[0xc] = 0;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 0x1f;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 0x8b;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 8;
      puVar2[5] = puVar2[5] + 1;
      piVar3 = (int *)puVar2[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] == 9) {
          uVar8 = 2;
        }
        else if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
          uVar8 = 0;
        }
        else {
          uVar8 = 4;
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar8;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0xb;
        puVar2[5] = puVar2[5] + 1;
        puVar2[1] = 0x71;
      }
      else {
        *(byte *)(puVar2[5] + puVar2[2]) =
             (-(piVar3[9] != 0) & 0x10U) + (-(piVar3[0xb] != 0) & 2U) + (-(piVar3[7] != 0) & 8U) +
             (-(piVar3[4] != 0) & 4U) + (*piVar3 != 0);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 4);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 5);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 6);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 7);
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] == 9) {
          uVar8 = 2;
        }
        else if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
          uVar8 = 0;
        }
        else {
          uVar8 = 4;
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar8;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0xc);
        puVar2[5] = puVar2[5] + 1;
        iVar6 = puVar2[5];
        if (*(int *)(puVar2[7] + 0x10) != 0) {
          *(undefined1 *)(iVar6 + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x14);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x15);
          puVar2[5] = puVar2[5] + 1;
          iVar6 = puVar2[5];
        }
        if (*(int *)(puVar2[7] + 0x2c) != 0) {
          iVar5 = 0;
          if (puVar2[2] != 0) {
            iVar5 = FUN_00619e10(iVar6);
          }
          in_ECX[0xc] = iVar5;
        }
        puVar2[8] = 0;
        puVar2[1] = 0x45;
      }
    }
    else {
      puVar2[1] = 0x71;
      FUN_00619780();
      if (puVar2[0x1b] != 0) {
        FUN_00619780();
        FUN_00619780();
      }
      in_ECX[0xc] = 1;
    }
  }
  if (puVar2[1] == 0x45) {
    if (*(int *)(puVar2[7] + 0x10) != 0) {
      local_8 = puVar2[5];
      if ((uint)puVar2[8] < (uint)*(ushort *)(puVar2[7] + 0x14)) {
        do {
          uVar10 = puVar2[5];
          if (uVar10 == puVar2[3]) {
            if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < uVar10)) {
              if (puVar2[2] + local_8 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_00619e10(uVar10 - local_8);
              }
              in_ECX[0xc] = iVar6;
            }
            FUN_00619730();
            local_8 = puVar2[5];
            uVar10 = local_8;
            if (local_8 == puVar2[3]) break;
          }
          *(undefined1 *)(uVar10 + puVar2[2]) =
               *(undefined1 *)(*(int *)(puVar2[7] + 0x10) + puVar2[8]);
          puVar2[5] = puVar2[5] + 1;
          puVar2[8] = puVar2[8] + 1;
        } while ((uint)puVar2[8] < (uint)*(ushort *)(puVar2[7] + 0x14));
      }
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < (uint)puVar2[5])) {
        if (puVar2[2] + local_8 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_00619e10(puVar2[5] - local_8);
        }
        in_ECX[0xc] = iVar6;
      }
      if (puVar2[8] != *(int *)(puVar2[7] + 0x14)) goto LAB_00619311;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x49;
  }
LAB_00619311:
  if (puVar2[1] == 0x49) {
    if (*(int *)(puVar2[7] + 0x1c) != 0) {
      uVar10 = puVar2[5];
      do {
        uVar9 = puVar2[5];
        if (uVar9 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar10 < uVar9)) {
            iVar6 = 0;
            if (puVar2[2] + uVar10 != 0) {
              iVar6 = FUN_00619e10(uVar9 - uVar10);
            }
            in_ECX[0xc] = iVar6;
          }
          FUN_00619730();
          uVar9 = puVar2[5];
          uVar10 = uVar9;
          if (uVar9 == puVar2[3]) {
            bVar4 = true;
            goto LAB_0061939f;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x1c) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar9 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar9 = uVar10;
LAB_0061939f:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar9 < (uint)puVar2[5])) {
        if (puVar2[2] + uVar9 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_00619e10(puVar2[5] - uVar9);
        }
        in_ECX[0xc] = iVar6;
      }
      if (bVar4) goto LAB_006193df;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x5b;
  }
LAB_006193df:
  if (puVar2[1] == 0x5b) {
    if (*(int *)(puVar2[7] + 0x24) != 0) {
      uVar10 = puVar2[5];
      do {
        uVar9 = puVar2[5];
        if (uVar9 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar10 < uVar9)) {
            iVar6 = 0;
            if (puVar2[2] + uVar10 != 0) {
              iVar6 = FUN_00619e10(uVar9 - uVar10);
            }
            in_ECX[0xc] = iVar6;
          }
          FUN_00619730();
          uVar9 = puVar2[5];
          uVar10 = uVar9;
          if (uVar9 == puVar2[3]) {
            bVar4 = true;
            goto LAB_0061946f;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x24) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar9 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar9 = uVar10;
LAB_0061946f:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar9 < (uint)puVar2[5])) {
        if (puVar2[2] + uVar9 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_00619e10(puVar2[5] - uVar9);
        }
        in_ECX[0xc] = iVar6;
      }
      if (bVar4) goto LAB_006194a8;
    }
    puVar2[1] = 0x67;
  }
LAB_006194a8:
  if (puVar2[1] == 0x67) {
    if (*(int *)(puVar2[7] + 0x2c) != 0) {
      if ((uint)puVar2[3] < puVar2[5] + 2) {
        FUN_00619730();
      }
      if ((uint)puVar2[3] < puVar2[5] + 2) goto LAB_006194ff;
      *(char *)(puVar2[5] + puVar2[2]) = (char)in_ECX[0xc];
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 0x31);
      puVar2[5] = puVar2[5] + 1;
      in_ECX[0xc] = 0;
    }
    puVar2[1] = 0x71;
  }
LAB_006194ff:
  if (puVar2[5] == 0) {
    if (((in_ECX[1] == 0) && ((int)in_EDX <= iVar7)) && (in_EDX != 4)) {
      in_ECX[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_0061954c:
    if (puVar2[1] == 0x29a) {
      if (in_ECX[1] != 0) {
        in_ECX[6] = (int)"buffer error";
        return 0xfffffffb;
      }
LAB_00619576:
      if ((puVar2[0x1d] != 0) || ((in_EDX != 0 && (puVar2[1] != 0x29a)))) goto LAB_0061958f;
    }
    else {
      if (in_ECX[1] == 0) goto LAB_00619576;
LAB_0061958f:
      iVar7 = (*(code *)(&PTR_FUN_00bfe240)[puVar2[0x21] * 3])(puVar2,in_EDX);
      if ((iVar7 == 2) || (iVar7 == 3)) {
        puVar2[1] = 0x29a;
      }
      if ((iVar7 == 0) || (iVar7 == 2)) {
        if (in_ECX[4] != 0) {
          return 0;
        }
        puVar2[10] = 0xffffffff;
        return 0;
      }
      if (iVar7 == 1) {
        if (in_EDX == 1) {
          FUN_006149e0();
        }
        else {
          FUN_00614bc0(0,0);
          if (in_EDX == 3) {
            *(undefined2 *)(puVar2[0x11] + -2 + puVar2[0x13] * 2) = 0;
            _memset((void *)puVar2[0x11],0,puVar2[0x13] * 2 - 2);
          }
        }
        FUN_00619730();
        if (in_ECX[4] == 0) goto LAB_00619512;
      }
    }
    if (in_EDX == 4) {
      if ((int)puVar2[6] < 1) {
        return 1;
      }
      if (puVar2[6] == 2) {
        *(char *)(puVar2[5] + puVar2[2]) = (char)in_ECX[0xc];
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 0x31);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 0x32);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 0x33);
        puVar2[5] = puVar2[5] + 1;
        *(char *)(puVar2[5] + puVar2[2]) = (char)in_ECX[2];
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 9);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 10);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)in_ECX + 0xb);
        puVar2[5] = puVar2[5] + 1;
      }
      else {
        FUN_00619780();
        FUN_00619780();
      }
      FUN_00619730();
      if (0 < (int)puVar2[6]) {
        puVar2[6] = -puVar2[6];
      }
      return (uint)(puVar2[5] == 0);
    }
  }
  else {
    FUN_00619730();
    if (in_ECX[4] != 0) goto LAB_0061954c;
LAB_00619512:
    puVar2[10] = 0xffffffff;
  }
  return 0;
}

