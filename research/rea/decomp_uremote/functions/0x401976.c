// rea decompile_all
// name: FUN_00401976
// address: 0x401976
// body: available
// range: 0x401976-0x401b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401976(int param_1)

{
  ushort uVar1;
  short *psVar2;
  int in_EAX;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  ushort uVar8;
  short *psVar9;
  int iVar10;
  ushort *puVar11;
  int local_14;
  int local_8;
  
  puVar11 = *(ushort **)(in_EAX + 0x1c);
  iVar10 = param_1 * 0x1c + 0x2c + in_EAX;
  psVar2 = *(short **)(iVar10 + 0x14);
  puVar7 = puVar11 + *(int *)(in_EAX + 0x18) * 0x14;
  psVar9 = psVar2 + *(int *)(iVar10 + 0xc) * 0x18;
  uVar8 = (-(ushort)(param_1 != 0) & 0x40) + 0x40;
  if (psVar2 < psVar9) {
    for (; puVar11 < puVar7; puVar11 = puVar11 + 0x14) {
      uVar1 = *puVar11;
      if (((uVar8 & uVar1) == 0) && (((uVar1 & 0x100) == 0 || ((uVar1 & 0x200) != 0)))) {
        if (param_1 == 1) {
          uVar1 = puVar11[7];
          iVar10 = *(int *)(puVar11 + 4);
        }
        else {
          uVar1 = puVar11[6];
          iVar10 = *(int *)(puVar11 + 2);
        }
        local_8 = (int)(short)uVar1;
        if (*psVar2 - local_8 < 0) {
          if (-1 < local_8 - psVar9[-0x18]) {
            iVar3 = *(int *)(psVar9 + -0x14) - *(int *)(psVar9 + -0x16);
            goto LAB_00401a0e;
          }
          local_14 = ((int)psVar9 - (int)psVar2) / 0x30;
          iVar10 = 0;
          if (local_14 < 9) {
            psVar4 = psVar2;
            if (0 < local_14) {
              do {
                if (local_8 <= *psVar4) break;
                iVar10 = iVar10 + 1;
                psVar4 = psVar4 + 0x18;
              } while (iVar10 < local_14);
            }
            if (psVar2[iVar10 * 0x18] != local_8) goto LAB_00401a97;
            iVar3 = *(int *)(psVar2 + iVar10 * 0x18 + 4);
          }
          else {
            if (0 < local_14) {
              do {
                iVar3 = local_14 + iVar10 >> 1;
                iVar5 = (int)psVar2[iVar3 * 0x18];
                if (iVar5 <= local_8) {
                  if (local_8 <= iVar5) {
                    iVar3 = *(int *)(psVar2 + iVar3 * 0x18 + 4);
                    goto LAB_00401ad9;
                  }
                  iVar10 = iVar3 + 1;
                  iVar3 = local_14;
                }
                local_14 = iVar3;
              } while (iVar10 < local_14);
            }
LAB_00401a97:
            if (*(int *)(psVar2 + iVar10 * 0x18 + -0x10) == 0) {
              uVar6 = FUN_0040d2d8();
              *(undefined4 *)(psVar2 + iVar10 * 0x18 + -0x10) = uVar6;
            }
            iVar3 = FUN_00401000(local_8 - psVar2[iVar10 * 0x18 + -0x18],
                                 *(undefined4 *)(psVar2 + iVar10 * 0x18 + -0x10));
            iVar3 = iVar3 + *(int *)(psVar2 + iVar10 * 0x18 + -0x14);
          }
        }
        else {
          iVar3 = *(int *)(psVar2 + 4) - *(int *)(psVar2 + 2);
LAB_00401a0e:
          iVar3 = iVar3 + iVar10;
        }
LAB_00401ad9:
        if (param_1 == 0) {
          *(int *)(puVar11 + 8) = iVar3;
        }
        else {
          *(int *)(puVar11 + 10) = iVar3;
        }
        *puVar11 = *puVar11 | uVar8;
      }
    }
  }
  return;
}

