// rea decompile_all
// name: FUN_004ca095
// address: 0x4ca095
// body: available
// range: 0x4ca095-0x4ca18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca095(void)

{
  int iVar1;
  float *extraout_ECX;
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  undefined1 local_10 [4];
  undefined1 *local_c;
  
  FUN_0049f5e8();
  FUN_0047e37c();
  FUN_004c0c1f();
  FUN_004e3933(local_10);
  FUN_004c96de();
  FUN_004e2f64();
  FUN_004e2f64();
  iVar1 = FUN_0047e366();
  *extraout_ECX = (float)iVar1;
  extraout_ECX[1] = 0.0;
  FUN_004e3933(local_20);
  FUN_004c96de();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_0047e371();
  local_c = &stack0xffffffc8;
  FUN_004e3933(local_28);
  FUN_004c96de();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_004ca269();
  FUN_004c1613();
  return;
}

