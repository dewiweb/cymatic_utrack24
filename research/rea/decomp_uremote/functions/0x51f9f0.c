// rea decompile_all
// name: FUN_0051f9f0
// address: 0x51f9f0
// body: available
// range: 0x51f9f0-0x51fafa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)((int)in_ECX + 6); local_8 = local_8 + 1) {
    iVar1 = *(int *)(*in_ECX + local_8 * 4);
    cVar2 = FUN_005036a0(iVar1 + 0x6c,param_1);
    if (cVar2 == '\0') {
      FUN_00503650(param_2);
      *(undefined4 *)(iVar1 + 0x88) = param_3;
      *(undefined4 *)(iVar1 + 0x90) = param_4;
      *(undefined4 *)(iVar1 + 0x8c) = param_5;
      *(undefined4 *)(iVar1 + 0x94) = param_6;
      *(undefined4 *)(iVar1 + 0x9c) = param_7;
      *(undefined4 *)(iVar1 + 0x98) = param_8;
      *(undefined4 *)(iVar1 + 0xa4) = param_10;
      *(undefined4 *)(iVar1 + 0xa0) = param_9;
      FUN_00501e80(param_11);
      FUN_00501e80(param_12);
      FUN_0051e7d0(param_13);
      *(undefined1 *)(iVar1 + 0xd8) = 1;
    }
  }
  return;
}

