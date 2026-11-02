// rea decompile_all
// name: FUN_004bb4aa
// address: 0x4bb4aa
// body: available
// range: 0x4bb4aa-0x4bb5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb4aa(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int in_EAX;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  if (*(int *)(in_EAX + 0x6c) < param_2) {
    *(int *)(in_EAX + 0x6c) = param_2;
    FUN_004ab013();
  }
  pbVar8 = *(byte **)(in_EAX + 0x68);
  FUN_004beb3b(pbVar8,param_1,param_2);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x48) + 0xc);
  pbVar4 = (byte *)(iVar3 * param_1 + *(int *)(in_EAX + 100));
  iVar6 = *(int *)(in_EAX + 0x50) * param_3 >> 8;
  if (iVar6 < 0xfe) {
    do {
      uVar5 = (pbVar8[1] | 0xff0000) * iVar6;
      iVar9 = 0x100 - (uVar5 >> 0x18);
      iVar7 = ((uint)pbVar4[1] * iVar9 >> 8) + (uVar5 >> 8 & 0xff00ff);
      uVar5 = (((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar6 >> 8 & 0xff00ff) +
              (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar9 >> 8 & 0xff00ff);
      uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
      pbVar4[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
      *pbVar4 = (byte)uVar5;
      pbVar8 = pbVar8 + 3;
      pbVar4[2] = (byte)(uVar5 >> 0x10);
      pbVar4 = pbVar4 + iVar3;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      uVar2 = *(undefined2 *)pbVar8;
      bVar1 = pbVar8[2];
      param_3._0_1_ = (byte)uVar2;
      *pbVar4 = (byte)param_3;
      param_3._1_1_ = (byte)((ushort)uVar2 >> 8);
      pbVar4[1] = param_3._1_1_;
      pbVar4[2] = bVar1;
      pbVar8 = pbVar8 + 3;
      pbVar4 = pbVar4 + iVar3;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

