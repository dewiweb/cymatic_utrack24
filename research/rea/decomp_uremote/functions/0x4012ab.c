// rea decompile_all
// name: FUN_004012ab
// address: 0x4012ab
// body: available
// range: 0x4012ab-0x40133f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004012ab(undefined4 *param_1)

{
  int *piVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 *unaff_ESI;
  int local_8;
  
  piVar2 = (int *)0x0;
  local_8 = 0;
  if (in_EAX < (uint)unaff_ESI[1]) {
    piVar1 = (int *)(&PTR_DAT_008f96cc)[*(byte *)(unaff_ESI[2] + in_EAX) & 0x7f];
    piVar2 = (int *)unaff_ESI[*piVar1 + 3];
    if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_00411912(piVar1[2],&local_8), local_8 == 0))
    {
      *piVar2 = (int)piVar1;
      if (((code *)piVar1[3] == (code *)0x0) ||
         (local_8 = (*(code *)piVar1[3])(piVar2,*unaff_ESI), local_8 == 0)) {
        unaff_ESI[*piVar1 + 3] = piVar2;
      }
      else {
        if ((code *)piVar1[5] != (code *)0x0) {
          (*(code *)piVar1[5])(piVar2);
        }
        FUN_00411a5c(piVar2);
        piVar2 = (int *)0x0;
      }
    }
  }
  else {
    local_8 = 6;
  }
  *param_1 = piVar2;
  return local_8;
}

