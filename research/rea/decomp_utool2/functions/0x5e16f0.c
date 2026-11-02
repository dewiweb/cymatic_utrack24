// rea decompile_all
// name: FUN_005e16f0
// address: 0x5e16f0
// body: available
// range: 0x5e16f0-0x5e1858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e16f0(undefined4 param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *in_ECX;
  undefined4 *puVar18;
  float *pfVar19;
  int in_EDX;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  int iVar24;
  float fVar25;
  float *local_c;
  uint local_8;
  
  iVar22 = param_3;
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar24 = -(param_3 * 4 + 0x80);
  local_c = in_ECX;
  if (in_EDX == 0) {
    *(undefined4 *)(&stack0xffffffe8 + iVar24) = 0;
    *(undefined4 *)(&stack0xffffffec + iVar24) = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar24) = 0;
    *(undefined4 *)((int)&local_c + iVar24) = 0;
    *(undefined4 *)((int)&local_8 + iVar24) = 0;
    *(undefined4 *)(&stack0xfffffffc + iVar24) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar24) = 0;
    *(undefined4 *)((int)&param_1 + iVar24) = 0;
    *(undefined4 *)((int)&param_2 + iVar24) = 0;
    *(undefined4 *)((int)&param_3 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000010 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000014 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar24) = 0;
    *(undefined4 *)(&stack0x0000001c + iVar24) = 0;
    *(undefined4 *)(&stack0x00000020 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000024 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000028 + iVar24) = 0;
    *(undefined4 *)(&stack0x0000002c + iVar24) = 0;
    *(undefined4 *)(&stack0x00000030 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000034 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000038 + iVar24) = 0;
    *(undefined4 *)(&stack0x0000003c + iVar24) = 0;
    *(undefined4 *)(&stack0x00000040 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000044 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000048 + iVar24) = 0;
    *(undefined4 *)(&stack0x0000004c + iVar24) = 0;
    *(undefined4 *)(&stack0x00000050 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000054 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000058 + iVar24) = 0;
    *(undefined4 *)(&stack0x0000005c + iVar24) = 0;
    *(undefined4 *)(&stack0x00000060 + iVar24) = 0;
    *(undefined4 *)(&stack0x00000064 + iVar24) = 0;
  }
  else {
    iVar21 = 4;
    puVar18 = (undefined4 *)(&stack0xffffffec + iVar24);
    puVar20 = (undefined4 *)(in_EDX + 0xc);
    do {
      puVar18[-1] = puVar20[-3];
      *puVar18 = *(undefined4 *)
                  ((in_EDX - (int)(&stack0xffffffe8 + iVar24)) + -0x20 + (int)(puVar18 + 8));
      puVar18[1] = puVar20[-1];
      puVar18[2] = *puVar20;
      puVar18[3] = puVar20[1];
      puVar18[4] = puVar20[2];
      puVar18[5] = puVar20[3];
      puVar18[6] = puVar20[4];
      iVar21 = iVar21 + -1;
      puVar18 = puVar18 + 8;
      puVar20 = puVar20 + 8;
      iVar22 = param_3;
    } while (iVar21 != 0);
  }
  iVar21 = 0;
  if (0 < iVar22) {
    local_c = local_c + 0x1e;
    pfVar23 = (float *)(&stack0xfffffff0 + iVar24);
    pfVar19 = local_c;
    do {
      fVar25 = 0.0;
      iVar24 = 4;
      pfVar17 = pfVar23;
      do {
        pfVar1 = pfVar19 + 1;
        pfVar2 = pfVar17 + -2;
        pfVar3 = pfVar17 + -1;
        fVar15 = *pfVar19;
        pfVar4 = pfVar19 + -1;
        fVar16 = *pfVar17;
        pfVar5 = pfVar19 + -2;
        pfVar6 = pfVar17 + 1;
        pfVar7 = pfVar19 + -3;
        pfVar8 = pfVar17 + 2;
        pfVar9 = pfVar19 + -4;
        pfVar10 = pfVar17 + 3;
        pfVar11 = pfVar19 + -5;
        pfVar12 = pfVar17 + 4;
        pfVar13 = pfVar19 + -6;
        pfVar14 = pfVar17 + 5;
        pfVar19 = pfVar19 + -8;
        pfVar17 = pfVar17 + 8;
        fVar25 = (((((((fVar25 - *pfVar1 * *pfVar2) - *pfVar3 * fVar15) - *pfVar4 * fVar16) -
                    *pfVar5 * *pfVar6) - *pfVar7 * *pfVar8) - *pfVar9 * *pfVar10) -
                 *pfVar11 * *pfVar12) - *pfVar13 * *pfVar14;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
      pfVar23[0x1e] = fVar25;
      pfVar23 = pfVar23 + 1;
      *(float *)(param_2 + iVar21 * 4) = fVar25;
      iVar21 = iVar21 + 1;
      pfVar19 = local_c;
    } while (iVar21 < iVar22);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

