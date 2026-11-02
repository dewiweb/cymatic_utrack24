// rea decompile_all
// name: FUN_004bc6a0
// address: 0x4bc6a0
// body: available
// range: 0x4bc6a0-0x4bc84c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc6a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar5 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  puVar6 = (uint *)(iVar5 + param_1[5]);
  if (param_1[2] < 0xfe) {
    do {
      uVar4 = (uint)*(byte *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                             param_1[6]);
      uVar4 = (uVar4 << 0x10 | uVar4) * param_1[2];
      uVar2 = uVar4 >> 8 & 0xff00ff;
      iVar5 = 0x100 - (uVar4 >> 0x18);
      uVar4 = uVar2 + ((*puVar6 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
      uVar2 = ((*puVar6 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar2;
      param_2 = param_2 + 1;
      *puVar6 = (((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100) ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2)) & 0xff00ff ^
                ((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100);
      puVar6 = (uint *)((int)puVar6 + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      uVar3 = (uint)*(byte *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                             param_1[6]);
      uVar2 = uVar3 << 0x10 | uVar3;
      uVar4 = uVar2 + ((*puVar6 >> 8 & 0xff00ff) * (0x100 - uVar3) >> 8 & 0xff00ff);
      uVar2 = ((*puVar6 & 0xff00ff) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar2;
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

