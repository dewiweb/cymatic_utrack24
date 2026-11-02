// rea decompile_all
// name: FUN_004bb948
// address: 0x4bb948
// body: available
// range: 0x4bb948-0x4bb9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb948(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (*(int *)(in_ECX + 0x6c) < in_EAX) {
    *(int *)(in_ECX + 0x6c) = in_EAX;
    FUN_004a6644(in_EAX);
  }
  iVar1 = *(int *)(in_ECX + 0x68);
  FUN_004be8d9(iVar1,param_1,in_EAX);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  pbVar3 = (byte *)(iVar2 * param_1 + *(int *)(in_ECX + 100));
  iVar4 = *(int *)(in_ECX + 0x50) * param_2 >> 8;
  if (iVar4 < 0xfe) {
    pbVar6 = (byte *)(iVar1 + 3);
    do {
      uVar5 = (uint)*pbVar6 * (iVar4 + 1);
      *pbVar3 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar3 >> 8) + (char)(uVar5 >> 8);
      pbVar3 = pbVar3 + iVar2;
      pbVar6 = pbVar6 + 4;
      in_EAX = in_EAX + -1;
    } while (0 < in_EAX);
  }
  else {
    pbVar6 = (byte *)(iVar1 + 3);
    do {
      *pbVar3 = (char)((0x100 - (uint)*pbVar6) * (uint)*pbVar3 >> 8) + *pbVar6;
      pbVar3 = pbVar3 + iVar2;
      pbVar6 = pbVar6 + 4;
      in_EAX = in_EAX + -1;
    } while (0 < in_EAX);
  }
  return;
}

