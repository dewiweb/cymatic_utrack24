// rea decompile_all
// name: FUN_004bad53
// address: 0x4bad53
// body: available
// range: 0x4bad53-0x4baef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bad53(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *local_8;
  
  if (*(int *)(in_EAX + 0x6c) < param_2) {
    *(int *)(in_EAX + 0x6c) = param_2;
    FUN_004a9aa3(param_2);
  }
  local_8 = *(byte **)(in_EAX + 0x68);
  FUN_004be5c0(local_8,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x48) + 0xc);
  puVar2 = (uint *)(iVar1 * param_1 + *(int *)(in_EAX + 100));
  iVar6 = *(int *)(in_EAX + 0x50) * param_3 >> 8;
  if (iVar6 < 0xfe) {
    do {
      uVar5 = ((uint)*local_8 << 0x10 | (uint)*local_8) * iVar6;
      uVar4 = uVar5 >> 8 & 0xff00ff;
      iVar3 = 0x100 - (uVar5 >> 0x18);
      uVar5 = uVar4 + ((*puVar2 >> 8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      uVar4 = ((*puVar2 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) + uVar4;
      local_8 = local_8 + 1;
      *puVar2 = (((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100) ^
                (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                ((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100);
      puVar2 = (uint *)((int)puVar2 + iVar1);
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      uVar7 = (uint)*local_8;
      uVar4 = uVar7 << 0x10 | uVar7;
      uVar5 = uVar4 + ((*puVar2 >> 8 & 0xff00ff) * (0x100 - uVar7) >> 8 & 0xff00ff);
      uVar4 = ((*puVar2 & 0xff00ff) * (0x100 - uVar7) >> 8 & 0xff00ff) + uVar4;
      local_8 = local_8 + 1;
      *puVar2 = (((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100) ^
                (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                ((0x100 - (uVar5 >> 8 & 0xff00ff)) * 0x100 | uVar5 * 0x100);
      puVar2 = (uint *)((int)puVar2 + iVar1);
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

