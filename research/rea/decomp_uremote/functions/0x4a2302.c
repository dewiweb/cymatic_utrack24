// rea decompile_all
// name: FUN_004a2302
// address: 0x4a2302
// body: available
// range: 0x4a2302-0x4a245a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a2302(undefined4 param_1,undefined4 param_2)

{
  int unaff_EBX;
  int local_c0;
  float local_bc;
  int *local_b8 [31];
  undefined4 local_3c [4];
  undefined1 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x4a2311;
  local_b8[0] = local_3c;
  local_bc = 6.808429e-39;
  FUN_0047ccfc();
  local_b8[0] = (int *)0x4a232d;
  local_18 = FUN_00439b17();
  local_b8[0] = &local_28;
  local_2c = (undefined1 *)&local_c0;
  local_c0 = *(int *)(unaff_EBX + 8);
  local_14[0] = *(int *)(unaff_EBX + 4) + 1;
  local_bc = *(float *)(unaff_EBX + 0xc);
  FUN_00478ad2();
  FUN_004a51ab();
  FUN_004a4c0c();
  local_bc = 6.808556e-39;
  FUN_00439b17();
  local_bc = 6.80857e-39;
  FUN_004a4c72();
  if ((2 < local_20) && (2 < local_1c)) {
    local_b8[0] = (int *)0x1;
    local_bc = (float)local_1c;
    local_c0 = local_20;
    FUN_0047e303(local_14,3);
    local_8 = 0;
    local_b8[0] = (int *)0x4a23bc;
    FUN_0047cc87();
    local_2c = (undefined1 *)local_b8;
    local_8._0_1_ = 1;
    local_bc = 6.808674e-39;
    FUN_004d076d();
    local_bc = 6.808684e-39;
    FUN_0047cda7();
    local_b8[0] = (int *)(float)(*(int *)(unaff_EBX + 0xc) - local_24);
    local_18 = *(int *)(unaff_EBX + 8) - local_28;
    local_bc = (float)local_18;
    local_c0 = 0x4a2403;
    local_b8[0] = (int *)FUN_00477188();
    local_bc = (float)param_2;
    local_c0 = 0x4a240f;
    FUN_0047d2ae();
    local_8 = (uint)local_8._1_3_ << 8;
    local_b8[0] = (int *)0x4a241a;
    FUN_0047cca3();
    local_b8[0] = *(int **)(unaff_EBX + 4);
    local_bc = 6.808793e-39;
    FUN_004a22ad();
    local_bc = 6.80881e-39;
    FUN_004d076d();
    local_bc = 6.808821e-39;
    FUN_0047cda7();
    local_b8[0] = (int *)0x1;
    local_bc = (float)local_24;
    local_c0 = local_28;
    FUN_0047d915(param_1);
    local_b8[0] = (int *)0x4a2453;
    FUN_004c4d7a();
  }
  return;
}

