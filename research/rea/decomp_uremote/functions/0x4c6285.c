// rea decompile_all
// name: FUN_004c6285
// address: 0x4c6285
// body: available
// range: 0x4c6285-0x4c62d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c6285(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_004c4e62();
  iVar1 = FUN_004c4ea2();
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    uVar2 = FUN_004c4ea6();
    uVar4 = extraout_ECX;
    uVar5 = extraout_ECX;
    FUN_004c08d2(uVar2,0,param_1,param_2);
    iVar3 = FUN_004c0f4a(uVar4,uVar5);
  } while (iVar3 == 0);
  return iVar3;
}

