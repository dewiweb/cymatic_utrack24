// rea decompile_all
// name: FUN_004f2de3
// address: 0x4f2de3
// body: available
// range: 0x4f2de3-0x4f2e55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004f2de3(int *param_1)

{
  POINT Point;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  undefined1 local_18 [8];
  LONG local_10;
  LONG local_c;
  
  puVar1 = (undefined4 *)FUN_004f3cf0();
  local_10 = FUN_004a8e4a(*puVar1);
  local_c = FUN_004a8e4a(puVar1[1]);
  Point.y = local_c;
  Point.x = local_10;
  WindowFromPoint(Point);
  piVar2 = (int *)FUN_004f1ae2();
  if (piVar2 == (int *)0x0) {
    piVar2 = param_1;
  }
  puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))(local_18,(float)local_10,(float)local_c);
  *unaff_EDI = *puVar1;
  unaff_EDI[1] = puVar1[1];
  return piVar2;
}

