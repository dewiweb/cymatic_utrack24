// rea decompile_all
// name: FUN_00426b16
// address: 0x426b16
// body: available
// range: 0x426b16-0x426b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426b16(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int local_14 [3];
  undefined4 local_8;
  
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 8) != 0)) {
    local_14[0] = unaff_ESI[0xd];
    local_14[2] = unaff_ESI[0xe];
    local_14[1] = 0;
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,local_14);
    if (iVar2 == 0) {
      unaff_ESI[0xd] = (int)(short)local_14[0];
      unaff_ESI[0xe] = local_14[2] & 0xffffU;
      unaff_ESI[0x2c] = 0;
      unaff_ESI[0x2d] = 0;
      if ((char)unaff_ESI[0x10] == '\0') {
        *(undefined1 *)(unaff_ESI + 0x10) = 1;
        unaff_ESI[0xf] = local_14[2] & 0xffffU;
      }
    }
  }
  return;
}

