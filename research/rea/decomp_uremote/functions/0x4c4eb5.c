// rea decompile_all
// name: FUN_004c4eb5
// address: 0x4c4eb5
// body: available
// range: 0x4c4eb5-0x4c4f2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c4eb5(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = *(int *)(param_1 + 0x44);
  do {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + iVar3 * 4);
    } while ((*(byte *)(iVar1 + 0x68) & 2) == 0);
    FUN_004c08d2(iVar1,0,param_2,param_3);
    cVar2 = FUN_004c0e4c(local_14,local_10);
  } while (cVar2 == '\0');
  uVar4 = FUN_004c0f4a(local_14,local_10);
  return uVar4;
}

