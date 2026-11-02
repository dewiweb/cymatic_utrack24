// rea decompile_all
// name: FUN_004f98ea
// address: 0x4f98ea
// body: available
// range: 0x4f98ea-0x4f992c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f98ea(float param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == 1.0) {
    puVar2 = (undefined4 *)&stack0x00000008;
  }
  else {
    local_c = FUN_005b3fb0();
    local_8 = FUN_005b3fb0();
    puVar2 = &local_c;
  }
  uVar1 = *puVar2;
  unaff_ESI[1] = puVar2[1];
  *unaff_ESI = uVar1;
  return;
}

