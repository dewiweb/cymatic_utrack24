// rea decompile_all
// name: FUN_004bba7e
// address: 0x4bba7e
// body: available
// range: 0x4bba7e-0x4bbafc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bba7e(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  byte *pbVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(in_ECX + 0x6c) < in_EAX) {
    *(int *)(in_ECX + 0x6c) = in_EAX;
    FUN_004ab013();
  }
  FUN_004beb3b(*(undefined4 *)(in_ECX + 0x68),param_1,in_EAX);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  pbVar2 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 100));
  iVar3 = *(int *)(in_ECX + 0x50) * param_2 >> 8;
  if (iVar3 < 0xfe) {
    uVar4 = (iVar3 + 1) * 0xff;
    do {
      *pbVar2 = (char)((uint)*pbVar2 * (0x100 - (uVar4 >> 8)) >> 8) + (char)(uVar4 >> 8);
      pbVar2 = pbVar2 + iVar1;
      in_EAX = in_EAX + -1;
    } while (0 < in_EAX);
  }
  else {
    do {
      *pbVar2 = 0xff;
      pbVar2 = pbVar2 + iVar1;
      in_EAX = in_EAX + -1;
    } while (0 < in_EAX);
  }
  return;
}

