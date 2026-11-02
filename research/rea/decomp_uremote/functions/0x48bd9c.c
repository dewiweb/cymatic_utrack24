// rea decompile_all
// name: FUN_0048bd9c
// address: 0x48bd9c
// body: available
// range: 0x48bd9c-0x48c056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048bd9c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int local_98 [32];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar5 = *(int **)(param_2 + 0x50);
  iVar6 = *(int *)(param_1 + 0x120) + 0x80;
  psVar7 = (short *)(param_3 + 0x60);
  piVar2 = local_98 + 8;
  local_18 = iVar6;
  param_1 = 8;
  do {
    if (param_1 != 4) {
      if ((((psVar7[-0x28] == 0) && (psVar7[-0x20] == 0)) && (psVar7[-0x18] == 0)) &&
         (((psVar7[-8] == 0 && (*psVar7 == 0)) && (psVar7[8] == 0)))) {
        iVar1 = (int)psVar7[-0x30] * *piVar5 * 4;
        piVar2[-8] = iVar1;
        *piVar2 = iVar1;
        piVar2[8] = iVar1;
        piVar2[0x10] = iVar1;
      }
      else {
        iVar1 = (int)psVar7[-0x30] * *piVar5 * 0x4000;
        iVar8 = (int)psVar7[-0x20] * piVar5[0x10] * 0x3b21 + (int)*psVar7 * piVar5[0x30] * -0x187e;
        local_14 = iVar8 + iVar1;
        local_8 = iVar1 - iVar8;
        local_c = (int)psVar7[-8] * piVar5[0x28];
        local_10 = (int)psVar7[-0x18] * piVar5[0x18];
        iVar1 = local_c * 0x2e75 + local_10 * -0x4587 + (int)psVar7[-0x28] * piVar5[8] * 0x21f9 +
                (int)psVar7[8] * piVar5[0x38] * -0x6c2;
        iVar8 = (int)psVar7[-0x28] * piVar5[8] * 0x5203 + local_10 * 0x1ccd + local_c * -0x133e +
                (int)psVar7[8] * piVar5[0x38] * -0x1050;
        piVar2[-8] = local_14 + iVar8 >> 0xc;
        piVar2[0x10] = local_14 - iVar8 >> 0xc;
        *piVar2 = local_8 + iVar1 >> 0xc;
        piVar2[8] = local_8 - iVar1 >> 0xc;
      }
    }
    piVar2 = piVar2 + 1;
    psVar7 = psVar7 + 1;
    piVar5 = piVar5 + 1;
    param_1 = param_1 + -1;
  } while (0 < param_1);
  piVar2 = local_98;
  param_1 = 0;
  do {
    puVar3 = (undefined1 *)(*(int *)(param_4 + param_1 * 4) + param_5);
    if (((piVar2[1] == 0) && (piVar2[2] == 0)) &&
       ((piVar2[3] == 0 && (((piVar2[5] == 0 && (piVar2[6] == 0)) && (piVar2[7] == 0)))))) {
      uVar4 = *(undefined1 *)((*piVar2 >> 5 & 0x3ffU) + iVar6);
      *puVar3 = uVar4;
      puVar3[1] = uVar4;
      puVar3[3] = uVar4;
    }
    else {
      local_8 = piVar2[2] * 0x3b21 + piVar2[6] * -0x187e;
      iVar6 = local_8 + *piVar2 * 0x4000;
      local_8 = *piVar2 * 0x4000 - local_8;
      local_c = piVar2[5];
      local_10 = piVar2[3];
      iVar8 = local_c * 0x2e75 + local_10 * -0x4587 + piVar2[1] * 0x21f9 + piVar2[7] * -0x6c2;
      iVar1 = piVar2[1] * 0x5203 + local_10 * 0x1ccd + local_c * -0x133e + piVar2[7] * -0x1050;
      *puVar3 = *(undefined1 *)((iVar1 + iVar6 >> 0x13 & 0x3ffU) + local_18);
      puVar3[3] = *(undefined1 *)((iVar6 - iVar1 >> 0x13 & 0x3ffU) + local_18);
      puVar3[1] = *(undefined1 *)((local_8 + iVar8 >> 0x13 & 0x3ffU) + local_18);
      uVar4 = *(undefined1 *)((local_8 - iVar8 >> 0x13 & 0x3ffU) + local_18);
      iVar6 = local_18;
    }
    piVar2 = piVar2 + 8;
    param_1 = param_1 + 1;
    puVar3[2] = uVar4;
  } while (param_1 < 4);
  return;
}

