// rea decompile_all
// name: FUN_004fb75e
// address: 0x4fb75e
// body: available
// range: 0x4fb75e-0x4fb7ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb75e(undefined4 param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_20 [6];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  *unaff_EBX = param_1;
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  unaff_EBX[4] = 0;
  unaff_EBX[5] = 0;
  unaff_EBX[6] = 0;
  pcVar2 = "GraphicsContextPrograms";
  puVar3 = local_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  FUN_004fe2f3(local_20);
  FUN_004a4d78();
  if (unaff_EBX[1] == 0) {
    iVar1 = FUN_005af82d(0x318);
    if (iVar1 != 0) {
      FUN_004fad1e(iVar1,*unaff_EBX);
    }
    FUN_004a4d78();
    FUN_004fe36f(*unaff_EBX,local_20,unaff_EBX[1]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

