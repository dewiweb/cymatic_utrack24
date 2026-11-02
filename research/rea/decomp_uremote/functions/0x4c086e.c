// rea decompile_all
// name: FUN_004c086e
// address: 0x4c086e
// body: available
// range: 0x4c086e-0x4c08d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c086e(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  int local_30;
  int local_2c;
  undefined1 local_1c [16];
  undefined1 *local_c;
  
  local_c = (undefined1 *)&local_30;
  piVar2 = (int *)FUN_004c0848(param_1,local_1c);
  local_30 = piVar2[2] / 2 + *piVar2;
  local_2c = piVar2[3] / 2 + piVar2[1];
  FUN_004c4e62();
  puVar3 = (undefined4 *)FUN_004c53da();
  *unaff_ESI = *puVar3;
  unaff_ESI[1] = puVar3[1];
  uVar1 = puVar3[2];
  unaff_ESI[3] = puVar3[3];
  unaff_ESI[2] = uVar1;
  return;
}

