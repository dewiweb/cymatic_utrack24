// rea decompile_all
// name: FUN_004bbba8
// address: 0x4bbba8
// body: available
// range: 0x4bbba8-0x4bbd68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bbba8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  puVar6 = (uint *)(iVar1 * param_2 + param_1[5]);
  param_2 = param_2 - param_1[3];
  iVar3 = param_1[2] * param_4 >> 8;
  if (iVar3 < 0xfe) {
    do {
      uVar4 = *(uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar2 = (uVar4 >> 8 & 0xff00ff) * iVar3;
      iVar5 = 0x100 - (uVar2 >> 0x18);
      uVar2 = (uVar2 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
      uVar4 = ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) +
              ((uVar4 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      param_2 = param_2 + 1;
      *puVar6 = (((0x100 - (uVar2 >> 8 & 0xff00ff)) * 0x100 | uVar2 * 0x100) ^
                (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) << 8;
      puVar6 = (uint *)((int)puVar6 + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      uVar2 = *(uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      iVar3 = 0x100 - (uVar2 >> 0x18);
      uVar4 = (uVar2 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      uVar2 = ((*puVar6 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) + (uVar2 & 0xff00ff);
      param_2 = param_2 + 1;
      *puVar6 = (((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100) ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2)) & 0xff00ff ^
                ((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100);
      puVar6 = (uint *)((int)puVar6 + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

