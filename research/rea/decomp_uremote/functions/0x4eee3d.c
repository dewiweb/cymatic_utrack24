// rea decompile_all
// name: FUN_004eee3d
// address: 0x4eee3d
// body: available
// range: 0x4eee3d-0x4eeebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eee3d(undefined1 param_1,char param_2)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  undefined4 uVar2;
  
  iVar1 = unaff_EBX[0x20];
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  if (in_EAX != iVar1) {
    FUN_004eedfc();
    FUN_004f77e9();
    FUN_004a4d78();
    FUN_004c1064(0xffffffff);
  }
  *(undefined1 *)(unaff_EBX + 0x21) = param_1;
  *(char *)((int)unaff_EBX + 0x85) = param_2;
  if (param_2 != '\0') {
    iVar1 = unaff_EBX[0x20];
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    (**(code **)(*unaff_EBX + 0x8c))(uVar2);
  }
  (**(code **)(*unaff_EBX + 0x84))();
  return;
}

