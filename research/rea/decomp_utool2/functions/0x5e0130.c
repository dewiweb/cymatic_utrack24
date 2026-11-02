// rea decompile_all
// name: FUN_005e0130
// address: 0x5e0130
// body: available
// range: 0x5e0130-0x5e0445 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e0130(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack_44;
  int *local_10;
  uint *local_c;
  
  uVar9 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(param_1[0x10] + 4);
  iVar23 = *(int *)(param_1[0x10] + 0x68);
  iVar4 = *(int *)(iVar3 + 0x1c);
  uVar5 = *(uint *)(iVar4 + param_1[7] * 4);
  param_1[9] = uVar5;
  iVar6 = *(int *)(iVar3 + 4);
  uStack_44 = 0x5e0178;
  local_c = (uint *)(&stack0xffffffc0 + iVar6 * -0xc);
  puVar20 = &stack0xffffffc0 + iVar6 * -0x10;
  puVar15 = &stack0xffffffc0 + iVar6 * -0x10;
  (&uStack_44)[-iVar6] = 0x5e0182;
  (&uStack_44)[iVar6 * -2] = 0x5e018c;
  (&uStack_44)[iVar6 * -3] = 0x5e0198;
  iVar21 = 0;
  if (0 < iVar6) {
    do {
      puVar7 = (&PTR_DAT_00b9c314)[*(int *)(iVar4 + 800 + param_2[param_2[iVar21 + 1] + 0x101] * 4)]
      ;
      *(undefined4 *)(puVar15 + -4) =
           *(undefined4 *)(*(int *)(iVar23 + 0x30) + param_2[param_2[iVar21 + 1] + 0x101] * 4);
      pcVar8 = *(code **)(puVar7 + 0x14);
      *(int **)(puVar15 + -8) = param_1;
      puVar16 = puVar15 + -0xc;
      *(undefined4 *)(puVar15 + -0xc) = 0x5e01eb;
      uVar10 = (*pcVar8)();
      *(uint *)(puVar16 + -4) = (uVar5 & 0x3fffffff) << 1;
      *(undefined4 *)(puVar16 + -8) = 0;
      local_c[-iVar6] = uVar10;
      *local_c = (uint)(uVar10 != 0);
      *(undefined4 *)(puVar16 + -0xc) = *(undefined4 *)(*param_1 + iVar21 * 4);
      *(undefined4 *)(puVar16 + -0x10) = 0x5e020c;
      _memset(*(void **)(puVar16 + -0xc),*(int *)(puVar16 + -8),*(size_t *)(puVar16 + -4));
      iVar21 = iVar21 + 1;
      local_c = local_c + 1;
      puVar15 = puVar16 + 8;
      puVar20 = puVar16 + 8;
    } while (iVar21 < *(int *)(iVar3 + 4));
  }
  iVar21 = 0;
  if (0 < param_2[0x121]) {
    piVar12 = param_2 + 0x222;
    do {
      if ((*(int *)(&stack0xffffffc0 + piVar12[-0x100] * 4 + iVar6 * -0xc) != 0) ||
         (*(int *)(&stack0xffffffc0 + *piVar12 * 4 + iVar6 * -0xc) != 0)) {
        *(undefined4 *)(&stack0xffffffc0 + piVar12[-0x100] * 4 + iVar6 * -0xc) = 1;
        *(undefined4 *)(&stack0xffffffc0 + *piVar12 * 4 + iVar6 * -0xc) = 1;
      }
      iVar21 = iVar21 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar21 < param_2[0x121]);
  }
  local_c = (uint *)0x0;
  if (0 < *param_2) {
    local_10 = param_2 + 0x111;
    puVar18 = puVar20;
    do {
      iVar21 = 0;
      iVar22 = 0;
      puVar14 = (uint *)(&stack0xffffffc0 + iVar6 * -8);
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          if ((uint *)param_2[iVar21 + 1] == local_c) {
            iVar22 = iVar22 + 1;
            *puVar14 = (uint)(*(int *)(&stack0xffffffc0 + iVar21 * 4 + iVar6 * -0xc) != 0);
            puVar14[iVar6] = *(uint *)(*param_1 + iVar21 * 4);
            puVar14 = puVar14 + 1;
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)(iVar3 + 4));
      }
      *(int *)(puVar18 + -4) = iVar22;
      *(undefined1 **)(puVar18 + -8) = &stack0xffffffc0 + iVar6 * -8;
      iVar21 = *local_10;
      *(undefined1 **)(puVar18 + -0xc) = &stack0xffffffc0 + iVar6 * -4;
      puVar7 = (&PTR_DAT_00b16a2c)[*(int *)(iVar4 + 0x520 + iVar21 * 4)];
      *(undefined4 *)(puVar18 + -0x10) = *(undefined4 *)(*(int *)(iVar23 + 0x34) + iVar21 * 4);
      pcVar8 = *(code **)(puVar7 + 0x1c);
      *(int **)(puVar18 + -0x14) = param_1;
      puVar17 = puVar18 + -0x18;
      *(undefined4 *)(puVar18 + -0x18) = 0x5e02f4;
      (*pcVar8)();
      puVar20 = puVar17 + 0x14;
      puVar18 = puVar17 + 0x14;
      local_c = (uint *)((int)local_c + 1);
      local_10 = local_10 + 1;
    } while ((int)local_c < *param_2);
  }
  iVar21 = param_2[0x121] + -1;
  if (-1 < iVar21) {
    piVar12 = param_2 + param_2[0x121] + 0x221;
    do {
      pfVar13 = *(float **)(*param_1 + piVar12[-0x100] * 4);
      if (0 < (int)uVar5 / 2) {
        iVar11 = *(int *)(*param_1 + *piVar12 * 4) - (int)pfVar13;
        iVar22 = (int)uVar5 / 2;
        do {
          fVar1 = *pfVar13;
          fVar2 = *(float *)(iVar11 + (int)pfVar13);
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *(float *)(iVar11 + (int)pfVar13) = fVar1;
              *pfVar13 = fVar1 - fVar2;
            }
            else {
              *(float *)(iVar11 + (int)pfVar13) = fVar2 + fVar1;
            }
          }
          else if (fVar2 <= 0.0) {
            *(float *)(iVar11 + (int)pfVar13) = fVar1;
            *pfVar13 = fVar2 + fVar1;
          }
          else {
            *(float *)(iVar11 + (int)pfVar13) = fVar1 - fVar2;
          }
          pfVar13 = pfVar13 + 1;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      piVar12 = piVar12 + -1;
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
  }
  iVar21 = 0;
  puVar18 = puVar20;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      iVar22 = param_2[param_2[iVar21 + 1] + 0x101];
      puVar7 = (&PTR_DAT_00b9c314)[*(int *)(iVar4 + 800 + iVar22 * 4)];
      *(undefined4 *)(puVar18 + -4) = *(undefined4 *)(*param_1 + iVar21 * 4);
      *(undefined4 *)(puVar18 + -8) = *(undefined4 *)(&stack0xffffffc0 + iVar21 * 4 + iVar6 * -0x10)
      ;
      *(undefined4 *)(puVar18 + -0xc) = *(undefined4 *)(*(int *)(iVar23 + 0x30) + iVar22 * 4);
      pcVar8 = *(code **)(puVar7 + 0x18);
      *(int **)(puVar18 + -0x10) = param_1;
      puVar19 = puVar18 + -0x14;
      *(undefined4 *)(puVar18 + -0x14) = 0x5e03f6;
      (*pcVar8)();
      iVar21 = iVar21 + 1;
      puVar20 = puVar19 + 0x10;
      puVar18 = puVar19 + 0x10;
    } while (iVar21 < *(int *)(iVar3 + 4));
  }
  iVar23 = 0;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      *(undefined4 *)(puVar20 + -4) = *(undefined4 *)(*param_1 + iVar23 * 4);
      *(undefined4 *)(puVar20 + -8) = 0x5e0427;
      FUN_005deef0();
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(iVar3 + 4));
  }
  __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
  return;
}

