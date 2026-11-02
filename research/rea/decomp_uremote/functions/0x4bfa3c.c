// rea decompile_all
// name: FUN_004bfa3c
// address: 0x4bfa3c
// body: available
// range: 0x4bfa3c-0x4bfad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bfa3c(float param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  
  local_c = 0.0;
  if (param_1 == 1.0) {
    puVar2 = &param_2;
  }
  else {
    local_c = (float)param_2 / param_1;
    local_1c = FUN_004a8e4a(local_c);
    local_c = (float)param_3 / param_1;
    local_18 = FUN_004a8e4a(local_c);
    local_c = (float)param_4 / param_1;
    local_14 = FUN_004a8e4a(local_c);
    local_10 = FUN_004a8e4a((float)param_5 / param_1);
    puVar2 = &local_1c;
  }
  *unaff_ESI = *puVar2;
  unaff_ESI[1] = puVar2[1];
  uVar1 = puVar2[2];
  unaff_ESI[3] = puVar2[3];
  unaff_ESI[2] = uVar1;
  return;
}

