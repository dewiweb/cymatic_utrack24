// rea decompile_all
// name: FUN_004bbf25
// address: 0x4bbf25
// body: available
// range: 0x4bbf25-0x4bc085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bbf25(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint3 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  puVar6 = (uint *)(iVar1 * param_2 + param_1[5]);
  param_2 = param_2 - param_1[3];
  iVar2 = (int)(param_1[2] * param_4) >> 8;
  if (iVar2 < 0xfe) {
    do {
      pbVar4 = (byte *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                       param_1[6]);
      uVar3 = (pbVar4[1] | 0xff0000) * iVar2;
      iVar7 = 0x100 - (uVar3 >> 0x18);
      uVar3 = (uVar3 >> 8 & 0xff00ff) + ((*puVar6 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
      uVar8 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar2 >> 8 & 0xff00ff) +
              ((*puVar6 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
      param_2 = param_2 + 1;
      *puVar6 = (((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100) ^
                (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) << 8;
      puVar6 = (uint *)((int)puVar6 + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  else {
    do {
      puVar5 = (uint3 *)((param_2 % *(int *)(param_1[1] + 0x10)) * *(int *)(param_1[1] + 0xc) +
                        param_1[6]);
      param_4 = (uint)*puVar5;
      uVar3 = param_4;
      param_4._1_1_ = (byte)((ushort)(short)*puVar5 >> 8);
      param_2 = param_2 + 1;
      *puVar6 = ((*(byte *)((int)puVar5 + 2) | 0xffffff00) << 8 | (uint)param_4._1_1_) << 8 |
                uVar3 & 0xff;
      puVar6 = (uint *)((int)puVar6 + iVar1);
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return;
}

