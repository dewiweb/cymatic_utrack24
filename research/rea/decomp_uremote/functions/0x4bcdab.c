// rea decompile_all
// name: FUN_004bcdab
// address: 0x4bcdab
// body: available
// range: 0x4bcdab-0x4bcf1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bcdab(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte local_8;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar5 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  pbVar6 = (byte *)(iVar5 + param_1[5]);
  if (param_1[2] < 0xfe) {
    do {
      uVar2 = *(uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar7 = (uVar2 >> 8 & 0xff00ff) * param_1[2];
      iVar4 = 0x100 - (uVar7 >> 0x18);
      iVar5 = ((uint)pbVar6[1] * iVar4 >> 8) + (uVar7 >> 8 & 0xff00ff);
      uVar2 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar4 >> 8 & 0xff00ff) +
              ((uVar2 & 0xff00ff) * param_1[2] >> 8 & 0xff00ff);
      local_8 = (byte)iVar5;
      uVar2 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
      pbVar6[1] = -(char)((uint)iVar5 >> 8) | local_8;
      param_2 = param_2 + 1;
      pbVar6[2] = (byte)(uVar2 >> 0x10);
      *pbVar6 = (byte)uVar2;
      pbVar6 = pbVar6 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      puVar3 = (uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      iVar5 = 0x100 - (uint)*(byte *)((int)puVar3 + 3);
      uVar2 = *puVar3;
      uVar7 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar5 >> 8 & 0xff00ff) +
              (uVar2 & 0xff00ff);
      iVar5 = ((uint)pbVar6[1] * iVar5 >> 8) + (uVar2 >> 8 & 0xff00ff);
      uVar2 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
      param_2 = param_2 + 1;
      pbVar6[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      pbVar6[2] = (byte)(uVar2 >> 0x10);
      *pbVar6 = (byte)uVar2;
      pbVar6 = pbVar6 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

