// rea decompile_all
// name: FUN_004bd256
// address: 0x4bd256
// body: available
// range: 0x4bd256-0x4bd381 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd256(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = *(int *)(*param_1 + 0xc);
  iVar5 = iVar3 * param_2;
  param_2 = param_2 - param_1[3];
  pbVar6 = (byte *)(iVar5 + param_1[5]);
  iVar5 = param_1[2] * param_4 >> 8;
  if (iVar5 < 0xfe) {
    do {
      pbVar7 = (byte *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar10 = (pbVar7[1] | 0xff0000) * iVar5;
      iVar4 = 0x100 - (uVar10 >> 0x18);
      iVar9 = ((uint)pbVar6[1] * iVar4 >> 8) + (uVar10 >> 8 & 0xff00ff);
      uVar10 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar5 >> 8 & 0xff00ff) +
               (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar4 >> 8 & 0xff00ff);
      uVar10 = (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) & 0xff00ff;
      pbVar6[1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
      param_2 = param_2 + 1;
      pbVar6[2] = (byte)(uVar10 >> 0x10);
      *pbVar6 = (byte)uVar10;
      pbVar6 = pbVar6 + iVar3;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      puVar8 = (undefined2 *)
               ((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) + param_1[6]);
      param_2 = param_2 + 1;
      uVar2 = *puVar8;
      bVar1 = *(byte *)(puVar8 + 1);
      param_4._0_1_ = (byte)uVar2;
      *pbVar6 = (byte)param_4;
      param_4._1_1_ = (byte)((ushort)uVar2 >> 8);
      pbVar6[1] = param_4._1_1_;
      pbVar6[2] = bVar1;
      pbVar6 = pbVar6 + iVar3;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

