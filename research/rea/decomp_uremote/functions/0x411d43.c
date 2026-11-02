// rea decompile_all
// name: FUN_00411d43
// address: 0x411d43
// body: available
// range: 0x411d43-0x411e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00411d43(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_EDX;
  uint *unaff_EBX;
  int local_c;
  undefined4 local_8;
  
  if ((*unaff_EBX < unaff_EBX[1]) || (unaff_EBX[1] == 0)) {
    local_8 = FUN_00411912(unaff_EBX[4],&local_c);
    if (local_c != 0) goto LAB_00411dff;
  }
  else {
    local_8 = *(undefined4 *)(unaff_EBX[2] + 4);
    if (unaff_EBX[7] != 0) {
      uVar1 = FUN_00411cc2();
      iVar2 = (*(code *)unaff_EBX[7])(uVar1,param_1,unaff_EBX[3]);
      local_c = 0;
      if (iVar2 == 0) goto LAB_00411dff;
    }
    FUN_00411ce4();
    *unaff_EBX = *unaff_EBX - 1;
    if ((code *)unaff_EBX[8] != (code *)0x0) {
      (*(code *)unaff_EBX[8])(extraout_EDX,unaff_EBX[3]);
    }
  }
  local_c = (*(code *)unaff_EBX[6])(local_8,param_1,unaff_EBX[3]);
  if (local_c == 0) {
    FUN_00411ca5();
    *unaff_EBX = *unaff_EBX + 1;
  }
  else {
    if ((code *)unaff_EBX[8] != (code *)0x0) {
      (*(code *)unaff_EBX[8])(local_8,unaff_EBX[3]);
    }
    FUN_00411a5c(local_8);
    local_8 = 0;
  }
LAB_00411dff:
  *param_2 = local_8;
  return local_c;
}

