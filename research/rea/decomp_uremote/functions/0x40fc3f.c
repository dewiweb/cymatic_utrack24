// rea decompile_all
// name: FUN_0040fc3f
// address: 0x40fc3f
// body: available
// range: 0x40fc3f-0x40fc9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040fc3f(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00411af4();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if ((*(int *)(iVar1 + 0x24) == 0x6f75746c) && (iVar2 = *(int *)(iVar2 + 0x34), iVar2 != 0)) {
      (**(code **)(*(int *)(iVar1 + 0x38) + 0x14))(iVar2);
    }
    FUN_00411b21();
    FUN_00411a5c((int)uVar3);
    FUN_0040fb95();
  }
  return;
}

