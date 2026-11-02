// rea decompile_all
// name: FUN_004053be
// address: 0x4053be
// body: available
// range: 0x4053be-0x40543f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004053be(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  int iVar4;
  int local_c;
  int *local_8;
  
  piVar1 = (int *)unaff_ESI[3];
  iVar4 = unaff_ESI[1];
  local_c = 0;
  unaff_ESI[1] = iVar4 * 2;
  *unaff_ESI = (iVar4 * 2) / 3;
  iVar2 = FUN_00411976(4,0,&local_c);
  unaff_ESI[3] = iVar2;
  if (local_c == 0) {
    local_8 = piVar1;
    if (0 < iVar4) {
      do {
        if ((undefined4 *)*local_8 != (undefined4 *)0x0) {
          piVar3 = (int *)FUN_00405362(*(undefined4 *)*local_8);
          *piVar3 = *local_8;
        }
        local_8 = local_8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00411a5c(piVar1);
  }
  return local_c;
}

