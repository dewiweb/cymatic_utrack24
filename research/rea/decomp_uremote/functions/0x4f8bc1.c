// rea decompile_all
// name: FUN_004f8bc1
// address: 0x4f8bc1
// body: available
// range: 0x4f8bc1-0x4f8c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8bc1(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int local_c;
  int local_8;
  
  local_8 = param_1[2];
  if (unaff_EBX[1] < unaff_EBX[2] + local_8) {
    FUN_004f8197();
  }
  local_8 = local_8 + -1;
  if (-1 < local_8) {
    local_c = 0;
    do {
      iVar3 = *(int *)(local_c + *param_1);
      iVar1 = unaff_EBX[2];
      unaff_EBX[2] = iVar1 + 1;
      iVar2 = *unaff_EBX;
      if (iVar3 == 0) {
LAB_004f8c2f:
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_005af82d(8);
        if (iVar3 == 0) goto LAB_004f8c2f;
        uVar4 = FUN_004e2b2e();
      }
      local_c = local_c + 4;
      local_8 = local_8 + -1;
      *(undefined4 *)(iVar2 + iVar1 * 4) = uVar4;
    } while (-1 < local_8);
  }
  return;
}

