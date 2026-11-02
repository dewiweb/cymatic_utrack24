// rea decompile_all
// name: FUN_0065d560
// address: 0x65d560
// body: available
// range: 0x65d560-0x65d786 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065d560(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  int local_4c [5];
  int local_38;
  int local_30;
  int local_2c [5];
  int local_18;
  int local_10;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar7 = 8;
  iVar2 = *(int *)(param_1 + 0x120) + 0x80;
  piVar10 = *(int **)(param_2 + 0x50);
  psVar3 = (short *)(param_3 + 0x30);
  iVar5 = -(int)piVar10;
  do {
    if (((iVar7 != 6) && (iVar7 != 4)) && (iVar7 != 2)) {
      if (((psVar3[-0x10] == 0) && (*psVar3 == 0)) && ((psVar3[0x10] == 0 && (psVar3[0x20] == 0))))
      {
        iVar4 = (int)psVar3[-0x18] * *piVar10 * 4;
        *(int *)((int)local_2c + iVar5 + (int)piVar10) = iVar4;
      }
      else {
        iVar8 = (int)psVar3[-0x18] * *piVar10 * 0x8000;
        iVar6 = (int)psVar3[0x10] * piVar10[0x28] * 0x1b37 +
                (int)psVar3[0x20] * piVar10[0x38] * -0x1712 +
                (int)psVar3[-0x10] * piVar10[8] * 0x73fc + (int)*psVar3 * piVar10[0x18] * -0x28ba;
        iVar4 = iVar6 + iVar8 >> 0xd;
        *(int *)((int)local_2c + iVar5 + (int)piVar10) = iVar8 - iVar6 >> 0xd;
      }
      *(int *)((int)local_4c + iVar5 + (int)piVar10) = iVar4;
    }
    iVar7 = iVar7 + -1;
    psVar3 = psVar3 + 1;
    piVar10 = piVar10 + 1;
  } while (0 < iVar7);
  puVar9 = (undefined1 *)(*param_4 + param_5);
  if (((local_4c[1] == 0) && (local_4c[3] == 0)) && ((local_38 == 0 && (local_30 == 0)))) {
    uVar1 = *(undefined1 *)((local_4c[0] >> 5 & 0x3ffU) + iVar2);
    *puVar9 = uVar1;
  }
  else {
    iVar5 = local_4c[1] * 0x73fc + local_4c[3] * -0x28ba + local_38 * 0x1b37 + local_30 * -0x1712;
    *puVar9 = *(undefined1 *)((iVar5 + local_4c[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar2);
    uVar1 = *(undefined1 *)((local_4c[0] * 0x8000 - iVar5 >> 0x14 & 0x3ffU) + iVar2);
  }
  puVar9[1] = uVar1;
  puVar9 = (undefined1 *)(param_4[1] + param_5);
  if ((((local_2c[1] == 0) && (local_2c[3] == 0)) && (local_18 == 0)) && (local_10 == 0)) {
    uVar1 = *(undefined1 *)((local_2c[0] >> 5 & 0x3ffU) + iVar2);
    *puVar9 = uVar1;
    puVar9[1] = uVar1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = local_2c[1] * 0x73fc + local_2c[3] * -0x28ba + local_18 * 0x1b37 + local_10 * -0x1712;
  *puVar9 = *(undefined1 *)((iVar5 + local_2c[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar2);
  puVar9[1] = *(undefined1 *)((local_2c[0] * 0x8000 - iVar5 >> 0x14 & 0x3ffU) + iVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

