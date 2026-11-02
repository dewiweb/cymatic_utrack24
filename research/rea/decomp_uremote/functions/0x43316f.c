// rea decompile_all
// name: FUN_0043316f
// address: 0x43316f
// body: available
// range: 0x43316f-0x4331b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043316f(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = param_1;
  iVar3 = 0;
  puVar2 = (undefined4 *)FUN_0043311a();
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = *piVar1;
    iVar3 = (*(code *)*puVar2)(*(undefined4 *)(iVar3 + 100),
                               *(int *)(iVar3 + 4) * 0xfc + *(int *)(iVar3 + 0x130),&param_1);
    if (iVar3 == 0) {
      piVar1[10] = (int)param_1;
    }
  }
  return iVar3;
}

