// rea decompile_all
// name: FUN_0040f38d
// address: 0x40f38d
// body: available
// range: 0x40f38d-0x40f40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040f38d(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int in_ECX;
  short *psVar3;
  
  iVar1 = *(int *)(in_ECX + 0x58);
  psVar3 = (short *)(in_EAX * 0x10 + *(int *)(in_ECX + 0x20));
  *(short *)(iVar1 + 0xc) = (short)(*(int *)(psVar3 + 4) + 0x20 >> 6);
  *(short *)(iVar1 + 0xe) = (short)(*(int *)(psVar3 + 6) + 0x20 >> 6);
  if ((*(byte *)(in_ECX + 8) & 1) == 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0x10000;
    *(undefined4 *)(iVar1 + 0x14) = 0x10000;
    uVar2 = *(undefined4 *)(psVar3 + 6);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(int *)(iVar1 + 0x20) = (int)*psVar3 << 6;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(psVar3 + 4);
  }
  else {
    uVar2 = FUN_0040d2d8();
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    uVar2 = FUN_0040d2d8();
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    FUN_0040f334();
  }
  return;
}

