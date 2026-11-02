// rea decompile_all
// name: FUN_00489d80
// address: 0x489d80
// body: available
// range: 0x489d80-0x489e9c inclusive
// range: 0x489ea0-0x489f69 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489d80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar2 = param_1 - in_ECX[3];
  iVar4 = in_ECX[2] * param_3 >> 8;
  puVar6 = (uint *)(iVar1 * param_1 + in_ECX[5]);
  if (iVar4 < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                             in_ECX[6]);
      uVar3 = (uVar3 << 0x10 | uVar3) * iVar4;
      uVar7 = uVar3 >> 8 & 0xff00ff;
      iVar5 = 0x100 - (uVar3 >> 0x18);
      uVar3 = ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar7;
      uVar7 = uVar7 + ((*puVar6 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
      *puVar6 = (((0x100 - (uVar7 >> 8 & 0xff00ff)) * 0x100 | uVar7 * 0x100) ^
                (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3)) & 0xff00ff ^
                (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) << 8;
      puVar6 = (uint *)((int)puVar6 + iVar1);
    } while (0 < param_2);
    return;
  }
  do {
    uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                           in_ECX[6]);
    uVar8 = uVar3 << 0x10 | uVar3;
    uVar7 = ((*puVar6 & 0xff00ff) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar8;
    uVar8 = uVar8 + ((*puVar6 >> 8 & 0xff00ff) * (0x100 - uVar3) >> 8 & 0xff00ff);
    iVar2 = iVar2 + 1;
    param_2 = param_2 + -1;
    *puVar6 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
              (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7)) & 0xff00ff ^
              (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
    puVar6 = (uint *)((int)puVar6 + iVar1);
  } while (0 < param_2);
  return;
}

