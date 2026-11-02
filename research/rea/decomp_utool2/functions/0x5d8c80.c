// rea decompile_all
// name: FUN_005d8c80
// address: 0x5d8c80
// body: available
// range: 0x5d8c80-0x5d92aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005d8c80(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  uint uVar8;
  int iVar9;
  undefined4 *in_EDX;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int aiStackY_50 [2];
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  aiStackY_50[1] = 0x5d8cab;
  _memset(in_ECX,0,0x38);
  uVar8 = in_EDX[1];
  iVar10 = 0;
  if (0 < (int)uVar8) {
    if (7 < uVar8) {
      uVar5 = uVar8 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar11 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      do {
        piVar13 = (int *)(in_EDX[2] + iVar10 * 4);
        piVar2 = (int *)(in_EDX[2] + 0x10 + iVar10 * 4);
        iVar10 = iVar10 + 8;
        uVar21 = uVar21 & ~-(uint)(0 < *piVar13) | -(uint)(0 < *piVar13) & uVar21 + 1;
        uVar22 = uVar22 & ~-(uint)(0 < piVar13[1]) | -(uint)(0 < piVar13[1]) & uVar22 + 1;
        uVar23 = uVar23 & ~-(uint)(0 < piVar13[2]) | -(uint)(0 < piVar13[2]) & uVar23 + 1;
        uVar24 = uVar24 & ~-(uint)(0 < piVar13[3]) | -(uint)(0 < piVar13[3]) & uVar24 + 1;
        uVar11 = uVar11 & ~-(uint)(0 < *piVar2) | -(uint)(0 < *piVar2) & uVar11 + 1;
        uVar18 = uVar18 & ~-(uint)(0 < piVar2[1]) | -(uint)(0 < piVar2[1]) & uVar18 + 1;
        uVar19 = uVar19 & ~-(uint)(0 < piVar2[2]) | -(uint)(0 < piVar2[2]) & uVar19 + 1;
        uVar20 = uVar20 & ~-(uint)(0 < piVar2[3]) | -(uint)(0 < piVar2[3]) & uVar20 + 1;
      } while (iVar10 < (int)(uVar8 - uVar5));
      local_18 = uVar11 + uVar21 + uVar19 + uVar23 + uVar18 + uVar22 + uVar20 + uVar24;
    }
    if (iVar10 < (int)uVar8) {
      iVar17 = local_18;
      do {
        iVar9 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        local_18 = iVar17 + 1;
        if (*(int *)(in_EDX[2] + iVar9) < 1) {
          local_18 = iVar17;
        }
        iVar17 = local_18;
      } while (iVar10 < (int)uVar8);
    }
  }
  in_ECX[1] = uVar8;
  in_ECX[2] = local_18;
  *in_ECX = *in_EDX;
  if (0 < local_18) {
    puVar6 = (uint *)FUN_005d97f0();
    iVar10 = local_18 * -4;
    if (puVar6 == (uint *)0x0) {
      *(undefined4 *)(&stack0xffffffc0 + iVar10) = 0x5d8dd9;
      FUN_005d9410();
      __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (0 < local_18) {
      puVar12 = puVar6;
      iVar17 = local_18;
      do {
        uVar8 = *puVar12 << 0x10 | *puVar12 >> 0x10;
        uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8;
        uVar8 = (uVar8 >> 4 ^ uVar8 << 4) & 0xf0f0f0f ^ uVar8 << 4;
        uVar8 = (uVar8 >> 2 ^ uVar8 * 4) & 0x33333333 ^ uVar8 * 4;
        *puVar12 = (uVar8 >> 1 ^ uVar8 * 2) & 0x55555555 ^ uVar8 * 2;
        *(uint **)(&stack0xffffffc4 + (iVar10 - (int)puVar6) + (int)puVar12) = puVar12;
        puVar12 = puVar12 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    *(code **)(&stack0xffffffc0 + iVar10) = FUN_005d92b0;
    *(undefined4 *)(&stack0xffffffbc + iVar10) = 4;
    *(int *)(&stack0xffffffb8 + iVar10) = local_18;
    aiStackY_50[1 - local_18] = (int)(&stack0xffffffc4 + iVar10);
    aiStackY_50[-local_18] = 0x5d8e8f;
    _qsort((void *)aiStackY_50[1 - local_18],*(size_t *)(&stack0xffffffb8 + iVar10),
           *(size_t *)(&stack0xffffffbc + iVar10),*(_PtFuncCompare **)(&stack0xffffffc0 + iVar10));
    iVar17 = local_18 * -8;
    piVar13 = (int *)(&stack0xffffffc4 + iVar17);
    *(undefined4 *)(&stack0xffffffc0 + iVar10) = 0x5d8e9e;
    *(int *)(&stack0xffffffc0 + local_18 * -8) = local_18 * 4;
    piVar14 = (int *)(&stack0xffffffbc + local_18 * -8);
    *(undefined4 *)(&stack0xffffffbc + local_18 * -8) = 0x5d8eae;
    uVar7 = FUN_004c554b();
    iVar9 = 0;
    in_ECX[5] = uVar7;
    if (0 < local_18) {
      do {
        *(int *)(&stack0xffffffc4 +
                (*(int *)(&stack0xffffffc4 + iVar9 * 4 + iVar10) - (int)puVar6 >> 2) * 4 + iVar17) =
             iVar9;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_18);
      if (0 < local_18) {
        iVar10 = local_18;
        do {
          iVar9 = *piVar13;
          piVar13 = piVar13 + 1;
          *(undefined4 *)(in_ECX[5] + iVar9 * 4) =
               *(undefined4 *)((int)puVar6 + (-4 - (int)(&stack0xffffffc4 + iVar17)) + (int)piVar13)
          ;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    *piVar14 = (int)puVar6;
    piVar14[-1] = 0x5d8f0a;
    FID_conflict__free((void *)*piVar14);
    *piVar14 = (int)(&stack0xffffffc4 + iVar17);
    piVar14[-1] = 0x5d8f19;
    uVar7 = FUN_005d94d0();
    in_ECX[4] = uVar7;
    *piVar14 = local_18 * 4;
    piVar15 = piVar14 + -1;
    piVar14[-1] = 0x5d8f2c;
    uVar7 = FUN_004c554b();
    iVar10 = 0;
    in_ECX[6] = uVar7;
    iVar9 = 0;
    if (0 < (int)in_EDX[1]) {
      do {
        if (0 < *(int *)(in_EDX[2] + iVar10 * 4)) {
          iVar1 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(int *)(in_ECX[6] + *(int *)(&stack0xffffffc4 + iVar1 + iVar17) * 4) = iVar10;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)in_EDX[1]);
    }
    *piVar15 = iVar9;
    piVar16 = piVar15 + -1;
    piVar15[-1] = 0x5d8f62;
    uVar7 = FUN_004c554b();
    in_ECX[7] = uVar7;
    iVar10 = 0;
    local_14 = 0;
    local_1c = 0;
    if (0 < (int)in_EDX[1]) {
      do {
        if (0 < *(int *)(in_EDX[2] + local_14 * 4)) {
          iVar9 = iVar10 * 4;
          iVar10 = iVar10 + 1;
          *(undefined1 *)(*(int *)(&stack0xffffffc4 + iVar9 + iVar17) + in_ECX[7]) =
               *(undefined1 *)(in_EDX[2] + local_14 * 4);
        }
        local_14 = local_14 + 1;
        local_1c = iVar10;
      } while ((int)local_14 < (int)in_EDX[1]);
    }
    iVar10 = 0;
    for (uVar8 = in_ECX[2]; uVar8 != 0; uVar8 = uVar8 >> 1) {
      iVar10 = iVar10 + 1;
    }
    iVar10 = iVar10 + -4;
    if (iVar10 < 5) {
      iVar10 = 5;
    }
    in_ECX[9] = iVar10;
    if (8 < iVar10) {
      in_ECX[9] = 8;
    }
    iVar10 = 1 << ((byte)in_ECX[9] & 0x1f);
    *piVar16 = 4;
    piVar16[-1] = iVar10;
    piVar16[-2] = 0x5d8ff6;
    uVar7 = FUN_004c5556();
    in_ECX[8] = uVar7;
    iVar17 = 0;
    in_ECX[10] = 0;
    if (0 < local_1c) {
      do {
        iVar9 = (int)*(char *)(in_ECX[7] + iVar17);
        if ((int)in_ECX[10] < iVar9) {
          in_ECX[10] = iVar9;
        }
        cVar3 = *(char *)(in_ECX[7] + iVar17);
        if ((int)cVar3 <= (int)in_ECX[9]) {
          uVar8 = *(uint *)(in_ECX[5] + iVar17 * 4);
          uVar8 = uVar8 << 0x10 | uVar8 >> 0x10;
          uVar8 = (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8;
          uVar8 = (uVar8 >> 4 ^ uVar8 << 4) & 0xf0f0f0f ^ uVar8 << 4;
          uVar8 = (uVar8 >> 2 ^ uVar8 * 4) & 0x33333333 ^ uVar8 * 4;
          local_14 = 0;
          if (0 < 1 << ((char)in_ECX[9] - cVar3 & 0x1fU)) {
            do {
              *(int *)(in_ECX[8] +
                      (local_14 << (*(byte *)(iVar17 + in_ECX[7]) & 0x1f) |
                      (uVar8 >> 1 ^ uVar8 * 2) & 0x55555555 ^ uVar8 * 2) * 4) = iVar17 + 1;
              local_14 = local_14 + 1;
            } while ((int)local_14 < 1 << ((char)in_ECX[9] - *(char *)(in_ECX[7] + iVar17) & 0x1fU))
            ;
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < local_1c);
    }
    local_14 = 0;
    uVar7 = in_ECX[9];
    iVar17 = 0;
    local_c = 0;
    local_10 = 0;
    if (0 < iVar10) {
      do {
        uVar8 = local_10 << (0x20U - (char)in_ECX[9] & 0x1f);
        uVar5 = uVar8 << 0x10 | uVar8 >> 0x10;
        uVar11 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
        uVar11 = (uVar11 >> 4 ^ uVar11 << 4) & 0xf0f0f0f ^ uVar11 << 4;
        uVar11 = (uVar11 >> 2 ^ uVar11 * 4) & 0x33333333 ^ uVar11 * 4;
        if (*(int *)(in_ECX[8] + ((uVar11 >> 1 ^ uVar11 * 2) & 0x55555555 ^ uVar11 * 2) * 4) == 0) {
          iVar9 = local_14 + 1;
          if (iVar9 < local_1c) {
            puVar6 = (uint *)(in_ECX[5] + local_14 * 4);
            do {
              puVar6 = puVar6 + 1;
              iVar17 = local_c;
              if (uVar8 < *puVar6) break;
              iVar9 = iVar9 + 1;
              local_14 = local_14 + 1;
            } while (iVar9 < local_1c);
          }
          if (iVar17 < local_1c) {
            puVar6 = (uint *)(in_ECX[5] + iVar17 * 4);
            do {
              local_c = iVar17;
              if (uVar8 < (*puVar6 & -2 << (0x1fU - (char)uVar7 & 0x1f))) break;
              iVar17 = iVar17 + 1;
              puVar6 = puVar6 + 1;
              local_c = iVar17;
            } while (iVar17 < local_1c);
          }
          uVar11 = local_1c - iVar17;
          uVar8 = local_14;
          if (0x7fff < local_14) {
            uVar8 = 0x7fff;
          }
          if (0x7fff < uVar11) {
            uVar11 = 0x7fff;
          }
          uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
          uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
          uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
          *(uint *)(in_ECX[8] + ((uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2) * 4) =
               (uVar8 | 0xffff0000) << 0xf | uVar11;
          iVar17 = local_c;
        }
        local_10 = local_10 + 1;
      } while (local_10 < iVar10);
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

