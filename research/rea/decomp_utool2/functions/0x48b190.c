// rea decompile_all
// name: FUN_0048b190
// address: 0x48b190
// body: available
// range: 0x48b190-0x48b30b inclusive
// range: 0x48b310-0x48b3d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048b190(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar6 = (int)param_1 - in_ECX[3];
  iVar4 = in_ECX[2] * param_3 >> 8;
  puVar3 = (uint *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (iVar4 < 0xfe) {
    do {
      uVar5 = *(uint *)(*(int *)(in_ECX[1] + 0xc) * iVar6 + in_ECX[6]);
      uVar7 = (uVar5 >> 8 & 0xff00ff) * iVar4;
      iVar2 = 0x100 - (uVar7 >> 0x18);
      uVar7 = (uVar7 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar2 >> 8 & 0xff00ff);
      uVar5 = ((*puVar3 & 0xff00ff) * iVar2 >> 8 & 0xff00ff) +
              ((uVar5 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      param_2 = param_2 + -1;
      iVar6 = iVar6 + 1;
      *puVar3 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
                (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
                (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8;
      puVar3 = (uint *)((int)puVar3 + iVar1);
    } while (0 < param_2);
    return;
  }
  iVar4 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (uint *)(iVar4 * iVar6 + in_ECX[6]);
  if (((iVar1 == iVar4) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(puVar3,param_1,iVar4 * param_2);
    return;
  }
  do {
    uVar5 = *param_1;
    iVar6 = 0x100 - (uVar5 >> 0x18);
    uVar7 = (uVar5 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
    uVar5 = ((*puVar3 & 0xff00ff) * iVar6 >> 8 & 0xff00ff) + (uVar5 & 0xff00ff);
    param_1 = (uint *)((int)param_1 + iVar4);
    param_2 = param_2 + -1;
    *puVar3 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
              (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
              (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8;
    puVar3 = (uint *)((int)puVar3 + iVar1);
  } while (0 < param_2);
  return;
}

