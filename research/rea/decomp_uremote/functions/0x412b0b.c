// rea decompile_all
// name: FUN_00412b0b
// address: 0x412b0b
// body: available
// range: 0x412b0b-0x412b4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00412b0b(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = FUN_00411ff2(param_3,param_1 + 5,&param_1);
  if (iVar3 == 0) {
    uVar1 = *param_1;
    iVar3 = FUN_0040ddcc(param_2,puVar2[0xb] | 4);
    if (iVar3 == 0) {
      *param_4 = uVar1;
    }
  }
  return;
}

