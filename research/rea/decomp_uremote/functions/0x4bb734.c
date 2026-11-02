// rea decompile_all
// name: FUN_004bb734
// address: 0x4bb734
// body: available
// range: 0x4bb734-0x4bb88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb734(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *local_8;
  
  if (*(int *)(in_EAX + 0x6c) < param_2) {
    *(int *)(in_EAX + 0x6c) = param_2;
    FUN_004a9aa3(param_2);
  }
  local_8 = *(byte **)(in_EAX + 0x68);
  FUN_004be711(local_8,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x48) + 0xc);
  pbVar2 = (byte *)(iVar1 * param_1 + *(int *)(in_EAX + 100));
  iVar7 = *(int *)(in_EAX + 0x50) * param_3 >> 8;
  if (iVar7 < 0xfe) {
    do {
      uVar3 = ((uint)*local_8 << 0x10 | (uint)*local_8) * iVar7;
      uVar4 = uVar3 >> 8 & 0xff00ff;
      iVar5 = 0x100 - (uVar3 >> 0x18);
      uVar3 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar5 >> 8 & 0xff00ff) + uVar4;
      iVar5 = ((uint)pbVar2[1] * iVar5 >> 8) + uVar4;
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      pbVar2[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      local_8 = local_8 + 1;
      pbVar2[2] = (byte)(uVar3 >> 0x10);
      *pbVar2 = (byte)uVar3;
      pbVar2 = pbVar2 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      uVar3 = (uint)*local_8;
      uVar6 = uVar3 << 0x10 | uVar3;
      uVar4 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar6;
      iVar7 = ((uint)pbVar2[1] * (0x100 - uVar3) >> 8) + uVar6;
      uVar3 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
      local_8 = local_8 + 1;
      pbVar2[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
      pbVar2[2] = (byte)(uVar3 >> 0x10);
      *pbVar2 = (byte)uVar3;
      pbVar2 = pbVar2 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

