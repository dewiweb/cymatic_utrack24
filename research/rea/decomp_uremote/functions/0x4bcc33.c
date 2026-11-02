// rea decompile_all
// name: FUN_004bcc33
// address: 0x4bcc33
// body: available
// range: 0x4bcc33-0x4bcdaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bcc33(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar7 = iVar1 * param_2;
  param_2 = param_2 - param_1[3];
  pbVar8 = (byte *)(iVar7 + param_1[5]);
  iVar7 = param_1[2] * param_4 >> 8;
  if (iVar7 < 0xfe) {
    do {
      uVar5 = *(uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar2 = (uVar5 >> 8 & 0xff00ff) * iVar7;
      iVar3 = 0x100 - (uVar2 >> 0x18);
      iVar6 = ((uint)pbVar8[1] * iVar3 >> 8) + (uVar2 >> 8 & 0xff00ff);
      uVar5 = (((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar3 >> 8 & 0xff00ff) +
              ((uVar5 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
      uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
      pbVar8[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
      param_2 = param_2 + 1;
      pbVar8[2] = (byte)(uVar5 >> 0x10);
      *pbVar8 = (byte)uVar5;
      pbVar8 = pbVar8 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      puVar4 = (uint *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      iVar7 = 0x100 - (uint)*(byte *)((int)puVar4 + 3);
      uVar5 = *puVar4;
      uVar2 = (((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar7 >> 8 & 0xff00ff) +
              (uVar5 & 0xff00ff);
      iVar7 = ((uint)pbVar8[1] * iVar7 >> 8) + (uVar5 >> 8 & 0xff00ff);
      uVar5 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
      param_2 = param_2 + 1;
      pbVar8[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
      pbVar8[2] = (byte)(uVar5 >> 0x10);
      *pbVar8 = (byte)uVar5;
      pbVar8 = pbVar8 + iVar1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

