// rea decompile_all
// name: FUN_004cf6e0
// address: 0x4cf6e0
// body: available
// range: 0x4cf6e0-0x4cf7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined4 local_8;
  
  if (in_EAX != 0) {
    iVar1 = FUN_004cf6b2();
    if (iVar1 == 0) {
      local_8 = FUN_005af82d();
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        FUN_004f5fb6();
        *(undefined4 *)(local_8 + 4) = 0;
        *(undefined4 *)(local_8 + 8) = 0;
        *(undefined4 *)(local_8 + 0xc) = 0;
        *(undefined4 *)(local_8 + 0x10) = 0;
        *(undefined4 *)(local_8 + 0x14) = 0;
      }
      if (*(int *)(unaff_EBX + 0x34) < *(int *)(unaff_EBX + 0x38) + 1) {
        FUN_004f8197();
      }
      iVar1 = *(int *)(unaff_EBX + 0x38);
      *(int *)(unaff_EBX + 0x38) = iVar1 + 1;
      *(int *)(*(int *)(unaff_EBX + 0x30) + iVar1 * 4) = local_8;
      FUN_004743df();
    }
    FUN_004cf01f(param_2,param_3,param_4,param_5,param_6);
    if (*(int *)(unaff_EBX + 0x24) < 1) {
      uVar2 = FUN_00467ec4();
      *(undefined4 *)(unaff_EBX + 0x3c) = uVar2;
      FUN_0047482e();
    }
  }
  return;
}

