// rea decompile_all
// name: FUN_004a21db
// address: 0x4a21db
// body: available
// range: 0x4a21db-0x4a223b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a21db(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar2 = *in_EAX;
  param_1 = param_1 + -2;
  *in_EAX = (byte)((ulonglong)(in_EAX[param_2] + 1 + (uint)bVar2) / 3);
  pbVar3 = in_EAX + param_2;
  uVar5 = (uint)bVar2;
  do {
    uVar4 = (uint)*pbVar3;
    pbVar1 = pbVar3 + param_2;
    param_1 = param_1 + -1;
    *pbVar3 = (byte)((*pbVar1 + uVar4 + 1 + uVar5) / 3);
    pbVar3 = pbVar1;
    uVar5 = uVar4;
  } while (0 < param_1);
  *pbVar1 = (byte)((*pbVar1 + 1 + uVar4) / 3);
  return;
}

