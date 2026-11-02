// rea decompile_all
// name: FUN_0041ef78
// address: 0x41ef78
// body: available
// range: 0x41ef78-0x41f048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ef78(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_1[1];
  iVar1 = (iVar8 + -1 + param_3 & -iVar8) >> ((byte)*param_1 & 0x1f);
  iVar7 = iVar1;
  if ((int)param_1[5] < (int)((param_4 - iVar8) - param_3)) {
    iVar7 = (int)(-iVar8 & param_4) >> ((byte)*param_1 & 0x1f);
  }
  if ((-1 < iVar7) && (uVar5 = (uint)*(ushort *)(param_1 + 0xe), iVar1 < (int)uVar5)) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if ((int)uVar5 <= iVar7) {
      iVar7 = uVar5 - 1;
    }
    sVar3 = (short)(iVar1 >> 3);
    iVar8 = (int)sVar3;
    sVar4 = (short)(iVar7 >> 3);
    bVar6 = ~(byte)(0x7f >> ((byte)iVar7 & 7));
    if (iVar8 < *(short *)((int)param_1 + 0x9e)) {
      *(short *)((int)param_1 + 0x9e) = sVar3;
    }
    if ((int)*(short *)(param_1 + 0x28) < (int)sVar4) {
      *(short *)(param_1 + 0x28) = sVar4;
    }
    iVar7 = sVar4 - iVar8;
    pbVar2 = (byte *)(param_1[0x25] + param_1[0xf] + iVar8);
    param_3._3_1_ = (byte)(0xff >> ((byte)iVar1 & 7));
    if (iVar7 < 1) {
      *pbVar2 = *pbVar2 | bVar6 & param_3._3_1_;
    }
    else {
      *pbVar2 = *pbVar2 | param_3._3_1_;
      while (iVar7 = iVar7 + -1, 0 < iVar7) {
        pbVar2 = pbVar2 + 1;
        *pbVar2 = 0xff;
      }
      pbVar2[1] = pbVar2[1] | bVar6;
    }
  }
  return;
}

