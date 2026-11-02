// rea decompile_all
// name: FUN_0040dd35
// address: 0x40dd35
// body: available
// range: 0x40dd35-0x40ddcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040dd35(char param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == '\0') {
    uVar3 = *(uint *)(in_EAX + 0x20);
    iVar2 = *(int *)(in_EAX + 0x24);
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & 0xffffffc0;
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xffffffc0;
    uVar4 = uVar3 & 0xffffffc0;
    *(uint *)(in_EAX + 0x20) = uVar4;
    iVar1 = (*(int *)(in_EAX + 0x18) + 0x3f + uVar3 & 0xffffffc0) - uVar4;
    uVar3 = iVar2 + 0x3fU & 0xffffffc0;
    *(uint *)(in_EAX + 0x24) = uVar3;
    iVar2 = uVar3 - (iVar2 - *(int *)(in_EAX + 0x1c) & 0xffffffc0U);
  }
  else {
    uVar3 = *(uint *)(in_EAX + 0x30);
    *(uint *)(in_EAX + 0x20) = *(uint *)(in_EAX + 0x20) & 0xffffffc0;
    *(uint *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + 0x3fU & 0xffffffc0;
    uVar5 = *(uint *)(in_EAX + 0x2c) & 0xffffffc0;
    uVar4 = uVar3 & 0xffffffc0;
    iVar1 = (*(int *)(in_EAX + 0x18) + 0x3f + *(uint *)(in_EAX + 0x2c) & 0xffffffc0) - uVar5;
    *(uint *)(in_EAX + 0x2c) = uVar5;
    *(uint *)(in_EAX + 0x30) = uVar4;
    iVar2 = (uVar3 + 0x3f + *(int *)(in_EAX + 0x1c) & 0xffffffc0) - uVar4;
  }
  *(int *)(in_EAX + 0x18) = iVar1;
  *(uint *)(in_EAX + 0x28) = *(int *)(in_EAX + 0x28) + 0x20U & 0xffffffc0;
  *(int *)(in_EAX + 0x1c) = iVar2;
  *(uint *)(in_EAX + 0x34) = *(int *)(in_EAX + 0x34) + 0x20U & 0xffffffc0;
  return;
}

