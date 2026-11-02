// rea decompile_all
// name: FUN_004bd382
// address: 0x4bd382
// body: available
// range: 0x4bd382-0x4bd4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd382(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  
  piVar4 = param_1;
  iVar3 = *(int *)(*param_1 + 0xc);
  iVar5 = iVar3 * param_2;
  param_2 = param_2 - param_1[3];
  pbVar6 = (byte *)(iVar5 + param_1[5]);
  if (param_1[2] < 0xfe) {
    do {
      pbVar7 = (byte *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar10 = (pbVar7[1] | 0xff0000) * param_1[2];
      iVar5 = 0x100 - (uVar10 >> 0x18);
      iVar9 = ((uint)pbVar6[1] * iVar5 >> 8) + (uVar10 >> 8 & 0xff00ff);
      uVar10 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * param_1[2] >> 8 & 0xff00ff) +
               (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar5 >> 8 & 0xff00ff);
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
      iVar5 = piVar4[1];
      puVar8 = (undefined2 *)
               ((param_2 % *(int *)(iVar5 + 0x10)) * *(int *)(iVar5 + 0xc) + piVar4[6]);
      param_2 = param_2 + 1;
      uVar2 = *puVar8;
      bVar1 = *(byte *)(puVar8 + 1);
      param_1._0_1_ = (byte)uVar2;
      *pbVar6 = (byte)param_1;
      param_1._1_1_ = (byte)((ushort)uVar2 >> 8);
      pbVar6[1] = param_1._1_1_;
      pbVar6[2] = bVar1;
      pbVar6 = pbVar6 + iVar3;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

