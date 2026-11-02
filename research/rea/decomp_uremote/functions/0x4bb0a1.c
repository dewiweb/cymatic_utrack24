// rea decompile_all
// name: FUN_004bb0a1
// address: 0x4bb0a1
// body: available
// range: 0x4bb0a1-0x4bb20d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb0a1(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  
  if (*(int *)(in_EAX + 0x6c) < param_2) {
    *(int *)(in_EAX + 0x6c) = param_2;
    FUN_004a6644(param_2);
  }
  puVar7 = *(uint **)(in_EAX + 0x68);
  FUN_004be4cc(puVar7,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x48) + 0xc);
  pbVar6 = (byte *)(iVar1 * param_1 + *(int *)(in_EAX + 100));
  iVar4 = *(int *)(in_EAX + 0x50) * param_3 >> 8;
  if (iVar4 < 0xfe) {
    do {
      uVar2 = (*puVar7 >> 8 & 0xff00ff) * iVar4;
      iVar3 = 0x100 - (uVar2 >> 0x18);
      iVar5 = ((uint)pbVar6[1] * iVar3 >> 8) + (uVar2 >> 8 & 0xff00ff);
      uVar2 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar3 >> 8 & 0xff00ff) +
              ((*puVar7 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      uVar2 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
      pbVar6[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      puVar7 = puVar7 + 1;
      pbVar6[2] = (byte)(uVar2 >> 0x10);
      *pbVar6 = (byte)uVar2;
      pbVar6 = pbVar6 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      iVar4 = 0x100 - (uint)*(byte *)((int)puVar7 + 3);
      uVar2 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar4 >> 8 & 0xff00ff) +
              (*puVar7 & 0xff00ff);
      iVar4 = ((uint)pbVar6[1] * iVar4 >> 8) + (*puVar7 >> 8 & 0xff00ff);
      uVar2 = (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) & 0xff00ff;
      pbVar6[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
      pbVar6[2] = (byte)(uVar2 >> 0x10);
      *pbVar6 = (byte)uVar2;
      pbVar6 = pbVar6 + iVar1;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

