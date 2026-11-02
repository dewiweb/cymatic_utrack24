// rea decompile_all
// name: FUN_004380f9
// address: 0x4380f9
// body: available
// range: 0x4380f9-0x4381b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004380f9(void)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(in_EAX + 0x34);
  uVar5 = *(uint *)(in_EAX + 0x18);
  if (((*(char *)(in_EAX + 0x20) != '\0') || (*(int *)(in_EAX + 0x1c) <= (int)uVar5)) ||
     (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38))) {
    if (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38)) {
      uVar6 = uVar6 + 1;
      *(uint *)(in_EAX + 0x34) = uVar6;
      if (uVar6 < *(uint *)(in_EAX + 0x28)) {
        iVar2 = (1 << ((byte)uVar6 & 0x1f)) + -0x100;
      }
      else {
        iVar2 = *(int *)(in_EAX + 0x30) + 1;
      }
      *(int *)(in_EAX + 0x3c) = iVar2;
    }
    if (*(char *)(in_EAX + 0x20) != '\0') {
      uVar6 = 9;
      *(undefined4 *)(in_EAX + 0x34) = 9;
      *(undefined4 *)(in_EAX + 0x3c) = 0x100;
      *(undefined1 *)(in_EAX + 0x20) = 0;
    }
    iVar2 = FUN_004380b0();
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar5 = 0;
  }
  *(uint *)(in_EAX + 0x18) = uVar5 + uVar6;
  pbVar1 = (byte *)(((int)uVar5 >> 3) + 8 + in_EAX);
  iVar2 = -(uVar5 & 7);
  iVar7 = iVar2 + 8;
  uVar5 = (uint)(*pbVar1 >> (sbyte)(uVar5 & 7));
  uVar6 = uVar6 - iVar7;
  pbVar4 = pbVar1 + 1;
  if (7 < uVar6) {
    bVar3 = (byte)iVar7;
    iVar7 = iVar2 + 0x10;
    uVar5 = uVar5 | (uint)*pbVar4 << (bVar3 & 0x1f);
    pbVar4 = pbVar1 + 2;
    uVar6 = uVar6 - 8;
  }
  if (uVar6 != 0) {
    uVar5 = uVar5 | ((1 << ((byte)uVar6 & 0x1f)) - 1U & (uint)*pbVar4) << ((byte)iVar7 & 0x1f);
  }
  return uVar5;
}

