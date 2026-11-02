// rea decompile_all
// name: FUN_0065d790
// address: 0x65d790
// body: available
// range: 0x65d790-0x65dac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065d790(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_8c;
  int local_88 [32];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar4 = local_88 + 8;
  iVar2 = *(int *)(param_1 + 0x120) + 0x80;
  local_8c = 8;
  psVar7 = (short *)(param_3 + 0x60);
  piVar8 = *(int **)(param_2 + 0x50);
  do {
    if (local_8c != 4) {
      if ((((psVar7[-0x28] == 0) && (psVar7[-0x20] == 0)) && (psVar7[-0x18] == 0)) &&
         (((psVar7[-8] == 0 && (*psVar7 == 0)) && (psVar7[8] == 0)))) {
        iVar3 = (int)psVar7[-0x30] * *piVar8 * 4;
        piVar4[-8] = iVar3;
        piVar4[8] = iVar3;
        piVar4[0x10] = iVar3;
      }
      else {
        iVar9 = (int)psVar7[-0x30] * *piVar8 * 0x4000;
        iVar6 = (int)psVar7[-0x20] * piVar8[0x10] * 0x3b21 + (int)*psVar7 * piVar8[0x30] * -0x187e;
        iVar3 = iVar6 + iVar9;
        iVar9 = iVar9 - iVar6;
        iVar10 = (int)psVar7[-8] * piVar8[0x28] * 0x2e75 +
                 (int)psVar7[-0x18] * piVar8[0x18] * -0x4587 +
                 (int)psVar7[-0x28] * piVar8[8] * 0x21f9 + (int)psVar7[8] * piVar8[0x38] * -0x6c2;
        iVar6 = (int)psVar7[-0x28] * piVar8[8] * 0x5203 + (int)psVar7[-0x18] * piVar8[0x18] * 0x1ccd
                + (int)psVar7[-8] * piVar8[0x28] * -0x133e + (int)psVar7[8] * piVar8[0x38] * -0x1050
        ;
        piVar4[-8] = iVar3 + iVar6 >> 0xc;
        piVar4[0x10] = iVar3 - iVar6 >> 0xc;
        iVar3 = iVar9 + iVar10 >> 0xc;
        piVar4[8] = iVar9 - iVar10 >> 0xc;
      }
      *piVar4 = iVar3;
    }
    local_8c = local_8c + -1;
    psVar7 = psVar7 + 1;
    piVar8 = piVar8 + 1;
    piVar4 = piVar4 + 1;
  } while (0 < local_8c);
  piVar4 = local_88;
  local_8c = 0;
  do {
    puVar5 = (undefined1 *)(*(int *)(param_4 + local_8c * 4) + param_5);
    if (((piVar4[1] == 0) && (piVar4[2] == 0)) &&
       ((piVar4[3] == 0 && (((piVar4[5] == 0 && (piVar4[6] == 0)) && (piVar4[7] == 0)))))) {
      uVar1 = *(undefined1 *)((*piVar4 >> 5 & 0x3ffU) + iVar2);
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5[3] = uVar1;
    }
    else {
      iVar6 = piVar4[2] * 0x3b21 + piVar4[6] * -0x187e;
      iVar3 = iVar6 + *piVar4 * 0x4000;
      iVar6 = *piVar4 * 0x4000 - iVar6;
      iVar9 = piVar4[5] * 0x2e75 + piVar4[3] * -0x4587 + piVar4[1] * 0x21f9 + piVar4[7] * -0x6c2;
      iVar10 = piVar4[1] * 0x5203 + piVar4[3] * 0x1ccd + piVar4[5] * -0x133e + piVar4[7] * -0x1050;
      *puVar5 = *(undefined1 *)((iVar3 + iVar10 >> 0x13 & 0x3ffU) + iVar2);
      puVar5[3] = *(undefined1 *)((iVar3 - iVar10 >> 0x13 & 0x3ffU) + iVar2);
      puVar5[1] = *(undefined1 *)((iVar6 + iVar9 >> 0x13 & 0x3ffU) + iVar2);
      puVar5[2] = *(undefined1 *)((iVar6 - iVar9 >> 0x13 & 0x3ffU) + iVar2);
    }
    piVar4 = piVar4 + 8;
    local_8c = local_8c + 1;
  } while (local_8c < 4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

