// rea decompile_all
// name: FUN_004c2121
// address: 0x4c2121
// body: available
// range: 0x4c2121-0x4c213f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2121(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar1 = FUN_004bf254(1);
  FUN_004c5a2c(uVar1,uVar3);
  piVar2 = (int *)thunk_FUN_004c1d58();
                    /* WARNING: Could not recover jumptable at 0x004c213d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x3c))();
  return;
}

