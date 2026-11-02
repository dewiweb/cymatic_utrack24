// rea decompile_all
// name: FUN_005da3e0
// address: 0x5da3e0
// body: available
// range: 0x5da3e0-0x5da4ed inclusive
// range: 0x5da4f0-0x5da66e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005da3e0(int param_1,int param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int in_ECX;
  int *in_EDX;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int local_30;
  int local_2c;
  int local_20;
  int local_10;
  
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[2];
  iVar3 = *(int *)in_EDX[4];
  iVar6 = *(int *)(in_ECX + 0x24) >> 1;
  if (piVar1[1] < iVar6) {
    iVar6 = piVar1[1];
  }
  if (0 < iVar6 - *piVar1) {
    iVar7 = (iVar6 - *piVar1) / iVar2;
    iVar6 = param_2 * -4;
    puVar12 = &stack0xffffffb4 + iVar6;
    iVar17 = 0;
    if (0 < param_2) {
      uVar15 = ((iVar7 + -1 + iVar3) / iVar3) * 4 + 7U & 0xfffffff8;
      puVar12 = &stack0xffffffb4 + iVar6;
      do {
        if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar15)) {
          if (*(int *)(in_ECX + 0x44) != 0) {
            *(undefined4 *)(puVar12 + -4) = 8;
            puVar11 = puVar12 + -8;
            *(undefined4 *)(puVar12 + -8) = 0x5da46e;
            puVar8 = (undefined4 *)FUN_004c554b();
            puVar12 = puVar11 + 4;
            *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
            puVar8[1] = *(undefined4 *)(in_ECX + 0x54);
            *puVar8 = *(undefined4 *)(in_ECX + 0x44);
            *(undefined4 **)(in_ECX + 0x54) = puVar8;
          }
          *(uint *)(puVar12 + -4) = uVar15;
          *(uint *)(in_ECX + 0x4c) = uVar15;
          puVar13 = puVar12 + -8;
          *(undefined4 *)(puVar12 + -8) = 0x5da491;
          uVar9 = FUN_004c554b();
          puVar12 = puVar13 + 4;
          *(undefined4 *)(in_ECX + 0x44) = uVar9;
          *(undefined4 *)(in_ECX + 0x48) = 0;
        }
        iVar18 = *(int *)(in_ECX + 0x48);
        *(uint *)(in_ECX + 0x48) = iVar18 + uVar15;
        *(int *)(&stack0xffffffb4 + iVar17 * 4 + iVar6) = *(int *)(in_ECX + 0x44) + iVar18;
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    local_20 = 0;
    if (0 < in_EDX[2]) {
      do {
        iVar17 = 0;
        local_2c = 0;
        if (0 < iVar7) {
          local_10 = 0;
          do {
            if ((local_20 == 0) && (iVar18 = 0, 0 < param_2)) {
              do {
                iVar17 = in_EDX[4];
                if (*(int *)(iVar17 + 8) < 1) goto LAB_005da659;
                *(undefined4 *)(puVar12 + -4) = 0x5da50d;
                iVar10 = FUN_005e7470();
                if ((((iVar10 < 0) ||
                     (iVar17 = *(int *)(*(int *)(iVar17 + 0x18) + iVar10 * 4), iVar17 == -1)) ||
                    (piVar1[4] <= iVar17)) ||
                   (*(undefined4 *)(local_10 + *(int *)(&stack0xffffffb4 + iVar18 * 4 + iVar6)) =
                         *(undefined4 *)(in_EDX[7] + iVar17 * 4),
                   *(int *)(local_10 + *(int *)(&stack0xffffffb4 + iVar18 * 4 + iVar6)) == 0))
                goto LAB_005da659;
                iVar18 = iVar18 + 1;
                iVar17 = local_2c;
              } while (iVar18 < param_2);
            }
            local_30 = 0;
            if (0 < iVar3) {
              iVar18 = iVar17 * iVar2;
              do {
                if (iVar7 <= iVar17) break;
                iVar10 = 0;
                if (0 < param_2) {
                  piVar16 = (int *)(&stack0xffffffb4 + iVar6);
                  do {
                    iVar17 = *piVar1;
                    iVar4 = *(int *)(*(int *)(local_10 + *piVar16) + local_30 * 4);
                    if (((piVar1[iVar4 + 6] & 1 << ((byte)local_20 & 0x1f)) != 0) &&
                       (iVar4 = *(int *)(*(int *)(in_EDX[5] + iVar4 * 4) + local_20 * 4), iVar4 != 0
                       )) {
                      *(int *)(puVar12 + -4) = iVar2;
                      *(int *)(puVar12 + -8) = in_ECX + 4;
                      *(int *)(puVar12 + -0xc) =
                           *(int *)((param_1 - (int)(&stack0xffffffb4 + iVar6)) + (int)piVar16) +
                           (iVar17 + iVar18) * 4;
                      *(int *)(puVar12 + -0x10) = iVar4;
                      puVar14 = puVar12 + -0x14;
                      *(undefined4 *)(puVar12 + -0x14) = 0x5da5fc;
                      iVar17 = (*param_3)();
                      puVar12 = puVar14 + 0x10;
                      if (iVar17 == -1) goto LAB_005da659;
                    }
                    iVar10 = iVar10 + 1;
                    piVar16 = piVar16 + 1;
                    iVar17 = local_2c;
                  } while (iVar10 < param_2);
                }
                local_30 = local_30 + 1;
                iVar17 = iVar17 + 1;
                iVar18 = iVar18 + iVar2;
                local_2c = iVar17;
              } while (local_30 < iVar3);
            }
            local_10 = local_10 + 4;
          } while (iVar17 < iVar7);
        }
        local_20 = local_20 + 1;
      } while (local_20 < in_EDX[2]);
    }
  }
LAB_005da659:
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

