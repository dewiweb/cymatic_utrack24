// rea decompile_all
// name: FUN_005a2530
// address: 0x5a2530
// body: available
// range: 0x5a2530-0x5a25b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005a2530(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  undefined1 local_10 [8];
  int local_8;
  
  for (local_8 = *in_ECX; local_8 != 0; local_8 = *(int *)(local_8 + 0x70)) {
    iVar2 = param_2;
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc)) + 4))
              (local_10,param_2);
    uVar1 = FUN_005a55e0(iVar2);
    in_ECX = (int *)(uVar1 & 0xff);
    if (in_ECX == (int *)0x0) break;
  }
  if (local_8 == 0) {
    uVar1 = (uint)in_ECX & 0xffffff00;
  }
  else {
    uVar1 = FUN_005a4430(param_1,*(undefined2 *)(param_2 + 6));
  }
  return uVar1;
}

