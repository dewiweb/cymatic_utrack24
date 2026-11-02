// rea decompile_all
// name: FUN_0040555a
// address: 0x40555a
// body: available
// range: 0x40555a-0x4055b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040555a(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  uint uVar4;
  int local_8;
  
  uVar1 = unaff_ESI[1];
  local_8 = 0;
  iVar3 = 0;
  if (uVar1 < param_1) {
    uVar4 = (uVar1 >> 1) + 5 + uVar1;
    if (uVar1 == 0x1fffffff) {
      iVar3 = 0x40;
    }
    else {
      if ((uVar4 < uVar1) || (0x1fffffff < uVar4)) {
        uVar4 = 0x1fffffff;
      }
      uVar2 = FUN_00411976(4,*unaff_ESI,&local_8);
      *unaff_ESI = uVar2;
      iVar3 = local_8;
      if (local_8 == 0) {
        unaff_ESI[1] = uVar4;
      }
    }
  }
  return iVar3;
}

