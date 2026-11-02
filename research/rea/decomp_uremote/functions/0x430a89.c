// rea decompile_all
// name: FUN_00430a89
// address: 0x430a89
// body: available
// range: 0x430a89-0x430aba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00430a89(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*in_EAX + 0x228);
  iVar3 = FUN_0040ff71("pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}

