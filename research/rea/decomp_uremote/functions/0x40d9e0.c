// rea decompile_all
// name: FUN_0040d9e0
// address: 0x40d9e0
// body: available
// range: 0x40d9e0-0x40da84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d9e0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_EAX;
  uint uVar3;
  uint *unaff_EDI;
  int local_8;
  
  *param_1 = 0;
  if (in_EAX == (undefined4 *)0x0) {
    return 0x21;
  }
  if (unaff_EDI == (uint *)0x0) {
    return 6;
  }
  uVar1 = *in_EAX;
  uVar3 = FUN_00411912(0x28,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  *(undefined4 *)(uVar3 + 0x1c) = uVar1;
  uVar2 = *unaff_EDI;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) == 0) {
      if (((uVar2 & 2) != 0) && (unaff_EDI[4] != 0)) {
        FUN_00411a5c(uVar3);
        uVar3 = unaff_EDI[4];
        goto LAB_0040da2d;
      }
      local_8 = 6;
    }
    else {
      local_8 = FUN_00412f94();
      *(uint *)(uVar3 + 0x10) = unaff_EDI[3];
    }
    if (local_8 != 0) {
      FUN_00411a5c(uVar3);
      uVar3 = 0;
      goto LAB_0040da30;
    }
  }
  else {
    FUN_00411045(unaff_EDI[2]);
  }
LAB_0040da2d:
  *(undefined4 *)(uVar3 + 0x1c) = uVar1;
LAB_0040da30:
  *param_1 = uVar3;
  return local_8;
}

