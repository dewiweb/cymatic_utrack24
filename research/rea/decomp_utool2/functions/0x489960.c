// rea decompile_all
// name: FUN_00489960
// address: 0x489960
// body: available
// range: 0x489960-0x489b80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489960(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar6 = (int)param_1 - in_ECX[3];
  iVar4 = in_ECX[2] * param_3 >> 8;
  puVar5 = (uint *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (iVar4 < 0xfe) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(in_ECX[1] + 0xc) * iVar6 + in_ECX[6]);
      uVar2 = (uVar2 << 0x10 | uVar2) * iVar4;
      uVar7 = uVar2 >> 8 & 0xff00ff;
      iVar3 = 0x100 - (uVar2 >> 0x18);
      uVar2 = ((*puVar5 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) + uVar7;
      uVar7 = uVar7 + ((*puVar5 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      iVar6 = iVar6 + 1;
      param_2 = param_2 + -1;
      *puVar5 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2)) & 0xff00ff ^
                (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8;
      puVar5 = (uint *)((int)puVar5 + iVar1);
    } while (0 < param_2);
    return;
  }
  iVar4 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (byte *)(iVar4 * iVar6 + in_ECX[6]);
  if (((iVar1 == iVar4) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(puVar5,param_1,iVar4 * param_2);
    return;
  }
  do {
    uVar2 = (uint)*param_1;
    uVar8 = uVar2 << 0x10 | uVar2;
    uVar7 = ((*puVar5 & 0xff00ff) * (0x100 - uVar2) >> 8 & 0xff00ff) + uVar8;
    uVar8 = uVar8 + ((*puVar5 >> 8 & 0xff00ff) * (0x100 - uVar2) >> 8 & 0xff00ff);
    param_1 = param_1 + iVar4;
    param_2 = param_2 + -1;
    *puVar5 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
              (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7)) & 0xff00ff ^
              (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
    puVar5 = (uint *)((int)puVar5 + iVar1);
  } while (0 < param_2);
  return;
}

