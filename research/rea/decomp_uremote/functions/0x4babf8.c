// rea decompile_all
// name: FUN_004babf8
// address: 0x4babf8
// body: available
// range: 0x4babf8-0x4bad52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004babf8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint3 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(in_EAX + 0x6c) < param_2) {
    *(int *)(in_EAX + 0x6c) = param_2;
    FUN_004ab013();
  }
  puVar5 = *(uint3 **)(in_EAX + 0x68);
  FUN_004beb3b(puVar5,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x48) + 0xc);
  puVar3 = (uint *)(iVar1 * param_1 + *(int *)(in_EAX + 100));
  iVar6 = (int)(*(int *)(in_EAX + 0x50) * param_3) >> 8;
  if (iVar6 < 0xfe) {
    do {
      uVar2 = (*(byte *)((int)puVar5 + 1) | 0xff0000) * iVar6;
      iVar7 = 0x100 - (uVar2 >> 0x18);
      uVar2 = (uVar2 >> 8 & 0xff00ff) + ((*puVar3 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
      uVar4 = (((uint)*(byte *)((int)puVar5 + 2) << 0x10 | (uint)(byte)*puVar5) * iVar6 >> 8 &
              0xff00ff) + ((*puVar3 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
      puVar5 = (uint3 *)((int)puVar5 + 3);
      *puVar3 = (((0x100 - (uVar2 >> 8 & 0xff00ff)) * 0x100 | uVar2 * 0x100) ^
                (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
                (0x100 - (uVar2 >> 8 & 0xff00ff) | uVar2) << 8;
      puVar3 = (uint *)((int)puVar3 + iVar1);
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  else {
    do {
      param_3 = (uint)*puVar5;
      uVar2 = param_3;
      param_3._1_1_ = (byte)((ushort)(short)*puVar5 >> 8);
      *puVar3 = ((*(byte *)((int)puVar5 + 2) | 0xffffff00) << 8 | (uint)param_3._1_1_) << 8 |
                uVar2 & 0xff;
      puVar5 = (uint3 *)((int)puVar5 + 3);
      puVar3 = (uint *)((int)puVar3 + iVar1);
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}

