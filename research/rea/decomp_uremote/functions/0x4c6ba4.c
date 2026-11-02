// rea decompile_all
// name: FUN_004c6ba4
// address: 0x4c6ba4
// body: available
// range: 0x4c6ba4-0x4c6c29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined1 param_13,char param_14)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = param_2;
  unaff_ESI[1] = param_3;
  uVar1 = FUN_004a8e4a(param_2);
  unaff_ESI[2] = uVar1;
  uVar1 = FUN_004a8e4a(param_3);
  unaff_ESI[3] = uVar1;
  FUN_004d076d();
  unaff_ESI[5] = param_5;
  unaff_ESI[6] = param_6;
  FUN_00467e6f();
  FUN_00467e6f();
  FUN_004d076d();
  unaff_ESI[0xd] = param_9;
  unaff_ESI[0xe] = param_10;
  *(undefined1 *)(unaff_ESI + 0xf) = param_13;
  *(bool *)((int)unaff_ESI + 0x3d) = param_14 != '\0';
  return;
}

