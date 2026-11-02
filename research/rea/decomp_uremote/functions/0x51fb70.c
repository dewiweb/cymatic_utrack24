// rea decompile_all
// name: FUN_0051fb70
// address: 0x51fb70
// body: available
// range: 0x51fb70-0x51fbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051fb70(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)((int)in_ECX + 6); local_8 = local_8 + 1) {
    iVar1 = *(int *)(*in_ECX + local_8 * 4);
    iVar3 = iVar1 + 0x6c;
    uVar4 = 0x51fbb5;
    uVar5 = param_1;
    cVar2 = FUN_00503830(iVar3,param_1);
    if (cVar2 != '\0') {
      *(byte *)(iVar1 + 0xd8) = *(byte *)(iVar1 + 0xd8) & 0xfd;
      FUN_005033e0(iVar1 + 0x6c);
      FUN_0051fdc0(uVar4,iVar3,uVar5);
    }
  }
  return;
}

